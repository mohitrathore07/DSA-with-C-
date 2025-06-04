/*                                                                21/08/2024                                                                   */
/*
#include <iostream>
using namespace std;

int main () {
    int n;
    cout<<"enter an integer: ";
    cin>>n;
    int count = 0;
    int a = n;
    while (n > 0)
    {
        n/= 10;
        count++;
    }
    if(a == 0 ) cout<<1;
    cout<<"Number of digits: "<<count<<endl;
    return 0;
}
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    cout<<"enter an integer: ";
    cin>>n;
    int sum = 0;
    while (n > 0)
    {
        int d = n % 10;
        sum += d;    
        n/= 10;
    }
     cout<<"Number of digits: "<<endl;
    return 0;
}