/*                                                                       22/07/2024                                                              */

// selling price cost price profit/loss question

/*
#include <iostream>
using namespace std;

int main () {
    int cp,sp;

    cout<<"enter selling price: "<<endl;
    cin>>sp;

    cout<<"enter cost price: "<<endl;
    cin>>cp;

    if (cp>sp) {
        int loss = cp - sp;
        cout<<"total loss is: "<<loss<<endl;
    }
    else {
        int profit = sp - cp;
        cout<<"total profit: "<<profit<<endl;
    }

    return 0;
}
*/
// another way

#include <iostream>
using namespace std;

int main () {
    int cp,sp;

    cout<<"enter selling price: "<<endl;
    cin>>sp;

    cout<<"enter cost price: "<<endl;
    cin>>cp;

    if (cp>sp) {
        int loss = cp - sp;
        cout<<"total loss is: "<<loss<<endl;
    }
   if(sp>cp) {
    int profit = sp - cp;
    cout<<"total profit is: "<<profit<<endl;
   }
   if (sp==cp) {
    cout<<"no profit no loss!!"<<endl;
   }
    return 0;
}