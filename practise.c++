
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