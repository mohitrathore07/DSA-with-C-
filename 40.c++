/*                                                                 Patterns                                                                   */

/*
1
2 3
4 5 6
7 8 9 10

#include <iostream>
using namespace std;

int main () {
    int n;
    cout<<"No of rows: ";
    cin>>n;

    int c = 1;
    for(int i = 1; i <= n; i++) {
     for(int j = 1; j <= i; j++) {
        cout<< c << " ";
        c++;
    }
    cout<<endl;
    }
    return 0;
}
*/

/*

1
0 1
1 0 1
0 1 0 1

#include <iostream>
using namespace std;

int main () {
    int n;
    cout<<"Enter no of rows: ";
    cin>>n;

    for(int i = 1; i <= n; i++) {
     for(int j = 1; j <= i; j++) {
        if((i % 2 == 0 && j % 2 != 0 ) || (i % 2 != 0 && j % 2 == 0 ) ) cout<< 0;
        else {
            cout<< 1;
        }
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

#include <iostream>
using namespace std;

int main () {
    int n;
    cout<<"Enter no of rows: ";
    cin>>n;

    for(int i = 1; i <= n; i++) {
     for(int j = n; j >= 1; j--) {
        if(j <= i ) cout<< "*";
        else {
            cout<< " ";
        }
    }
    cout<<endl;
    }
    return 0;
}

*/

/*
   1
  12
 123
1234

logic - 2 loop logic

#include <iostream>
using namespace std;

int main () {
    int n;
    cout<<"Enter no of rows: ";
    cin>>n;

    for(int i = 1; i <= n; i++) {

     for(int j = 1; j <= n + 1 - i; j++) {
        cout<<" ";
        }

     for(int k = 1; k <= i; k++) {
        cout<<k;
        }
    cout<<endl;
    }
    return 0;
}

*/

/*

      * * * *
    * * * *
  * * * *
* * * *

logic - first spaces print using this concept - ****
                                                ***
                                                **
                                                *
                                                *
then print tringle using this logic      *
                                       * *
                                     * * *
                                   * * * *
then print * using 1st logic


#include <iostream>
using namespace std;

int main () {
    int n;
    cout<<"Enter no of rows: ";
    cin>>n;

    for(int i = 1; i <= n; i++) {

     for(int j = 1; j <= n + 1 - i; j++) {
        cout<<" ";
        }

     for(int k = 1; k <= i; k++) {
        cout<<"*";
        }

    for(int j = 1; j <= n + 1 - i; j++) {
        cout<<"*";
    }
    cout<<endl;
    }
    return 0;
}

*/

// another method

/* 

      * * * *
    * * * *
  * * * *
* * * *


#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout<<" ";
        }
        for (int k = 1; k <= n; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
*/

// pyramid patterns
/* 
   *
  ***
 *****
*******

#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;

for(int i = 1 ; i <= n;i++) {
    for(int j = 1; j <= n-i;j++) {
        cout<<" ";
    }

    for(int k = 1; k <= (i * 2) - 1; k++) {
        cout<<"*";
    }

    cout<<endl;

   } 
    return 0;
}
*/

/*

// odd triangle

*
***
*****
*******
#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;

for(int i = 1 ; i <= n;i++) {

    for(int j = 1; j <= i*2-1;j++) {
        cout<<"*";
    }
    cout<<endl;

   } 
    return 0;
}

*/

/* 
   *
  ***
 *****
*******

// another way
logic - take one var nst for printing the stars set initial value to 1 then increase it by 2 everytime
logic - take one var nsp for printing the spaces set initial value to n - 1 then decrease it by 1 everytime

#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;

    int nst = 1; // for printing the stars
    int nsp = n - 1; // for printing the spaces

for(int i = 1 ; i <= n; i++) {

    for(int j = 1; j <= nsp; j++) {
        cout<<" ";
    }
    nsp--;
    for(int k = 1; k <= nst; k++) {
        cout<<"*";
    }
    nst += 2;
    cout<<endl;

   } 
    return 0;
}

*/

/* 
   1
  121
 12321
1234321 

#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;

    for(int i = 1 ; i <= n;i++) {
        int x = 1;
    for(int j = 1; j <= n-i;j++) {
        cout<<" ";
    }

    for(int k = 1; k <= (i * 2) - 1; k++) {
        cout<<x;
        if(k < i) {
            x++;
        }

        else {
            x--;
        }
    }
    
    cout<<endl;
   } 
    return 0;
}

*/ 


// another method
/* 
   1
  121
 12321
1234321 


#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n-i; j++) {
            cout<<" ";
        }
        for(int k = 1; k <= i; k++) {
            cout<<k;
        }

        for(int l = i-1 ; l >= 1 ;l--) { // i - 1 bcz 1st line me kuchh print nhi karna hai nd 2nd line me 1st se start so that's why
            if(i==1) break;
            cout<<l;
        }
        cout<<endl;
    }
    return 0;
}

*/

/* 
   *
  ***
 *****
*******
 *****
  ***
   *
#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;

    for(int i = 1; i <= n ; i++) {
        for(int k = 1; k <= n-i; k++) {
            cout<<" ";
        }
        for(int j = 1; j <= (i * 2) - 1; j++) {
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i = n - 1; i >= 1; i--) {
        for(int k = 1; k <= n-i; k++) {
            cout<<" ";
        }
        for(int j = 1; j <= (i*2)-1; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

*/

// another method
/* 
   *
  ***
 *****
*******
 *****
  ***
   *
   

#include <iostream>
using namespace std;

int main () {
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    int nst=1;
    int nsb = n-1;
    for(int i = 1; i <= (2*n)-1; i++) {
        // spaces
        for(int j = 1; j <= nsb; j++) {
            cout<<" ";
        }
        if(i<n) nsb--;
        else nsb++;
        // stars
        for(int j = 1; j <= nst; j++) {
            cout<<"*";
        }
        if(i<n) nst+=2;
        else nst-=2;
        cout<<endl;
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

*******
*** ***
**   **
*     *
#include <iostream> 
using namespace std;

int main () {
    int n;
    cin>>n;

    for(int i = 1; i <= n * 2 - 1; i++) {
        cout<<"*";
    }
    cout<<endl;
    for(int i = 1; i <= n - 1; i++) {
     for(int j = 1; j <= n; j++) {
        if(j <= n - i) {
            cout<<"*";
        }
        else {
            cout<<" ";
        }
    }   
    
     for(int j = 1; j <= n - 1; j++) {
        if(j < i) {
            cout<<" ";
        }
        else {
            cout<<"*";
        }
    }   
    cout<<endl;
    }
    return 0;
}

*/

// another way 

// logic -
/* 
1st print this
*******
2nd
***
**
*
3rd 
-
--
---
4th
***
 **
  *

#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    int m = n - 1;
    int nsp = 1; // for spaces 
    for(int i = 1; i <= n*2-1; i++) {
        cout<<"*";
    }
    cout<<endl;
    for(int i = 1; i <= m; i++) {
        // stars
        for(int j = 1; j <= m+1-i; j++) {
            cout<<"*";
        }
        // spaces
        for(int k = 1; k <= nsp; k++) {
            cout<<" ";
        }
        nsp += 2;
        // stars
        for(int j = 1;j <= m+1-i; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

*/
/* 
1234567
123 567
12   67
1     7
#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    int m = n - 1;
    int nsp = 1; // for spaces 
    for(int i = 1; i <= n*2-1; i++) {
        cout<<i;
    }
    cout<<endl;
    for(int i = 1; i <= m; i++) {
        // stars
        int a = 1;
        for(int j = 1; j <= m+1-i; j++) {
            cout<<a;
            a++;
        }
        // spaces
        for(int k = 1; k <= nsp; k++) {
            cout<<" ";
            a++;
        }
        nsp += 2;
        
        for(int j = 1;j <= m+1-i; j++) {
            cout<<a;
            a++;
        }
        cout<<endl;
    }
    return 0;
}
*/


#include <iostream>
using namespace std;

int main ()  {
    int n = 4;
    for(int i = 1; i <= n * 2 - 1; i++) {
        int x; 
        for(int j = 1; j <= n * 2 - 1; j++) {
            if(i == 1 || i == n || j == 1 || j == n) {
                cout<<n;
            }
            else if(i == j || j == (n * 2 - 1)) {
                x = (n + 1) - i;
            }
            else {
                cout<<x;
            }
        }
        cout<<endl;
    }
    return 0;
}