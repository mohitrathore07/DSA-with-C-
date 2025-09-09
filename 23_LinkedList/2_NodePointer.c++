/*
#include <iostream>
using namespace std;

class Node {
    public: 
    int val;
    Node* next;  // this will store the address of next Node

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
}; 

int main() {
   Node* a = new Node(10);
   Node* b = new Node(20);
   Node* c = new Node(30);
   Node* d = new Node(40);

   // now a ke address se a->next = b mtlb b ke node ka adress rkh do
   a->next = b;
   b->next = c;
   c->next = d;

    Node* temp = a;

    while (temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next; // last me d ka address hoga d ke next se NULL fill again check se condition false
    }

    cout<<endl;
    cout<<a->next->next->next->val; // address se traverse a ke next se a ke address se uska next mtlb b ka addresse
    return 0;
}
*/

// display value 

/*
#include <iostream>
using namespace std;

class Node {
    public: 
    int val;
    Node* next;  // this will store the address of next Node

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
}; 

void display(Node* head) { // address recieve 
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next; 
    }
    cout<<endl;
}

int size(Node* head){
    Node* temp = head;
    int n = 0;
    while (temp != NULL)
    {
        n++;
        temp = temp->next; 
    }
    return n;
}
int main() {
   Node* a = new Node(10);
   Node* b = new Node(20);
   Node* c = new Node(30);
   Node* d = new Node(40);

   a->next = b;
   b->next = c;
   c->next = d;

    display(a);

    cout<<size(a); // size 
    return 0;
}
*/

// display linked list using recursion
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

void display(Node* head) { // address recieve 
    if(head == NULL) return;
    cout<<head->val<<" ";
    display(head->next);
}

int main() {
   Node* a = new Node(10);
   Node* b = new Node(20);
   Node* c = new Node(30);
   Node* d = new Node(40);

   a->next = b;
   b->next = c;
   c->next = d;

   display(a);
    return 0;
}
*/


/*
//reverse order
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

void reversedisplay(Node* head) { // address recieve 
    if(head == NULL) return;
    reversedisplay(head->next);
    cout<<head->val<<" ";
}

int main() {
   Node* a = new Node(10);
   Node* b = new Node(20);
   Node* c = new Node(30);
   Node* d = new Node(40);

   a->next = b;
   b->next = c;
   c->next = d;

   reversedisplay(a);
    return 0;
}

*/

//insert node 
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

 void traverse(Node* head) {
        cout<<"printing values"<<endl;
        while (head && head->next)
        {
            cout<<head->val<<" ";
            head = head->next->next;
        }
    }

void insertAtEnd(Node* head, int val) {
     Node* t = new Node(val);
     while(head->next != NULL) head = head->next;
     head->next = t;
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

   Node* temp = a;
   while (temp!= NULL)
   {
     cout<<temp->val<<" ";
     temp = temp->next;
   }
   cout<<endl;

   insertAtEnd(a, 50);

   temp = a;
   while (temp != NULL)
   {
     cout<<temp->val<<" ";
     temp = temp->next;
   }


    traverse(a);
   return 0;
}
