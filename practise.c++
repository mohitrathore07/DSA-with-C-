
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
/*
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
*/


// #include <iostream>
// using namespace std;

// int nthfibo(int n) {
//     if(n == 1 || n == 2) return 1;

//     return nthfibo(n-1) + nthfibo(n-2);

// }

// int main () {
//     cout<<nthfibo(6);
//     return 0;
// }



// #include<iostream>
// using namespace std;


// int main() {
//     int num1 = 45;
//     int num2 = 27;

//     int remainder = num1%num2;
//     cout<<remainder;
//     return 0; 
// }


/* 
// first occurance of an element
#include <iostream>
using namespace std;

int main () {
    int arr[] = {5,7,7,8,8,10};
    int target = 6;
    int low = 0;
    int high = sizeof(arr)/sizeof(arr[0]) - 1;
    bool flag = false;

    if(high == 0) {
        cout<<"-1 -1";
        return 0;
    }
    while (low<=high)
    {
        int mid = low + (high - low) / 2;
        if(arr[mid] == target) {
            if(arr[mid-1] != target) {
                flag = true;
                cout<<mid;
                break;
            }
            else {
                high  = mid - 1; 
            }
        }
        else if(arr[mid] < target) {
            low = mid+1;
        }
        else {
            high = mid - 1;
        }
    }
    if(flag == false) cout<<"-1 -1"; 
    return 0;
}
*/

/* 
#include <iostream>
using namespace std;

int main () {
    int arr[] = {};
    int target = 0;
    int low = 0;
    int high = sizeof(arr)/sizeof(arr[0]) - 1;
    bool flag = false;

    if(sizeof(arr)/sizeof(arr[0]) == 0 ){
        cout<<"-1 -1";
        return 0;
    }
    while (low<=high)
    {
        int mid = low + (high - low) / 2;
        if(arr[mid] == target) {
            while(arr[low] != target || arr[high] != target) 
            { 
                if(arr[low] != target) low++;
                if(arr[high] != target) high--;
            }
            flag = true;
            cout<<low<<endl;
            cout<<high;
            break;
        }
        else if(arr[mid] < target) {
            low = mid+1;
        }
        else {
            high = mid - 1;
        }
    }
    if(flag == false) cout<<"-1 -1"; 
    return 0;
}
*/

// #include <iostream>
// using namespace std;

// int main () {
//     int arr[] = {1,3,4,8,20,28,33};
//     // int n = sizeof(arr)/ sizeof(arr[0]);
//     int n = 7;
//     int k = 2;
//     while (k > 0)
//     {
//         int temp = arr[n-1];
//         for (int i = n - k; i > 0; i--)
//         {
//             arr[i] = arr[i-1];
//         }
//         arr[0] = temp;
//         k--;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }



/*
class Solution {
    public:
        vector<int> findClosestElements(vector<int>& arr, int k, int x) {
            int lo = 0;
            int hi = arr.size()-1;
            int lb = 0;
            int ub = 0;
            bool flag = false; // target not found case
            vector<int>ans;

            int n  = arr.size();
            int mid = 0;
            if(x < arr[0]) {
                int i = 0;
                while (ans.size() != k) 
                {
                    ans.push_back(arr[i]);
                    i++;
                    k--;
                }
            }
            else if (x > arr[n-1]) {
                int i = n-1;
                while (ans.size() != k) 
                {
                    ans.push_back(arr[i]);
                    i--;
                    k--;
                }
                
            }
            else {
                while(lo <= hi) {
                    mid = lo + (hi - lo) / 2;
                    if(arr[mid] == x) {
                        flag = true; // meaning target found
                        break;
                    } 
                    else if (arr[mid] > x) hi = mid - 1;
                    else lo = mid + 1;
                }

                if(flag == true) {
                    lb = mid - 1;
                    ub = mid + 1; 
                    ans.push_back(x);
                } else {
                    lb = hi;
                    ub =  lo; 
                }
    
                while( ans.size() != k) {
                    if(lb < 0) {
                        ans.push_back(ub);
                        ub++;
                    }
                    else if(ub > n-1) {
                        ans.push_back(lb);
                        lb--;
                    }
                    
                    else if(abs(x - arr[lb]) >= abs(x - arr[ub])) {
                        ans.push_back(arr[lb]);
                        lb--;
                    } 
                    else {
                        ans.push_back(arr[ub]);
                        ub++;
                    }
        
                }
            }
            sort(ans.begin(), ans.end());
            return ans;
        }
    };

*/

/* 
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main () {
    int lo = 0;
    int x = 9;
    int k  = 1;
    
    vector<int> arr = {1,1,1,10,10,10};
    int hi = arr.size()-1;
    int lb = 0;
    int ub = 0;
    bool flag = false; // target not found case
    vector<int>ans;

    int n  = arr.size();
    int mid = 0;
    if(x < arr[0]) {
        int i = 0;
        while (ans.size() != k) 
        {
            ans.push_back(arr[i]);
            i++;
        }
    }
    else if (x > arr[n-1]) {
        int i = n-1;
        while (ans.size() != k) 
        {
            ans.push_back(arr[i]);
            i--;
        }
        
    }
    else {
        while(lo <= hi) {
            mid = lo + (hi - lo) / 2;
            if(arr[mid] == x) {
                flag = true; // meaning target found
                break;
            } 
            else if (arr[mid] > x) hi = mid - 1;
            else lo = mid + 1;
        }

        if(flag == true) {
            lb = mid - 1;
            ub = mid + 1; 
            ans.push_back(x);
            cout<<x<<" ";
        } else {
            lb = hi;
            ub =  lo; 
        }

        while( ans.size() != k) {
            if(lb < 0) {
                ans.push_back(arr[ub]);
               cout<<arr[ub]<<" ";
                ub++;
            }
            else if(ub > n-1) {
                ans.push_back(arr[lb]);
                cout<<(arr[lb])<<" ";
                lb--;
            }
            
            else if(abs(x - arr[lb]) >= abs(x - arr[ub])) {
                cout<<(arr[lb])<<" ";
                ans.push_back(arr[lb]);
                lb--;
            } 
            else {
                cout<<(arr[ub])<<" ";
                ans.push_back(arr[ub]);
                ub++;
            }

        }
    }
    sort(ans.begin(), ans.end());
    
    return 0; 
}


*/

/*
class Solution {
    public:
        vector<int> findClosestElements(vector<int>& arr, int k, int x) {
            int lo = 0;
            int hi = arr.size()-1;
            int lb = 0;
            int ub = 0;
            bool flag = false; // target not found case
            vector<int>ans;
            int n  = arr.size();
            int mid = -1;
            if(x < arr[0]) {
                int i = 0;
                while (ans.size() != k) 
                {
                    ans.push_back(arr[i]);
                    i++;
                    k--;
                }
            }
            else if (x > arr[n-1]) {
                int i = n-1;
                while (ans.size() != k) 
                {
                    ans.push_back(arr[i]);
                    i--;
                    k--;
                }
            }
            else {
                while(lo <= hi) {
                    int mid = lo + (hi - lo) / 2;
                    if(arr[mid] == x) {
                        flag = true; // meaning target found
                        break;
                    } 
                    else if (arr[mid] > x) hi = mid - 1;
                    else lo = mid + 1;
                }

                if(flag == true) {
                    lb = mid - 1;
                    ub = mid + 1; 
                    ans.push_back(x);
                }
                else {
                    lb = hi;
                    ub =  lo; 
                }
    
                while( ans.size() != k) {
                    if(lb < 0) {
                        ans.push_back(arr[ub]);
                        ub++;
                    }
                    else if(ub > n-1) {
                        ans.push_back(arr[lb]);
                        lb--;
                    }

                    else if(abs(x - arr[lb]) >= abs(x - arr[ub])) {
                        ans.push_back(arr[lb]);
                        lb--;
                    } 
                    else {
                        ans.push_back(arr[ub]);
                        ub++;
                    }
        
                }
            }
            sort(ans.begin(), ans.end());
            return ans;
        }
    };

*/


/* 




#include<iostream>
using namespace std;

int main () {
    int sqrt = 41;
    int low = 0;
    int high = 41;
    bool flag = true;
    int mid = 0;
    while (low <= high) 
    {
        mid = low + (high - low) / 2;
        if(mid*mid == sqrt) {
            flag = false;
            cout<<mid;
            break;
        }
        else if((mid*mid) > sqrt) high = mid - 1;
        else low = mid + 1;
        
    }
    if(flag == true)  {
        cout<<high;
    }
    return 0;
}
*/


/* 
#include<iostream>
using namespace std;

int main () {
    int c = 4;
    int sqrt = c;
    int low = 0;
    int high = c;
    bool main = false;
    bool flag = false;
    while (low <= high)  {
        int mid = low + (high - low) / 2;
        if(mid*mid == sqrt) {
            flag = true;
            sqrt = mid;
            break;
        }
        else if((mid*mid) > sqrt) high = mid - 1;
        else low = mid + 1;
    } 
    if (flag == false) {
        sqrt = high;
    }
    for(int i = 0; i < sqrt; i++ ) {
        int j = i+1;
        if(((i*i)+(j*j)) == c ) main =  true; 
    }
    cout<<main;
    return 0;
}
*/

// binary search class plan - questions 
/*  - FINDING AN ELEMENT
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector <int>v = {-1,0,3,5,9,12};
    int target = 9;

    int lo = 0;
    int hi = v.size() - 1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if(v[mid] == target) {
            cout<<"target found at: "<<mid;
            break;
        }
        else if(v[mid] < target) lo = mid+1;
        else hi = mid - 1;
    }
    
    return 0;
}
    */


/*
// lower bound
#include<iostream>
#include<vector>
using namespace std;

int main () {
    vector<int> v = {4,6,10,12,18,18,20,20,30,45};
    int x = 20;
    int lo = 0;
    int hi = v.size()-1;
    int ans = -1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if(v[mid] == x) {
            ans = mid;
            hi = mid - 1;
        } 
        else if(v[mid] < x) lo = mid+1;
        else hi = mid - 1;
    }
    cout<<"lower bound for: "<<x<<" is "<<ans;
    return 0;
}
*/

/* 
// upper bound
#include<iostream>
#include<vector>
using namespace std;

int main () {
    vector<int> v = {4,6,10,12,18,18,20,20,30,45};
    int x = 20;
    int lo = 0;
    int hi = v.size()-1;
    int ans = -1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if(v[mid] == x) {
            ans = mid;
            lo = mid + 1;
        } 
        else if(v[mid] < x) lo = mid+1;
        else hi = mid - 1;
    }
    cout<<"lower bound for: "<<x<<" is "<<ans;
    return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main () {
    int arr[] = {0,1,1,1};

    int n = sizeof(arr) / sizeof(arr[0]);
    int lo = 0;
    int hi = n - 1 ;
    int mid = -1;
    bool flag = false;
    while (lo <= hi)
    {
        mid = lo + (hi - lo) / 2; 
        if(arr[mid] == 1 && arr[mid - 1] == 0) {
            flag = true;
            break;
        }
        else if(arr[mid] == 0){
            lo = mid + 1;
        }
        else {
            hi = mid - 1;
        }
    }
    if(flag) cout<<"no of 1's is: "<<n-mid;
    else cout<<0;
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
    int n;
    cout<<"no of rows: ";
    cin>>n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == j || i+j == n+1) cout<<i<<j;
            else cout<<" ";
        }
        cout<<endl;
    }    
    return 0;
}

*/


/* *
   1
  121
 12321
1234321 
*/

#include <iostream>
#include <climits>
using namespace std;

int main () {
    int n ;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    int min = INT_MAX;
    for(int i = 1; i <= n-1; i++) {
        cin>>arr[i];
    
    }
    for(int i = 1; i <= n-1; i++) {
        if(min > arr[i]) {
            min = arr[i];
        }
    }
    cout<<"Min is: "<<min;
    return 0;
}