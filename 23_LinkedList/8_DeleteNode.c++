
/*
#include <iostream>
using namespace std;

class Node {
    public: 
    int val;
    Node* next;  
    
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
}; 

class LinkedList { 
public: 
    Node* head;
    Node* tail;
    int size;
    
    LinkedList() {
        head = tail = NULL;
        size = 0;
    }
    
    void display() {
        Node* temp = head;
        while (temp!=NULL)
        {
            cout<<temp->val<<" ";
            temp = temp->next ;
        }
        cout<<endl;
    }
    
    void insertAtBeginning(int val) {
        Node* temp = new Node(val);
        if(size==0) head = tail = temp; // tail ki value always last element 
        else {
            temp->next = head;
            head = temp;
        }
        size++;
    }
    
    // delete from head
    void deleteAtHead() {
        if(size == 0) {
            cout<<"List is empty";
            return;
        }
        head = head->next;
        size--;
    }
    
    // delete At tail
    
    void deleteAtTail() {
        if(size == 0) {
            cout<<"List is empty";
            return;
        }
        Node* temp = head;
        while(temp->next != tail) {
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }
    
    // delete at index
    void deleteAtIdx(int idx) {
        if(size == 0) {
            cout<<"List is empty";
            return;
        }
        else if(idx < 0 || idx >= size) {
            cout<<"invalid"<<endl;
            return;
        }
        else if(idx==0) return deleteAtHead();   
        else if(idx==0) return deleteAtTail(); 
        else {
            Node* temp = head;
            for(int i = 1; i <= idx-1;i++) {
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }  
    }
}; 

// display
void display(Node* head) {
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next ;
    }
    cout<<endl;
}

// given target value wala node delete
Node* deleteNode(Node* head , int targetVal) {
    if(head->val == targetVal) {
        head = head->next;
        return head;
    }
    Node* temp = head;
    while(temp->next->val != targetVal) {
        temp = temp->next;
    }
    temp->next = temp->next->next;
    return head;
}

int main() {
    Node* a = new Node(10);
     Node* b = new Node(20);
     Node* c = new Node(30);
     Node* d = new Node(40);
     Node* e = new Node(50);
     
     a->next = b;
     b->next = c;
     c->next = d;
     d->next = e;
     
     
     Node* head = a;
     display(head);
     head = deleteNode(a, 30);
     display(head);
     
     return 0;
    }
    */

    /* 
    leetcode 19 1st approach
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int len = 0;
        while(temp!=NULL) {
            temp = temp->next;
            len++;
        }
        if(n == len) {
            head = head->next;
            return head;
        }

        //int m = len - n + 1;
       // int idx = m - 1;
        
       temp = head;
       // for(int i = 1; i <= idx-1;i++) {
        //    temp = temp->next;
        //}
         
        for(int i = 1; i < len - n ;i++) {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};
    */

/*
19 best way

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow = head;
        ListNode* fast = head;
        for(int i = 1; i <= n+1; i++) {
            if(fast==NULL) return head->next;
            fast = fast->next;
        }
        while(fast!=NULL) {
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = slow->next->next;
        return head;
    }
};

*/

