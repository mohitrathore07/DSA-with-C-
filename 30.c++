/*                                                                     16/08/2024                                                                */

// A.P nd  G.P questios

// display A.P 1 ,3,5,7,9... upto n terms

/* 
#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    
    for(int i = 1 ; i <= (2*n-1); i+=2) {
        cout<< i << endl;
    }
    return 0;
}
*/

// M - 2 
/* 
#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    
   int a = 1;

   for(int i = 1; i<= n; i++) {
    cout<<a<<endl;
    a+=2;
   }

    return 0;
}
*/

//  4 , 7 , 10 , 13 .........n

/*
#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    
   int a = 4;

   for(int i = 1; i<= n; i++) {
    cout<<a<<endl;
    a+=3;
   }

    return 0;
}
 */

// G P print
/* 
#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;

    int a = 2;
    
    for(int i = 1; i <= n; i++) {
        cout<<a<<endl;
        a = a * 2;
    }
    return 0;
}
*/

// reverse AP
/*
#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    // n n - 1 n - 2

    for(int i=n; i >=1; i--) {
        cout<<i<<endl;
    }
    return 0;
}

*/ 

// Display this AP  100 , 97 , 94 .......... upto all terms which are positive
// copy solution

/*
#include <iostream>
using namespace std;

int main () {
    int a=100;
    for(int i = 34; i >= 1; i--) {
        cout<<a<<endl;
        a = a - 3;
    }
    return 0;
}

*/ 

// M - 2
/* 
#include <iostream>
using namespace std;

int main () {
    int a = 100;
    for(int i = 34; a > 0; i--) {
        cout<<a<<endl;
        a = a - 3;
    }
    return 0;
}
*/

// M - 3
/*
#include <iostream>
using namespace std;

int main () {
    
    for(int a = 100; a > 0; a-=3) {
        cout<<a<<endl;
    }
    return 0;
}
*/