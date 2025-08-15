/*

#include <iostream>
using namespace std;

// Function to print binary representation of a number
void printBinary(int n) {
    for (int i = 10; i >= 0; --i)
    {
        cout<<((n >> i) & 1);
    }
    cout<<endl;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Binary representation: ";
    printBinary(num);
    cout << endl;
    return 0;
}
*/


#include <iostream>
using namespace std;

void printBinary(int n) {
    for (int i = 10; i >= 0; --i)
    {
        cout<<((n >> i) & 1);
    }
    cout<<endl;
}

int main() {
    int num;
    num = 5;
    printBinary(num);

    // ith bit set h ya nhi check 
    int i = 2;
    if(( num & (1 << i)) != 0)  cout<<"set bit\n";
    else cout<<"not set bit\n";

    // bit ko set banana h to 
    i = 2;
    printBinary(num | (1 << i)); // ith bit ko set bna do bit ko 1 bana do

    // unset
    i = 2;
    printBinary(num &( ~ (1 << i)) ); // ith bit ko unset bna do bit ko 0 bana do

    // toggle 0 - 1 1 - 0 bna do
    i = 3;
    printBinary(num ^ (1 << 2));
    printBinary(num ^ (1 << 3));

    int count = 0;
    // set bit count 
    void printBinary(int n) {
    for (int i = 10; i >= 0; --i)
    {
        if((a & (1 << i)) != 0) {
            count++;
        }
    }
    }
    cout<<"count is: "<<count<<endl;    


    return 0;
}