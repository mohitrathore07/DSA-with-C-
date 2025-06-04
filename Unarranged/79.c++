/*                                                                                 15/01/2024                                                                                         */

// nth fibonacci using recursion

/* 
#include <iostream>
using  namespace std;

int fibo(int n) { 
    if(n == 1 || n == 2) return 1;
    return fibo(n-1) + fibo(n-2);
}

int main () {
    cout<<fibo(12);
    return 0;

*/


/*
// power method 2 

#include <iostream>
using namespace std;

int power(int a , int b) {
    if(b == 0 ) return 1;
    if(b % 2 == 0 ) {
    int ans = power(a, b/2);
        return ans * ans; 
    }
    else {
        int ans = power(a, b/2);
        return ans*ans*2;
    }
}

int main () {
    cout<<power(3,5);
    return 0;
}

*/

// stair path ways  - copy dry run 
/* 
#include <iostream>
using namespace std;

int stairs(int n) {
    if (n == 2) return 2;
    if (n == 1) return 1;
    return stairs(n - 1) + stairs(n-2);
}

int main () {
    cout<<stairs(6);
    return 0;
}
*/

#include<iostream>
#include <string>
using namespace std;

// method 1 calculating the number of ways to reach to a position on a matrix
int mazemethod1(int sr , int sc , int er , int ec) {
    if(sr > er || sc > ec) return 0;
    if(sr == er && sc == ec) return 1;
    int rightWays = mazemethod1(sr, sc+1 , er , ec);
    int downWays = mazemethod1(sr+1, sc , er , ec);
    return rightWays+downWays;
}

// method 2 printing the  ways to reach to a position on a matrix
void mazemethod2(int sr , int sc , int er , int ec , string s) {
    if(sr > er || sc > ec) return;
    if(sr == er && sc == ec) {
        cout<<s<<endl;
        return;
    }
    mazemethod2(sr, sc+1 , er , ec , s + 'R');
    mazemethod2(sr+1, sc , er , ec , s + 'D');
}

/// method - 3  use only two variables
int mazemethod3(int row , int col) {
    if (row < 1 || col < 1 ) return 0;
    if (row == 1 && col == 1) return 1;
    int rightways = mazemethod3(row , col-1); 
    int downways = mazemethod3(row-1 , col); 
    return rightways+downways;
}


int main () {
    // mathod 1 
    cout<<mazemethod1(0,0,2,2)<<endl;

    /* mathod 2 */
    mazemethod2(0 , 0 , 2 , 2 , " ");

    // mathod 3 - use only 2 variables
    cout<<mazemethod3(3,3);
    return 0;
