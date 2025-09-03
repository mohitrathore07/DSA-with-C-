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
    Node a(4);
    Node b(5);
    Node c(6);
    Node d(4);

    // forming to linked list
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = NULL;

    // now to print we can do this

    cout<<a.val; // a ki value
    cout<<a.next; // a ke next me b ka address h

    cout<<(*(a.next)).val; // isse b ki value print - a.next pr b ka address h pointer h pointer se distruct kar li value

    // below and above are same thing

    cout<<(a.next)->val; // isse b ki value print - a.next pr b ka address h pointer h pointer se distruct kar li value
    cout<<endl;
    /// now print value of d 
    cout<< (*(*(*(a.next)).next).next).val;
    
    cout<<endl;
    
    cout<< a.next->next->next->val; // d ki value
    return 0;
}
*/

// loop access

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
    Node a(4);
    Node b(5);
    Node c(6);
    Node d(7);

    // forming to linked list
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = NULL;

    Node temp = a;

   /* 
    while(temp.next!=NULL) {
        cout<<temp.val<<" ";

        temp = *(temp.next); // temp ko each time address de rhe agla wala 
    }
   */

   // but d pe aate hi condition ke karan loop break value print nhi hui ''

   while (true)
   {
     cout<<temp.val<<" ";
     if(temp.next == NULL) break;
     temp = *(temp.next); 
   }
   
    return 0;
}