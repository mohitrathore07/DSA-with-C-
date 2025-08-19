/*
#include <iostream>
#include <cmath>
using namespace std;

void divisiors(int n) {
    int sq = sqrt(n);
    for (int i = 1; i <= sq; i++)  // if u start from 0 loop will crash
    {
        if(n%i==0) cout<<i<<" ";
    }
    for (int i = sq-1; i >= 1; i--)  // if u end  loop to 0 it will crash
    {
        if(n%i==0) cout<<n/i<<" ";
    }
    
}

int main() {
    int n=24;
    divisiors(n); 
   
    return 0;
}

*/

// above will print duplicates also 
#include <iostream>
#include <cmath>
using namespace std;

void divisiors(int n) {
    int sq = sqrt(n);
    for (int i = 1; i <= sq; i++)  // if u start from 0 loop will crash
    {
        if(n%i==0) cout<<i<<" ";
    }
    for (int i = sq-1; i >= 1; i--)  // if u end  loop to 0 it will crash
    {
        if(n%i==0 && n / i != i) cout<<n/i<<" ";
    }
    
}

int main() {
    int n=36;
    divisiors(n); 
   
    return 0;
}