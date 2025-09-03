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