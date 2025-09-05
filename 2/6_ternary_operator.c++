/*                                                                29/07/2024                                                                     */

// predict the output
/*
#include <iostream>
using namespace std;

int main () {
    int x = 10, y = 20;
    if (x == y);
    cout<<x<<" "<<y<<endl;    // 10 20
    return 0;
}
 */

/*
#include <iostream>
using namespace std;

int main () {
    int x = 10, y = 20;
    if (x == 10)
    cout<<x<<endl;   
    else ;
    cout<< y<<endl;   // 10 20
    return 0;
}
*/

// Ternary Operator
/*
#include <iostream> 
using namespace std;

int main () {
    int n;
    cin>>n;

    // condition ? true : false - ternary operator

    n%2==0 ? cout<<"even":cout<<"odd"<<endl;
    return 0;
}
*/
#include <iostream> 
using namespace std;

int main () {
    int marks;
    cin>>marks;

    marks>33? cout<<"pass":cout<<"fail"<<endl;
    return 0;
}



/*                                                       30/07/2024                                                                              */

// predict the output

/*
#include <iostream>
using namespace std;
int main () {
    char X; 
    int a = 2;
    X = (a > 0)? 'a' : 'S';
    cout<<"Value of x: "<<X<<endl;
    cout<<"Value of a: "<<a<<endl;
    return 0;
}
*/

/*
#include <iostream>
using namespace std;
int main () { 
    int x = 2;
    x= 5 > 8 ? 10: 1 != 2 < 5 ? 20 : 30; // copy
    cout<<"Value of x: "<<x<<endl;
    return 0;
}
*/

#include <iostream>
using namespace std;
int main () { 
    int x = 0;
    float f = 3.111;

    cout<<(x > 0 ? f : 0)<<endl;
    return 0;
}