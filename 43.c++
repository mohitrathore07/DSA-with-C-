/*                                                                  12/09/2024                                                               */

// built in functions 
/* 
#include <iostream>
using namespace std;

int main ( ) {
    int x , y,z;
    cin>>x>>y;
    cout<<min(x,y); // built in function to find the min b/w two numbers
    return 0;
}
*/


/*

/// create a function to find the min value 

#include <iostream>
using namespace std;

int minfind (int x, int y) {
    int a;
    if(x < y) {
        a = x;
    }
    else {
        a = y;
    }
    return a;
}

int main ( ) {
    int x , y;
    cin>>x>>y;
    cout<<minfind(x,y); 
    return 0;
}
*/


/* square root - built in function 
#include <iostream>
#include <math.h> // library for sqrt
using namespace std;

int main () {
    cout<<sqrt(9); // function built in to find the sqrt of a number
    return 0; 
}
*/

// combination and permutation

// in copy - formula 
/* 
#include <iostream>
using namespace std;

int main () {
    int x;
    cin>>x;
    
    int y;
    cin>>y;

    int nfact = 1;
    for(int i = 2 ; i <= x; i++) {
        nfact *= i;
    }
    
    int rfact = 1;
    for(int i = 2 ; i <= y; i++) {
        rfact *= i;
    }

    int nrfact = 1;

    for(int i = 2 ; i<= x-y; i++) {
        rfact *= i;
    }
    int ncr = nfact / (rfact * nrfact);
    cout<<ncr;
    return 0;
}

*/
// using functions
/* 
#include <iostream>
using namespace std;

int fact (int x) {
    int f = 1;
    for(int i = 1 ; i <= x; i++) {
        f  *= i;
    }
    return f;
}

int main () {
    int n, r;
    cin>>n>>r;

    int nfact = fact(n);
    cout<<"nfact = "<< nfact<<endl;;
    int rfact = fact(r);
    cout<<"rfact = "<< rfact<<endl;;

    int nrfact = fact(n - r);
    cout<<"nrfact = "<< nrfact<<endl;;

    int ncr = nfact / (rfact * nrfact);
    cout<<ncr;
    return 0;
}
*/

// m - 2
/*
#include <iostream>
using namespace std;

int fact (int x) {
    int f = 1;
    for(int i = 1 ; i <= x; i++) {
        f  *= i;
    }
    return f;
}

int combinations (int n , int r) {
    int ncr = fact(n) / fact(r)*fact(n-r);
    return ncr;
}

int main () {
    int n, r;
    cin>>n>>r;

    int nfact = fact(n);
    cout<<"nfact = "<< nfact<<endl;;
    int rfact = fact(r);
    cout<<"rfact = "<< rfact<<endl;;

    int nrfact = fact(n - r);
    cout<<"nrfact = "<< nrfact<<endl;;

    int ncr = combinations(n,r);
    cout<<ncr;
    return 0;
}
*/

/* 
#include <iostream>
using namespace std;

int fact (int x) {
    int f = 1;
    for(int i = 1 ; i <= x; i++) {
        f  *= i;
    }
    return f;
}

int combinations (int n , int r) {
    int ncr = fact(n) / fact(r)*fact(n-r);
    return ncr;
}

int permutations (int n , int r) {
    int npr = fact(n) / fact(n-r);
    return npr;
}

int main () {
    int n, r;
    cin>>n>>r;

    int nfact = fact(n);
    cout<<"nfact = "<< nfact<<endl;;
    int rfact = fact(r);
    cout<<"rfact = "<< rfact<<endl;;

    int nrfact = fact(n - r);
    cout<<"nrfact = "<< nrfact<<endl;;

    int ncr = combinations(n,r);
    int npr = permutations(n,r);
    cout<<"ncr: "<<ncr<<endl;
    cout<<"npr: "<<npr;


    return 0;
}

*/