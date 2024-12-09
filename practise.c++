
/*
// Leap Year Program
#include <iostream>
using namespace std;

int main () {
    int year;
    cout<<"Enter an integer: "<<endl;
    cin>>year;

    // if((year%4==0 || year % 400 == 0) && year % 100 != 0 )
    if( ( year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0 ) // for exceptions like 2000 it will give a perfect solution
    {
        cout<<"leap"<<endl;
    }
    else {
        cout<<"not a leap"<<endl;
    }
    return 0;
}
*/

/*
// greater num
#include <iostream>
using namespace std;

int main () {
    int num1;
    int num2;
    int num3;
    cout<<"enter any 3 integers: "<<endl;
    cin>>num1>>num2>>num3;

    if (num1 == num2 && num2 == num3) {
        cout<<"all are equal num: "<<endl;
    }
    else if((num1 >= num2) && (num1 >= num3)) {
        cout<<"greater is num1: "<<num1<<endl;
    }
    else if((num2 >= num1 ) && (num2 >= num3)) {
        cout<<"greater is num2: "<<num2<<endl;
    }
    else {
        cout<<"greater is num3: "<<num3<<endl;
    }
    return 0;
}

*/

// print ascii with character

/*
#include <iostream>
using namespace std;

int main ( ) {
    for (char i = 'A'; i <= 'Z' ; i++) {
        cout<<i<<" "<<int(i)<<endl;
    }
    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main () {
    int n;

    cout<<"enter an integer"<<endl;
    cin>>n;

    int factorial = 1;
    int temp = n;

    while (temp > 0)

    {
        factorial *= temp;
        temp--;
    }

    cout<<"factorial of: "<<temp<<"is: "<<factorial<<endl;

    return 0;
}
*/

/*
// Write a C++ program that reads numbers until the user enters a negative number, then prints the sum of all entered positive numbers using a while loop.

#include <iostream>
using namespace std;

int main () {
    int n = 0, sum = 0;


    while (true) // bcz n is by default 0
    {
    cout<<"enter numbers: ";
    cin>>n;
    if(n<0) {
        break;
    }
    sum += n;
    }

    cout<<"sum is: "<<sum<<endl;
    return 0;
}
*/

/*

// fabonacci series
#include <iostream>
using namespace std;

int main () {
    int n;
    cout<<"enter an integer"<<endl;
    cin>>n;

    int prev = -1, current = 1 , next;
    for (int i = 1; i < n; i++)
    {
       next = prev + current;
       cout<<next<<" ";
       prev = current;
       current = next;
    }

    return 0;

}
*/

/*

// GCD - two numbers

#include <iostream>
using namespace std;

int main () {
    int n, m;
    cout<<"Enter two integers: ";
    cin>> n >> m;

    if(m > n) {
        int temp = n;
        n = m;
        m = temp;
    }

    while( m != 0 ){
        int remainder = n % m;
        n = m;
        m  = remainder;
    }

    cout<<n<<endl; // n bcz m at last will be equal to 0 and n will have to be num2 (m)
    return 0;
}
*/

/* // Write a C++ program to print all prime numbers between 1 and 100 using a combination of for, if-else, and while loops.

#include <iostream>
using namespace std;

int main () {
    for(int i = 2; i <= 100; i++) {
        int n = i - 1;
        bool flag = true;
        while (n > 1)
        {
            if(i % n == 0) {
                flag = false;
                break;
            }
            n--;
        }
        if(flag == true) {
            cout<<i<<" ";
        }
    }
    return 0;
}
*/

/*

// min max in a number

#include <iostream>
using namespace std;

int main () {

    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int min = n % 10;
    int max = 0;

    do
    {
        int r = n % 10;
        if(r > max) {
            max = r;
        }
        else if (r < min) {
            min = r;
        }
        n /= 10;
    } while (n > 0);

    cout<<"min is: "<<min<<endl;
    cout<<"max is: "<<max<<endl;
    return 0;
}
*/

/*

// Write a C++ program to generate and print the first n prime numbers using a combination of for, if-else, and do-while loops.


#include <iostream>
using namespace std;

int main () {

    int n;
    cout<<"Enter an integer: ";
    cin>>n;

    for(int i = 1; i <= n ; i++) {
        int j = 2;
        bool flag = true;

        do
        {
            if(i % j == 0 ){
                flag = false;
                break;
            }

            j++;
        } while (j < i);

        if(flag == true) {
            cout<< i << " ";
        }
    }

    return 0;
}
*/

/*

// prime b/w 2 numbers

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "enter two integers (a <= b): " << endl;
    cin >> a >> b;

    while (a > b)
    {
        cout << "The first number should be less than or equal to the second number. Please re-enter: " << endl;
        cin >> a >> b;
    }

    for (int i = a; i <= b; i++)
    {
         if (i == 1) continue;
        bool flag = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = false;
                break;
            }
        }
       
        if (flag == true)
            cout << i << " ";
    }

    return 0;
}
*/

/* 
#include <iostream>
using namespace std;

int main()
{
    int a , b;
    cout << "enter an integer (a <= b)" << endl;
    cin >> a >> b;
    while(a > b) {
        cout << "The first number should be less than or equal to the second number. Please re-enter: " << endl;
        cin >> a >> b;
    }

    int prev = -1 , current = 1 , next; 
    for(int i = a; i <= b; i++) {
        next = prev + current;
        cout<<next<<" ";
        prev = current;
        current = next;
    }
    return 0;
}

*/

/* 
#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int n;
    cout<<"Enter a number to check armstrong or not: ";
    cin >> n;

    int temp = n ;
    int count  = 0;
    int sum = 0;
    while(temp > 0) {
        temp /= 10;
        count++;
    }
    temp = n;
    while(n > 0) {
        int d = (n % 10);
        d = pow(d , count);
        sum += d;
        n /= 10;
    }
    if(temp == sum) {
        cout<<"Armstrong number";
    }
    else {
        cout<<"not a Armstrong number";
    }
    return 0;
}
*/

/* 
#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;

    int prev = -1 , current = 1 , next;
    for (int i = 1; i <= n; i++)
    {
        next = prev + current;
        cout<<next<<" ";
        prev = current;
        current = next;
    }
    
    return 0;
}
*/
/* 
#include <iostream>
using namespace std;

int main () {
    int a, b;
    cout<<"enter base nd exponant :";
    cin>>a>>b;

    float power  = 1;
    bool flag = true;

    if(b <= 0) {
        flag = false;
        b  = -b;
    }

    for(int i = 1; i <= b;i++)
    {
        power *= a;
    }
    if(flag == false) {
        power = 1/power;
    }

    if(a==0 && b == 0) cout<<"Not defined";
    else cout<<power;
    return 0;
}
*/

/* 
#include <iostream>
using namespace std;

int main () {
    int a;
    cout<<"enter a num (Positive number) :";
    cin>>a;

    int Esum = 0, Osum = 0;
    for (int i = 1; i <= a; i++)
    {
        if(i % 2 == 0) {
            Esum += i; 
        }
        else {
            Osum += i;
        }
    }
    cout<<"sum of even numbers: "<<Esum<<endl;
    cout<<"sum of odd numbers: "<<Osum;
    return 0;
}
*/

/* 
#include <iostream>
using namespace std;

int max(int a  , int b ) {
    return (a > b ? a : b);
}
int main () {
    int a = 25;
    int b = 52;
    cout<<max(a, b);
    return 0;
}
*/

/* 
#include <iostream>
using namespace std;

int fun(int = 0  , int  = 0 );
int main () {
    cout<<fun(4);
    return 0;
}

int fun(int x , int y) {
    return (x+y);
}
*/

//  if else or condition 

#include <iostream>
using namespace std;

int main () {
    int a = 4; 
    int b = 5;
    int c = 6;

    if (a > b || b > c) {
        cout<<"a is greater than b";
    }
    else {
        cout<<"none";
    }
    return 0;
}