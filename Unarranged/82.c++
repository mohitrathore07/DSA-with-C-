/*                                                                                 17/01/2024                                                                                         */

// remove all 'a' from the string 
/*
#include<iostream>
#include<string>
using namespace std;

// space complexity jyda h

void removeChar(string ans,  string original) {
    if(original.length()==0) {
        cout<<ans<<endl;
        return;
    }
    char ch = original[0];
    if(ch == 'a') return removeChar(ans , original.substr(1));
    else return removeChar(ans+ch , original.substr(1));
}

// another way 

void removeCharM2(string ans,  string original,int idx) {
    if(idx == original.length()) {
        cout<<ans<<endl;
        return;
    }
    char ch = original[idx];
    if(ch == 'a') return removeCharM2(ans, original , idx+1);
    else return removeCharM2(ans+ch , original ,idx+1);
}

int main () {
    string str = "Raghav garg";
    removeChar(" " , str);
    string str2 = "Physics Wallah";
    removeCharM2(" " , str2,0);
    return 0;
}
*/


/* 
// power of hanoi 
#include <iostream>
using namespace std;

void hanoi(int n , char a , char b , char c) {
    if( n == 0 ) return;
    hanoi(n-1 ,a, c, b);
    cout<<a<<"--->"<<c<<endl;
    hanoi(n-1, b , a ,c);
}
int main () {
    int n  = 3;
    hanoi(n , 'A' , 'B' , 'C');
    return 0;
}
*/

/* 
#include <iostream>
using namespace std;

void print(int x) {
    if(x < 0) {
        cout<<"*";
        return print(x-1);
    }
    cout<<endl;
    if(x==0) return;
}

void min (int n) {
    if(n == 0) return;
    int x = n;
    print(x);
    return min(n-1);
}

int main () {
    int n  = 7;
    min(n);
    return 0;
}

*/
