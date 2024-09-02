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


