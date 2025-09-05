
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
    return 0;
}