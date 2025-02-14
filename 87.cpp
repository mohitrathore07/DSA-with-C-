/*                                                               11/02/2025                                                                      */

/*
// palindrom using recursion
#include<iostream>
#include<string>
using namespace std;

// void palindromCheck(string str , int i , int j) {
//     if(i > j) {
//         cout<<"yes it is a palindrom";
//         return;
//     }
//     else if(str[i] == str[j] && i <= j) {
//         palindromCheck(str, ++i, --j);
//     }
//     else {
//         cout<<"not a palindrom";
//         return;
//     }
// }

// another way

// bool palindromCheck(string str , int i , int j) {
            if(i>j) return true;
            if(str[i]!=str[j]) return false;
            else palindromCheck(str, ++i , --j);
//     }
// }

int main () {
    string str = "addma";
    int j = str.length() - 1;
    // palindromCheck(str , 0 , j);
    cout<<palindromCheck(str , 0 , j);
    return 0;
}

*/

/*
// loop method - palindrom
#include<iostream>
#include<string>
using namespace std;

bool palindromCheck(string str ) {
    int i  = 0;
    int j = str.length()-1;
    while (i < j)
    {
        if(str[i] != str[j]) return false;
        i++;
        j--;
    }
    return true;
}

int main () {
    string str = "adda";
    cout<<palindromCheck(str);
    return 0;
}
*/

// gcd of numbers using recursion
/*
#include<iostream>
using namespace std;

int gcdofnum(int num1 , int num2, int remainder) {
    if(num2 % remainder == 0) return remainder;
    remainder = num2 % remainder;
    num2%= remainder;
    gcdofnum(num1 , num2, remainder);
}

int main() {
    int num1 = 45;
    int num2 = 27;

    cout<<gcdofnum(num1 , num2, num1%num2);

    return 0;
}

*/

/*
// right way m - 2
#include<iostream>
using namespace std;

int gcdofnum(int a , int b) {
    if (a == 0) {
        return b;
    }
    else {
        return gcdofnum(b%a,a);
    }
}

int main() {
    int num1 = 27;
    int num2 = 45;
    cout<<gcdofnum(num1 , num2);
    return 0;
}
*/


/*                                                                      12/feb/2025                                                              */

/* 
// generate all binary strings of length n without consecutive 1's
#include<iostream>
#include<string>
#include<math.h>
using namespace std;

void binaryString(int n, string str)
{
    if(str.length() == n) {
        cout<<str<<endl;
        return;
    }
    if(str == "" || str[str.length()-1] != '1') {
        binaryString(n, str+"0");
        binaryString(n, str+"1");
    }
    else {
        binaryString(n, str+"0");
    }

}

int main()
{
    int n = 3;
    binaryString(n, "");
    return 0;
}
*/


/*
// another method -- all binary string print hogi isse  also like 111 this
#include<iostream>
#include<string>
#include<math.h>
using namespace std;

void binaryString(int n, string str)
{
    if(str.length() == n) {
        cout<<str<<endl;
        return;
    }
    binaryString(n, str+"0");
    binaryString(n, str+"1");
    
}

int main()
{
    int n = 3;
    binaryString(n, "");
    return 0;
}
    */


// k-th symbol in grammer

