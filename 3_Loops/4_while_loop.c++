/*                                                                    17/08/2024                                                                */

// While loop

/*
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while (i <= 10)
    {
        cout<<i<<endl;
        i++;
    }
    
    return 0;
}
*/

// garbage values
/* 
#include <iostream>
using namespace std;

int main() {
    int i;
    cout<<i;
    return 0;
}
*/


// predict
/* 
#include <iostream>
using namespace std;

int main() {
    int x = 1;
    while(x == 1) {
        x = x-1;
        cout<<x<<endl;
    }
    return 0;
}
*/


// Do - While loop

#include <iostream>
using namespace std;

int main() {
    int i = -1;
    do
    {
        cout<<"it will run at least once";
        i--;
    } while (i == 0);
        
    return 0;
}


/*                                                                  19/08/2024                                                                   */

// Break & Continue

// composite number - which has more than two factors
/* 
#include <iostream>
using namespace std;

int main () {
    int n ;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    for(int i = 2; i < n-1;i++) {
        if(n%2x==0) {
            cout<<n<<"Composite number"<<endl;
            break; // break will terminate the loop finish the loop
        }
    }
    return 0;
}
*/

/* 
// prime number
#include <iostream>
using namespace std;

int main () {
    int n ;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    bool flag = true;
    for(int i = 2; i < n-1; i++) {
        if(n%2==0) {
            flag = false;
            break; // break will terminate the loop finish the loop
        }
    }

    if(n == 1) {
        cout<<'1 is neither prime nor composite'<<endl;
    }
    else if(flag == true) {
        cout<<n<<" is prime"<<endl;
    }

    else {
        cout<<n<<"is composite and not prime"<<endl;
    }
    return 0;
}
*/

// Continue 

#include <iostream>
using namespace std;

int main () {
    for(int i = 1; i <= 10;i++) {
        if(i % 2 == 0) {
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}


/*                                                                   20/08/2024                                                                */

// Predict the output

/* 
#include <iostream>
using namespace std;

int main () {
    while('a' < 'b') { // true 97 98 
        cout<<"malayalam is palindrom"<<endl;
        break;
    } // segmentation fault or infinite loop
    return 0;
}
*/


/*                                                                21/08/2024                                                                   */
/*
#include <iostream>
using namespace std;

int main () {
    int n;
    cout<<"enter an integer: ";
    cin>>n;
    int count = 0;
    int a = n;
    while (n > 0)
    {
        n/= 10;
        count++;
    }
    if(a == 0 ) cout<<1;
    cout<<"Number of digits: "<<count<<endl;
    return 0;
}
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    cout<<"enter an integer: ";
    cin>>n;
    int sum = 0;
    while (n > 0)
    {
        int d = n % 10;
        sum += d;    
        n/= 10;
    }
     cout<<"Number of digits: "<<endl;
    return 0;
}


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