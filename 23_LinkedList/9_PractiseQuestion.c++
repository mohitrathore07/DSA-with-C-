
#include <iostream>
using namespace std;

class Node {
    public: 
    int val;
    Node* next;
    Node(int val) {
        this->val=val;
        this->next = NULL;
    }
};

class LinkedList {
    public:
    Node* head;
    Node* tail;
    int size;

    LinkedList() {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }
    void display() {
        Node* temp = head;
        while (temp)
        {
            cout<<temp->val<<" ";
            temp= temp->next;
        }
    }
     void insertNodeInALinkedListBegining(int val) {
        Node* temp = new Node(val); 
        if(size==0) head=tail=temp;

        else {
            temp->next=head;
            head = temp;
        }
        size++;
    }

    void insertNodeInALinkedListEnd(int val) {
        if(size==0) insertNodeInALinkedListBegining(val);
        else {
            Node* temp = new Node(val);   
            tail->next = temp;
            tail = temp;
            size++;
        }
    }

    void insertNodeInALinkedListSpecifiedIndex(int val,int idx) {
        if(idx < 0 || idx > size) cout<<"Invalid index"<<endl;
        else if(idx == 0) insertNodeInALinkedListBegining(val);
        else if(idx == size) insertNodeInALinkedListEnd(val);
        else {

            Node* t = new Node(val);
            Node* temp = head;
            for(int i = 1; i < idx-1;i++) {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }
    void deleteAtHead() {
        if(size == 0) {
            cout<<"empty";
            return;
        }
        head = head->next;
        size--;
    }

    void deleteAtTail() {
        if(size == 0) {
            cout<<"empty";
            return;
        }
        Node* temp = head;
        while(temp!=tail) {
            temp = temp->next;
        }
        temp->next = NULL;
        size--;
    }

    void deleteAtIdx(int idx) {
        if(idx == 1)  {
            deleteAtHead();
        }
        else if(idx == size) {
            deleteAtTail();
        }
        else {            
            Node* temp = head;
            for(int i = 1; i < idx;i++) {
                temp = temp->next;
            }
            temp->next= temp->next->next;
            size--;
        }
    }
};

int main() {
    LinkedList l;
    l.insertNodeInALinkedListBegining(1);
    l.insertNodeInALinkedListBegining(2);
    l.insertNodeInALinkedListBegining(3);
    l.insertNodeInALinkedListBegining(4);
    l.insertNodeInALinkedListBegining(5);
    // l.display();

    l.insertNodeInALinkedListEnd(10);
    l.insertNodeInALinkedListEnd(20);
    // l.display();

    l.insertNodeInALinkedListSpecifiedIndex(30,2);
    // l.display();

    l.deleteAtHead();
    l.display();
    return 0;
}