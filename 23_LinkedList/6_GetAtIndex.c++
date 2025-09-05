
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
        if(size==0) head = tail = temp;
        else {
            temp->next = head;
            head = temp;
        }
        size++;
    }

   // get an element from a index
   int GetIdx(int idx) {
        if(idx < 0 || idx > size) {
            cout<<"Invalid idx"<<endl;
            return -1;
        }
        else if(idx == 0) return head->val;
        else if(idx == size) return tail->val;
        else {
            Node* temp = head;
            for(int i = 1; i <= idx; i++) {
                temp = temp->next;
            }
            return temp->val;
        }
   }
}; 

int main() {
    LinkedList l;
    l.insertAtBeginning(5);
    l.display();
    l.insertAtBeginning(6);
    l.display();
    l.insertAtBeginning(7);
    l.display();
    l.insertAtBeginning(8);
    l.display();

    //get index from a specified index
    cout<<l.GetIdx(3)<<endl;
    cout<<l.GetIdx(2)<<endl;
    return 0;
}