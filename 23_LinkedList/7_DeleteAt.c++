
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

 /*    // delete from head
    l.deleteAtHead();
    l.display();
    l.deleteAtHead();
    l.display();
*/

    // delete at tail
    // l.deleteAtTail();
    // l.display();
    // l.deleteAtTail();
    // l.display();

    // delete at a specified index

    l.deleteAtIdx(2);
    l.display();

    return 0;
}