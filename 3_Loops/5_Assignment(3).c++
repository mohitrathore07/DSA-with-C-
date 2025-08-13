/*                                                              26/08/2024                                                                    */

// print the ap 4 , 7 , 10 , 13 till n  
/* 
#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    int start = 4;
    while (n--)
    {
        cout<<start<<" ";
        start += 3;
    }
    return 0; 
    
}
*/

/*
// GP  3 , 12 , 48 ........ n 
#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    int start = 3;
    while (n--)
    {
        cout<<start<<" ";
        start *= 4;
    }
    return 0; 
}
*/

/*
// ascii alphabet with their ascii value 

#include <iostream>
using namespace std;

int main () {
    int n = 0;
    
    while (n < 26)
    {
        cout<< char(n +'A')<<" ascii : "<< int( n + 'A')<<endl; 
        n++;
    }
    return 0; 
}
*/

/* 
#include <iostream>
using namespace std;

int main () {
    int t = 10;
    while (t /= 2) {
        cout<< " hii"<<endl;
        cout<<t<<endl;
    }
    return 0; 
}

*/


/* 
#include <iostream>
using namespace std;

int main () {
    for(int i = 1 ; i*i<=10;i++) {
        cout<<"in loop"<<endl;
    }
    return 0; 
}

*/

/* 
#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    int sum = 0;
    while(n>0) {
        int d = n % 10;
        if (d % 2 == 0) {
            sum += d;
        }
        n/=10;
    }
    cout<<sum;
    return 0; 
}
*/

/* another way*/
/* 
#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    int sum = 0;
    while(n>0) {
        int d = n % 10;
        sum += (d % 2 == 0 ? d : 0);
        n /= 10;
    }
    cout<<sum;
    return 0; 
}
*/ 


/* 
#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    int temp = n;
    int reverse = 0;
    while(n > 0) {
        int d = n % 10;
        // reverse *= 10 + d; // here is a mistake This is because *= is a compound assignment operator, which means "multiply the left-hand side by the result of the right-hand side expression and assign the result back to the left-hand side."

        reverse = reverse * 10 + d;
        n /= 10;
    }
    int sum = temp + reverse;
    cout<<sum;
    return 0; 
}
*/

/* 
#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    int temp = n;
    int reverse = 0;
    while(n > 0) {
        reverse *= 10;
        reverse += (n % 10);
        n /= 10;
    }
    int sum = temp + reverse;
    cout<<sum;
    return 0; 
}
*/

/* 
#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    for(int i = 1; i <= n ; i++) {
        int n = i;
        int r = 1;
        while( n > 0) {
            r = r * n;
            n--;
        }
        cout<<r<<" ";
        cout<<endl;
    }
    return 0; 
}
*/

// simplest way
/* 
#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    int f = 1;
    for(int i = 1; i <= n ; i++) {
        f *= i;
        cout<<f<<endl;
    }
    return 0; 
}
*/

/* */
#include <iostream>
#include <cmath>
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
        int d = n % 10;
        d = pow(d , count);
        sum += d;
    }
    if(sum == x) {
        cout<< sum << endl;
    }
    else {
        cout<<"not a armstrong";
    }
    return 0; 
}