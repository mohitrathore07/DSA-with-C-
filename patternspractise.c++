/*
1
0 1
1 0 1
0 1 0 1

// another method
logic - when i & j both even or both odd so 1 otherwise 0

#include <iostream>
using namespace std;

int main () {
    int n;
    cout<<"Enter no of rows: ";
    cin>>n;

    for(int i = 1; i <= n; i++) {
     for(int j = 1; j <= i; j++) {
     if( (i+j) % 2 == 0 ) cout<<1;
     else cout<<0;
    }
    cout<<endl;
    }
    return 0;
}
*/

/*
****
***
**
*
logic n - 1 - i

#include <iostream>
using namespace std;

int main () {
    int n;
    cout<<"Enter no of rows: ";
    cin>>n;

    for(int i = 1; i <= n; i++) {
     for(int j = 1; j <= n + 1 - i; j++) {
        cout<<"*";
    }
    cout<<endl;
    }
    return 0;
}


*/

/*
      *
    * *
  * * *
* * * *

logic - 2 loops in 1 loop one for spaces and 2nd for *
// spaces till j <= n-i
// stars till k <= i

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter no of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // stars
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

*/


/* 
*******
*** ***
**   **
*     *

*/

/* 
#include <iostream>
using namespace std;

int main () {

    int n;
    cin>>n;

    for (int i=1; i <= n*2-1; i++) {
        cout<<"*";
    }
    cout<<endl;

    for (int i=1; i <= n-1 ;i++) {
        for(int j = 1; j <= n;j++) {
            if(j <= n-i) cout<<"*";
            else cout<<" ";
        }
        
        for(int k = 1; k <= n-1 ; k++) {
            for(int l = 1; l <= (n-1-k); l++) {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
*/

/* 
1111
1222
1233
1234

// i, j me jo min hai every position pe wo print

#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            int min;
            if(i <= j) {
                min = i;
            }
            else {
                min = j;
            }
            cout<<min;
        }
        cout<<endl;
    }
    return 0;
}

*/

// MOST IMPORTANT PRACTISE
/* 
4444444
4333334
4322234
4321234
4322234
4333334
4444444


#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;

    for(int i = 1; i <= n*2-1; i++) {
        for(int j = 1; j <= n*2-1; j++) {
           int a = i;
           int b = j;

           if(a > n) {
            a = 2 * n - i;
           }

           if(b > n) {
            b = 2 * n - j;
           }

          int x = min(a , b);
          cout<< n - x + 1; 
        }
        
        cout<<endl;
    }
    return 0;
}

*/