/*

a to power b 

#include <iostream>
using namespace std;

int power(int base,int pow , int ans) {
    if(base == 1 || pow == 1) return base;
    if(pow == 0) return 1;
    if(pow == 2) return base*base;
    if(pow % 2 != 0) {
        ans *= base;
        pow--; 
    }
    base*=base;
    pow  /= 2;
    return ans*power(base, pow, ans );
}

int main() {
    int b , p;
    cin>>b>>p;

    cout<<power(b,p,1);
    return 0;
}
*/

/*
right way a to power b


#include <iostream>
using namespace std;

long long power(long long base, long long exponent) {
    if(exponent == 0) return 1;
    if(exponent % 2 == 0) {
        long long half = power(base, exponent/2);
        return half * half;
    }
    else {
        return base*power(base, exponent-1);
    }
}

int main() {
    
long long base , exponent;
cin>>base>>exponent;
long long ans = power(base,exponent);
cout<<"base: "<<base<<"^"<<exponent<<" is: "<<ans;
return 0;
}
*/


/*
a to power b to power c
*/



#include <iostream>
using namespace std;

long long power(long long base, long long exponent) {
    if(exponent == 0) return 1;
    if(exponent % 2 == 0) {
        long long half = power(base, exponent/2);
        return half * half;
    }
    else {
        return base*power(base, exponent-1);
    }
}

int main() {        
    long long a , b , c;
    cin>>a>>b>>c;
    long long ans = power(b,c);
    cout<<power(a , ans);
    return 0;
}