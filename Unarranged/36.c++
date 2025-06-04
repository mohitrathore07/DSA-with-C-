#include <iostream>
#include <math.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    int count = 0;
    int temp = n;
    while( temp > 0) {
        temp/=10;
        count++;
    }

    int sum = 0;
    int x = n;
    while( n > 0) {
        float d = n % 10;
        d = pow(d , count);
        cout<<d<<endl;
        sum += d;
        n /= 10;
    }
    if(sum == x) {
        cout<< sum << endl;
    }
    else {
        cout<<"not a armstrong";
    }
    return 0; 
}