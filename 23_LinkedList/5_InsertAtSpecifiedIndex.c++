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
        if(size==0) head = tail = temp;
        else {
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertAtEnd(int val) {
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void insertAtIdx(int val, int idx) {
        if(idx < 0 || idx > size) cout<<"Invalid index"<<endl;
        else if(idx == 0) insertAtBeginning(val);
        else if(idx == size) insertAtEnd(val);
        else {
            Node* t = new Node(val);
            Node* temp = head;
            for(int i = 1; i <= idx-1;i++) {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
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

    // insert at a specified Index
    l.insertAtIdx(9,3);
    l.display();
    return 0;
}
*/
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
        if(size==0) head = tail = temp;
        else {
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertAtEnd(int val) {
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void insertAtIdx(int val, int idx) {
        if(idx < 0 || idx > size) cout<<"Invalid index"<<endl;
        else if(idx == 0) insertAtBeginning(val);
        else if(idx == size) insertAtEnd(val);
        else {
            Node* t = new Node(val);
            Node* temp = head;
            for(int i = 1; i <= idx-1;i++) {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
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

    */
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

    int lengthfind () {
        Node* temp = head;
        int len = 0;
        while(temp!=NULL) {
            temp = temp->next;
            len++;
        }
        return len;
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

    void insertAtEnd(int val) {
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void insertAtIdx(int val, int idx) {
        if(idx < 0 || idx > size) cout<<"Invalid index"<<endl;
        else if(idx == 0) insertAtBeginning(val);
        else if(idx == size) insertAtEnd(val);
        else {
            Node* t = new Node(val);
            Node* temp = head;
            for(int i = 1; i <= idx-1;i++) {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
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

    cout<<l.lengthfind();
    return 0;
}
