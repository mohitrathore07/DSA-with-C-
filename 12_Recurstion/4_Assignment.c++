// Assignment questions recursion

/* 
// WAP to  calculate sum of odd numbers using recursion
#include <iostream>
using namespace std;

int oddnumber(int sum ,int a , int b) {
    if(a==b) return sum;
    if(a % 2 != 0 ) {
        sum+=a;
   }
   return oddnumber(sum , ++a, b);
}
// way 2
int oddnumberway2(int a , int b) {
    if(a > b ) return 0;
    if(a % 2 == 0 ) {
        return oddnumberway2(a+1 , b);
   }
   return  a + oddnumber(a+2, b);
}

int main () {
    cout<<oddnumber(0, 1 , 10);
    return 0;
}
*/

/*
// Q - 3 given a positive integer return true if it is a power of 2
#include <iostream>
using namespace std;

bool checknumber(int ans, int num) {
    if(num == 1 )  return true;
    if(ans > num) return false;
    if(ans == num) return true;
    return checknumber(ans*2 , num);
}

int main() {
    
    if(checknumber(2 , 129)) {
        cout<<"yes power hai";
    }
    else {
        cout<<"no it's not";
    }
    return 0;
}
*/
// stairs q 2
#include <iostream>
using namespace std;

int climbstairs(int n) {
    if(n < 0) return 0;
    
    if ( n == 1 ) return 1;
    return climbstairs(n-1) + climbstairs(n - 2) + climbstairs(n - 3);
}

int main() {
    cout<<climbstairs(8);
    return 0;
}