/*                                                                30/08/2024                                                                   */

 /* 
* 
**
***
**** 

#include <iostream>
using namespace std;

int main () {
    int n = 4;
    for(int i = 1; i <= n; i++) {
     for(int j = 1; j <= i; j++) {
        cout<<"* ";
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

#include <iostream>
using namespace std;

int main () {
    int n = 6;
    for(int i = n; i > 0 ; i--) {
        for(int j = 1; j <= i ; j++ ) {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
*/

/* 
// another way same question
#include <iostream>
using namespace std;

int main () {
    int n = 6;
    for(int i = 1; i <= n; i++) {
       for(int j = 1; j <= (n+1) - i; j++ ){
        cout<<"* ";
       }
       cout<<endl;
    }
    cout<<endl;
    return 0;
}

*/

/* 
1
1 3
1 3 5
1 3 5 7


#include <iostream>
using namespace std;

int main () {
    int n = 4;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i;j++) {
            cout<<(j * 2) - 1<<" ";
        }
        cout<<endl;
    }    
    return 0;
}
*/

/* A B C D
A B C D
A B C D
A B C D 

#include <iostream>
using namespace std;

int main () {
    int n = 4;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n;j++) {
            cout<< char(j + 64)<<" ";
        }
        cout<<endl;
    }    
    return 0;
}

*/ 

/* 
    *
    * 
* * * * *
    *
    *


#include <iostream>
using namespace std;

int main () {
    int n = 5;
    for(int i = 1 ; i <= n; i++) {
    for(int j = 1 ; j <= n; j++) {
        if(j == ((n/2) + 1) || i == (n/2)+1) {
            cout<<"*";
        }
        else {
            cout<<" ";
        }
    }    
    cout<<endl;
    }
    
    return 0;
}
*/

/* 

*       * 
  *   * 
    *
  *   *   
*       *   

#include <iostream>
using namespace std;

int main () {
    int n = 5;
    for(int i = 1 ; i <= n; i++) {
    for(int j = 1 ; j <= n; j++) {
        if(j == i || ((i == n || i == 1) && (j == 1 || j == n)) || (j % 2 == 0 && i % 2 == 0)) {
            cout<<"*";
        }
        else {
            cout<<" ";
        }
    }    
    cout<<endl;
    }
    
    return 0;
}
*/

/* 
// another method
#include <iostream>
using namespace std;

int main () {
    int n;
    cout<<"no of rows: ";
    cin>>n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == j || i+j == n+1) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }    
    return 0;
}
*/