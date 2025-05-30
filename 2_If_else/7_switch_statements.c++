/*                                                                      31/07/2024                                                             */

// switch statement

// input week number nd print day accordingly
/*
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter a number between 1 - 7" << endl;
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "monday" << endl;
        break;

    case 2:
        cout << "tuesday" << endl;
        break;

    case 3:
        cout << "wednesday" << endl;
        break;
    case 4:
        cout << "thursday" << endl;
        break;
    case 5:
        cout << "friday" << endl;
        break;
    case 6:
        cout << "saturday" << endl;
        break;
    case 7:
        cout << "sunday" << endl;
        break;
    default:
        cout << "u've entered a wrong number day" << endl;
        break;
    }
    return 0;
}
*/

// number of days in a month

/*
#include <iostream>
using namespace std;

int main () {
  int n;
    cout << "enter a month number" << endl;
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "jan - 31" << endl;
        break;

    case 2:
        cout << "feb - 28/29" << endl;
        break;

    case 3:
        cout << "march - 31" << endl;
        break;
    case 4:
        cout << "april - 30" << endl;
        break;
    case 5:
        cout << "may - 31" << endl;
        break;
    case 6:
        cout << "june - 30" << endl;
        break;
    case 7:
        cout << "july - 31" << endl;
        break;
    case 8:
        cout << "august - 31" << endl;
        break;
    case 9:
        cout << "sept - 30" << endl;
        break;
    case 10:
        cout << "oct - 30" << endl;
        break;
    case 11:
        cout << "nov - 30" << endl;
        break;
    case 12:
        cout << "dec - 31" << endl;
        break;
    default:
        cout << "u've entered a wrong month number" << endl;
        break;
    }
    return 0;
}
*/

// switch condition

#include <iostream>
using namespace std;

// 1 3 5 7 8 10 12  -> 31 days
// 4 6 9 11  -> 30 days
// 28  -> 28 days

int main () {
     int n;
    cout << "enter a month number" << endl;
    cin >> n;

    switch ((n<=7 && n%2!=0) || (n>=8 && n%2==0))
    {
    case 1:
        cout<<"31";
        break;
    }
    switch (n==4 || n == 6 || n == 9 || n == 11)
    {
        case 4:
        cout<<"30"; 
        break;
    }
   switch (n)
   {
    case 2:
    cout<<"feb";
    break;
   }
    return 0;
}


/*                                                                01/08/2024                                                                     */
// calculator
/*
#include <iostream>
using namespace std;

int main () {
    int a , b;
    cin>>a>>b;

    char x;
    cin>>x;

    if(x == '+') {
        cout<<a+b;
    }
    if(x == '-') {
        cout<<a-b;
    }
    if(x == '*') {
        cout<<a*b;
    }
    if(x == '/') {
        cout<<a/b;
    }
    return 0;
}

*/


#include <iostream>
using namespace std;

int main () {
    int a , b;
    cin>>a>>b;

    char x;
    cin>>x;

    switch (x)
    {
    case '+':
        cout<<"result: "<<a+b;
        break;
    case '-':
        cout<<"result: "<<a-b;
        break;
    case '*':
        cout<<"result: "<<a*b;
        break;
    case '/':
        cout<<"result: "<<a/b;
        break;
    
    default:
    cout<<"wrong operation";
        break;
    }
    return 0;
}


/*                                                                02/08/2024                                                                    */

// predict the output
/*
#include <iostream>
using namespace std;

int main () {
    int x = 3 , y , z ;
    y = x = 10 ; // x = 10 then y = 10
    z = x < 10 ; //  false 0

    cout<< "x = "<< x << " y = "<< y << " z = "<<z;
    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main () {
    int k = 35;
    cout<<(k == 35) <<endl << (k == 50) << endl<<(k>40); // 1 0 0
    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main()
{
    int i = 65;
    char J = 'A';
    if (i == J)
    {
        cout << "yes it is true" << endl;
    }
    else
    {
        cout << "not it isn't" << endl;
    }
    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main () {
    int a;
    if(3 + 2 % 5) { // non 0  number bool me true return karta hai
        cout<<" this works"<<endl;
    }
    if(a = 10) {
        cout<<"even this works "<<endl;
    }
    if(-5) {
        cout<<"also this works "<<endl;
    }
    return 0;
}
*/

