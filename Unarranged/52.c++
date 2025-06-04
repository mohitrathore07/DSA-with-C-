/*                                                            22/09/2024                                                                    */

// Arrays

/* 
// find the length of the array
#include <iostream>
using namespace std;

int main () {
    int array[] = {4,6,8,6,2,9,4,5,2,6,8,5,2};
    int size = sizeof(array) / sizeof(array[0]);
    cout<<size; 
    return 0;
}
*/

/* 
// Memory Allocation - contiguous memory allocate hoti hai 
#include <iostream>
using namespace std;

int main () {
    int arr[5];
    cout<<&arr[0]<<" "; 
    cout<<&arr[1]<<" "; 
    cout<<&arr[2]<<" "; 
    cout<<&arr[3]<<" "; 
    cout<<&arr[4]<<" "; 
    return 0;
}
*/

/* 
// Predict the output
#include <iostream>
using namespace std;

int main () {
    int num[26] , temp;
    num[0] = 100;
    num[25] = 200;
    temp = num[25];
    num[25] = num[0];
    num[0] = temp;
    cout<<endl<<num[0] <<" "<<num[25];
    return 0;
}
*/  

/* 
// sum of the element
#include <iostream>
using namespace std;

int main () {
    int n ;
    cin>>n;
    int arr[n];
    int sum = 0;
    for(int i = 1; i <= n-1; i++) {
        cin>>arr[i];
    }
    
    for(int i = 1; i <= n-1; i++) {
        sum+=arr[i];
    }
    cout<<sum;
    return 0;
}
*/

// linear search
/* 
#include <iostream>
using namespace std;

int main () {
    int n ;
    cin>>n;
    int arr[n];
    for(int i = 1; i <= n-1; i++) {
        cin>>arr[i];
    }

    int x;
    cin>>x;

    for(int i = 1; i <= n-1; i++) {
        if(arr[i]==x) {
            cout<<x<<" is present at i = "<<i;
        }
    }
    return 0;
}
*/

// M - 2
/* 
#include <iostream>
using namespace std;

int main () {
    int n ;
    cin>>n;
    int arr[n];
    for(int i = 1; i <= n-1; i++) {
        cin>>arr[i];
    }

    int x;
    cin>>x;
    bool flag = false;
    for(int i = 1; i <= n-1; i++) {
        if(arr[i]==x) {
            flag = true;
        }
    }
    if(flag==true) cout<<"element is present ";
    return 0;
}
*/

// Max values
/* 
#include <iostream>
using namespace std;

int main () {
    int n ;
    cin>>n;
    int arr[n];
    for(int i = 0; i <= n-1; i++) {
        cin>>arr[i];
    }

    int x;
    cin>>x;

    int max = arr[0]; 
    for(int i = 1; i <= n-1; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    cout<<"element max is: "<<max;
    return 0;
}
*/


/* 
// M - 2
#include <iostream>
#include <climits>
using namespace std;

int main () {
    int n ;
    cin>>n;
    int arr[n];
    for(int i = 0; i <= n-1; i++) {
        cin>>arr[i];
    }

    int x;
    cin>>x;

    int max =  INT_MIN; // INT_MIN - sabse min value hoti hai we can store it  
    for(int i = 1; i <= n-1; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    cout<<"element max is: "<<max;
    return 0;
}
*/

/* 
// second largest number
#include <iostream>
#include <climits>
using namespace std;

int main () {
    int n ;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i = 0; i <= n-1; i++) {
        cin>>arr[i];
    }


    int max =  INT_MIN; // INT_MIN - sabse min value hoti hai we can store it  
    int smax =  INT_MIN;   

     for(int i = 1; i <= n-1; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    for(int i = 1; i <= n-1; i++) {
        if( max != arr[i] && arr[i] > smax ) {
            smax = arr[i];
        }
    }
    cout<<"element smax is: "<<smax;

    return 0;
}
*/

/* 
#include <iostream>
#include <climits>
using namespace std;

int main () {
    int n ;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i = 0; i <= n-1; i++) {
        cin>>arr[i];
    }

    int max =  INT_MIN; // INT_MIN - sabse min value hoti hai we can store it  
    int smax =  INT_MIN;   

     for(int i = 1; i <= n-1; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    for(int i = 1; i <= n-1; i++) {
        if( max != arr[i] && arr[i] > smax ) {
            smax = arr[i];
        }
    }
    cout<<"element smax is: "<<smax;

    return 0;
}
*/


/*
#include <iostream>
#include <climits>
using namespace std;

int main () {
    int n ;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i = 0; i <= n-1; i++) {
        cin>>arr[i];
    }

    int max =  INT_MIN; // INT_MIN - sabse min value hoti hai we can store it  
    int smax =  INT_MIN;   

     for(int i = 1; i <= n-1; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    for(int i = 1; i <= n-1; i++) {
        if( max != arr[i] && arr[i] > smax ) {
            smax = arr[i];
        }
    }
    cout<<"element smax is: "<<smax;

    return 0;
}
*/

#include <iostream>
#include <climits>
using namespace std;

int main () {
    int n ;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i = 0; i <= n-1; i++) {
        cin>>arr[i];
    }   
    int x, count = 0;
    cin>>x;
     for(int i = 1; i <= n-1; i++) {
        if(arr[i] > x) {
            count++;
        }
    }

    cout<<"there are "<<count<<" no of elements greater than: "<<x;
    return 0;
}