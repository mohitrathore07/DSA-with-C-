/*                                                           22/09/2024                                                             */

// Practise Questions array
/* 
#include <iostream>
using namespace std;

int main () {
    int n , product  = 1;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i = 1; i <= n-1; i++) {
        cin>>arr[i];
    }
    
    for(int i = 1; i <= n-1; i++) {
        product *= arr[i];
    }
    cout<< product;
    return 0;
}
*/

// Q - 2 second largest element in the array in one pass


/* 
// Q - 2
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
*/

// Q - 3
/*
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
*/



/* 
// Predict output - Q -6
#include <iostream>
#include <climits>
using namespace std;

int main () {
    int sub[50] , i;
    for(int i = 0; i <= 48; i++) {
        sub[i] = i;
        cout<<sub[i]<<" ";
    }
    return 0;
}
*/


// doubt -  Q = 5 

/* 
// second largest element Q - 2
#include <iostream>
#include <climits>
using namespace std;

int main () {
    int arr[5] = {477 , 1 , 63 , 2 , 5};
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i = 0; i < 5; i++) {
        if(max < arr[i]) {
        smax  = max;
        max = arr[i];
        }
        else if(smax < arr[i] && max != arr[i] ) {
            smax = arr[i];
        }
    }
    if(smax == INT_MIN ) {
        cout<<"No second element exist";
    }
    else cout<<"smax is: "<<smax;
    return 0;
}
*/


/* 
#include <iostream>
#include <climits>
using namespace std;

int main () {
    int arr[5] = {477 , 1 , 63 , 2 , 2};
    int flag = false;
    for(int i = 0; i < 5; i++) {
        for(int j = i+1; j < 5; j++) {
            if(arr[i] == arr[j] ) {
                flag = true;
                cout<<i<<" and at "<<j <<endl;
                break;
            }
        }
    }   
    if(flag == false ) {
        cout<<"No duplicate value";
    }
    return 0;
}
*/


// other questions on array
/*
//Write a program to create an array of 10 integers. Input the elements from the user and print them in reverse order.
#include <iostream>
using namespace std;

int main () {
    int arr[10];
    cout<<"Enter the element: "<<endl;
    for(int i = 0; i < 10; i++) {
        cin>>arr[i];
    }
    cout<<"in reverse order: ";
    for(int i = 9; i > 0; i--) {
        cout<<arr[i]<<" ";
    }

    return 0;
}
*/

/* 
// Write a C++ program to count the number of positive, negative, and zero elements in an array of integers provided by the user.
#include <iostream>
using namespace std;

int main () {
    int arr[10];
    cout<<"Enter the element: "<<endl;
    for(int i = 0; i < 10; i++) {
        cin>>arr[i];
    }
    int positive = 0 , negative = 0, zeros = 0;
    for(int i = 0; i < 10; i++) {
        if(arr[i] < 0) {
            negative++;
        }
        else if(arr[i] > 0) {
            positive++;
        }
        else {
            zeros++;
        }
    }
    cout<<"Positive numbers: "<<positive<<"\nNegative numbers: "<<negative<<"\nzeros: "<<zeros;    
    return 0;
}
*/


// merge 2 arrays 
/* 
#include <iostream>
using namespace std;

int main () {
    int arr1[5];
    int arr2[5];
    cout<<"Enter the element: "<<endl;
    for(int i = 0; i < 5; i++) {
        cin>>arr1[i];
    }
    cout<<"Enter the element: "<<endl;
    for(int i = 0; i < 5; i++) {
        cin>>arr2[i];
    }
    int n = (sizeof(arr1) / sizeof(arr1[0])) + (sizeof(arr2) / sizeof(arr2[0]));
    cout<<"no of ele "<<n<<endl;
    cout<<"size "<<(sizeof(arr1) / sizeof(arr1[0]))<<endl;
    cout<<"size "<<(sizeof(arr2) / sizeof(arr2[0]))<<endl;
    int arr3[n]; 
    for(int i = 0; i < 5; i++) {
        arr3[i] = arr1[i];
    }
    for(int i = 0; i < 5; i++) {
        arr3[i+5] = arr2[i];
    }
    for(int i = 0; i < n; i++) {
        cout<<arr3[i]<<" ";
    }
    return 0;
}

*/