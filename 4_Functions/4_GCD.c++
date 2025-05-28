/*                                                                     14/09/2024                                                            */

/* 
// gcd of two numbers
#include <iostream>
using namespace std;

int gdcofnum (int x , int y) {

    int hcf = 1;
    for(int i = 1 ; i <= min(x , y); i++){
        if(x % i == 0 && y % i == 0) {
            hcf = i;
        }
    }
    return x;
}

int main () {
    int num1 , num2;
    cin>>num1>>num2;
   cout<< "gdc of two num is: "<<gdcofnum(num1 , num2);
    return 0;
}
*/

/* M - 2 
#include <iostream>
using namespace std;

int gdcofnum (int x , int y) {

    int hcf = 1;
    for(int i = min(x , y) ; i >= 1; i--){
        if(x % i == 0 && y % i == 0) {
            hcf = i;
            break;
        }
    }
    return hcf;
}

int main () {
    int num1 , num2;
    cin>>num1>>num2;
   cout<< "gdc of two num is: "<<gdcofnum(num1 , num2);
    return 0;
}

*/ 

// factorial of numbers  - using functions 

/* 
#include <iostream>
using namespace std;

int fact(int n) {
    int fact = 1;
    for(int i = 1; i <= n;i++) {
        fact *= i;
    }
    return fact;
}

int main () {
    int n;
    cin>>n;

    for(int i = 1 ; i <= n; i++) {
        cout<<fact(i)<<endl;
    } 
    return 0;
}
*/

/* 
// swap 2 numbers
#include <iostream>
using namespace std;

int main () {
    int x, y;
    cin>>x  , y;

    cout<<x<<" "<<y;

    int temp = x;
    y = x;
    x = temp;

    cout<<x<<" "<<y;
    return 0;
}
*/


// M - 2
/* 
#include <iostream>
using namespace std;

int main () {
    int x, y;
    cin>>x >> y;

    cout<<x<<" "<<y<<endl;;

    x = x + y;
    y = x - y;
    x = x - y;

    cout<<x<<" "<<y;
    return 0;
}
*/

// M - 3 using function 

#include <iostream>
using namespace std;

void swap (int x  , int y) {
    int temp = x;
    y = x;
    x = y;

    return
}
int main () {
    int x, y;
    cin>>x >> y;
    cout<<x<<" "<<y<<endl;;

    swap(x , y); 
    cout<<x<<" "<<y; // value will not change bcz values jati hai only waha ek new var create hoge wahi khtm
    return 0;
}