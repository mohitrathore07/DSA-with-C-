/*
#include <iostream>
using namespace std;

int power(int a , int b) {
    if(b == 0) return 1;
    if(b%2==0) {
        int ans = power(a , b/2);
        return ans * ans;
    }
    else {
        return a * power(a , b-1);
    }
}

int main () {
    cout<<power(6,5);
    return 0;
}
*/

/*

// or method
#include <iostream>
using namespace std;
const int M = 1e9 + 7;

int power(int a , int b) {
    if(b == 0) return 1;
    long long res = power(a , b/2);
    if(b&1) {
        return a* res*res;
    }
    else {
        return res * res;
    }
}
int powerModulo(int a , int b) {
    if(b == 0) return 1;
    int res = powerModulo(a , b/2);
    if(b&1) {
        return (a* (res*1LL*res) % M ) % M ; // if modulo lena ho to 
    }
    else {
        return (res * 1LL*res) % M ;
    }
}

int main () {
    cout<<power(6,5);
    return 0;
}
*/


/*

// iteratice method
#include <iostream>
using namespace std;
const int M = 1e9 + 7;

int BinaryExponentiationIterative(int a , int b) {
    int ans = 1;
    while(b) {
        if(b&1) {
            ans = (ans * 1LL * a) % M;
        }
        a = (a * 1LL * a) % M;
        b >>= 1;
    }
    return ans;
}

int main () {
    
return 0;
}
*/


/*

// iteratice method
*/
#include <iostream>
using namespace std;
const int M = 1e9 + 7;

int BinaryExponentiationIterative(int a , int b) {
    int ans = 1;
    while(b) {
        if(b&1) {
            ans = (ans * 1LL * a) % M;
        }
        a = (a * 1LL * a) % M;
        b >>= 1;
    }
    return ans;
}

int BinMultiplyPartOne(int a , int b) {
    int ans = 1;
    while(b) {
        if(b&1) {
            ans = binMultiply(ans, a);
        }
        a = binMultiply( a, a);
        b >>= 1;
    }
    return ans;
}

int binMultiply(int a , int b) {
    int ans = 0;
    while(b > 0) {
        if(b&1) {
            ans = (ans + a) % M;
        }
        a = (a + a) % M;
        b >>= 1;
    }
    return ans;
}

int main() {
    
    return 0;
}