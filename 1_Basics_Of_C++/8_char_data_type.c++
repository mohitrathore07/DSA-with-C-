/*                                                             13\07\2024                                                                        */

/*
// char data type 
#include <iostream>
using namespace std;
int main () {
    char ch = 't'; 
    cout<<ch<<endl;
    return 0;
}
*/

/*
// type casting - ek data type se dusre data type me change karna 
 
#include <iostream>
using namespace std;
int main () {
    char ch = 't'; 
    cout<< (int)ch;  // ascii value of 't' each character ki ek ascii value hoti hai 
    return 0; 
}
*/

/*
#include <iostream>
using namespace std;
int main() {
    char ch = '0';
    cout<< (int)ch;
    return 0;
}
*/

/*
// type casting - ek data type se dusre data type me change karna 
#include <iostream>
using namespace std;
int main () {
    // float x =  7.1;
    // int y;
    // y = (int)x;
    // cout<<y<<endl;

    // bool a = false;
    // cout<<a+9<<endl; // ans 9  0+9 = 9 
    // bool b = true;
    // cout<<b+9<<endl; // ans 9  1+9 = 10

    // char ch = 'a';
    // int ia = (int)ch;
    // cout<<ia<<endl;

    // cout<<ch+100<<endl; // character typecast hoga then add 
    // cout<<(int)ch+100;  correct way

    // H konse place pr hai find karo 

    char ch = 'A';
    int x = (int)ch;
    cout<<x-64<<endl;

    char ch2 = 'M';
    int y = (int)ch2; 
    cout<< y - 64<<endl;
    return 0;
}
*/


#include <iostream>
using namespace std;

int main () {
    // find the half value of  an integer
 /*   int x;
    cin>>x;

    float y = (float)x;

    cout<<(y/2)<<endl;'
    */

   // take float input and print the fractional part of the real number
   float a;
   cin>>a;

//    int b = a;
//    a = a - b;
//    cout<<a;
    
    // int y = (int)a;
    // a = a - y;
    // cout<<a<<endl;

    // let us input -1.3  0.7 aana chaiye greatest integer
    int y = (int)a;

    if(y<0) y = y -1;
    float z = (float)y;
    a = a - z;
    
    cout<<a;

    return 0;
}


/*                                                                 15\07\2024                                                                    */

// predict the output

#include <iostream>
using namespace std;

int main () {
    int num;
    int p = 5 , q = 10;
    p += q -= p; //  right first solve hoga 
    // q = q - p 10 - 5 = 5
    // p += (q -= p) 5 + 5 -> 10
    cout << p <<" "<<q<<endl;  

    // predict - 2
  
    return 0;
}

