/*
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
    for(int i = 0; i < 8; ++i)
    {
        printBinary(i);
        if(i&1) { // if last bit 1 to odd
            cout<<"odd"<<endl;
        }
        else {
            cout<<"even"<<endl;
        }
    }
    return 0;
}
*/

/*

// if u have to divide any number by 2 do this - right shift and for multiply by 2 use - left shift
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
    int n = 5;
    cout<<(n>>1)<<endl; // it will divide n / 2 - faster than division method
    
    cout<<(n<<1)<<endl; // it will multiply n * 2 - faster than multiplication method

    // upercase to lowercase and vice versa
    char A = 'A';
    char a = A | (1 << 5); // a
    cout<<a<<endl;
    
    cout<<char(a& (~ (1 << 5)))<<endl; // a - A
    
    // 1 << 5 is actually _ space ascii value
    cout<<char(1<<5)<<endl; 
    cout<<char('C' | ' ')<<endl;  // c 

    // and to do small - capital
    printBinary(int('_'));
    
    printBinary(int('E'));

    cout<<char('c' & '_')<<endl; // lower case to upppercase


    // upper to lower
    char B = 'B';
    char b = B | ' ';
    cout<<b<<endl;

    // lower to upper
    char d = 'd';
    char D = d & '_';
    cout<<D<<endl; 
    return 0;
}
*/

// all least bit ko 0 karna h to

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
    printBinary(59);
    int a = 59;
    int i = 4;
    int b = (a & (~ ((1<<(i+1)) - 1 ))); // lsb ith tk 0
    printBinary(b);
    
    i = 3;
    int c = (a & ((1 << (i+1 )) - 1 )); // msb ko 0
    printBinary(c);
    return 0;
}