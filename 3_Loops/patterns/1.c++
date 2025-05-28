/*                                                               29/08/2024                                                                */

// Pattern Printing
/* 
// 1. 

******
******
******
******


#include <iostream>
using namespace std;

int main () {
    int r = 3;
    for (int i = 1; i <= r ; i++)
    {
        cout<<"****"<<endl;        
    }
    
    return 0;
}
*/

// 2. user input row nd column 
/* 
#include <iostream>
using namespace std;

int main () {
    int r = 7;
    int c = 5;

    for (int i = 1; i <= r; i++)
    {
        for(int j = 1; j <= c; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}
*/

/* 
// solid square
#include <iostream>
using namespace std;

int main () {
    for(int i = 1; i <= 4; i++) {
     for(int j = 1; j <= 4; j++) {
        cout<<"* ";
    }   
    cout<<endl;
    }
    return 0;
}
*/

/* 
1234
1234
1234
1234

#include <iostream>
using namespace std;

int main () {
    for(int i = 1; i <= 4; i++) {
     for(int j = 1; j <= 4; j++) {
        cout<<j<<" ";
    }   
    cout<<endl;
    }
    return 0;
}
*/

