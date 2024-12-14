/*                                                        2-d array Assignment                                                           */

// Assignment - 1
/* 
// Q - store 10 at every index of matrix 5*5 
#include <iostream>
using namespace std;

int main ( ) {
    int arr[5][5];

    for(int i = 0; i < 5;i++) {
        for(int j = 0; j < 5;j++) {
            arr[i][j] = 10;
    }   
    }

    for(int i = 0; i < 5;i++) {
        for(int j = 0; j < 5;j++) {
            cout<<arr[i][j]<<" ";
    }   
    cout<<endl;
    }
    return 0;
}
*/

/* 
// WAP to add two matrix and save the result in one of the given matrices
#include  <iostream>
using namespace std;

int main () {
    int arr1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int arr2[3][3] = {{4,5,8},{0,0,8},{1,2,0}};

    for(int i = 0; i < 3; i++ ) {
        for(int j = 0; j < 3; j++) {
            arr1[i][j] = arr1[i][j]+arr2[i][j];
        }
    }

      for(int i = 0; i < 3;i++) {
        for(int j = 0; j < 3;j++) {
            cout<<arr1[i][j]<<" ";
    }   
    cout<<endl;
    }
    return 0;
}
*/

/* 
// max ele in 2d array
#include <iostream>
#include <limits.h>
using namespace std;

int main () {
    int arr[4][4] = {1,3,4,6,2,4,5,7,3,5,6,8,4,6,7,9};
    int max = INT_MIN;

    for(int i = 0 ; i < 4; i++ ) {
        for(int j = 0; j < 4; j++) {
            if(max <= arr[i][j]) {
                max = arr[i][j];
            }
        }
    }    

    cout<<"max is: "<<max;
    return 0;
}
*/

/* 
// WAP to print the row number having the maximum sum in a given matrix
#include <iostream>
using namespace std;

int main () {
    int arr[4][4] = {{1,3,5,7},{3,4,7,8},{1,4,12,3}};
    int fsum = 0;
    for(int i = 0; i < 4; i++) {
        int sum = 0; 
        for(int j = 0; j < 4; j++) {
            sum += arr[i][j];
        }
        if(sum >= fsum ) {
            fsum = sum;
        }
     }
    cout<<"final sum is: "<<fsum;
    return 0;
}

*/

// ********** Remains ***********
// 2d array  Write a function which accepts a 2D array of integers and its size as aurguments and display the elements of middle row and columns 
/*
#include <iostream>
using namespace std;

void printingelements(int** arr , int size) {
    int middle = size / 2;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(i == middle || j == middle){
                cout<<arr[i][j]<<" ";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
     }
}

int main () {
    int m , n;
    cout<<"Enter the no of rows and columns (row == colums): ";
    cin>>m>>n;

    int arr[m][n];
    cout<<"Enter elements: ";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin>>arr[i][j];
        }
     }
    printingelements(arr, m);
    return 0;
}
*/


// Assignement 2d-array 2

/*  // print all the diagonal elements
#include <iostream>
using namespace std;

int main () {
    int m , n;
    cout<<"Enter the num of rows and columns of a square matrix: (rows == columns ): ";
    cin>>m>>n;
    int arr[m][n];  

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin>>arr[i][j];
        }
    }

    int mid = m/2;
    cout<<"mid is: "<<mid<<endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if( ( (i == 0 || i == n - 1) && (j == 0||j == n-1) ) || (i == mid && j == mid) ) {
                cout<<arr[i][j]<<" ";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }


    return 0;
} 
*/

/* 
// anti clock wise printing 
#include <iostream>
using namespace std;

int main () {
    int m , n;
    cout<<"Enter the num of rows and columns of a square matrix: (rows == columns ): ";
    cin>>m>>n;
    int arr[m][n];  

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin>>arr[i][j];
        }
    }

    //  step - 1 transpose 

    for(int i = 0; i < m; i++) {
        for(int j = i + 1; j < n; j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    // step 2 last row and 1st column ko alter
     
    for(int j = 0; j < n; j++) {
        int k = 0;
        int i = m - 1;
        while (k <= i) 
        {
            int temp = arr[k][j];
            arr[k][j] = arr[i][j];
            arr[i][j] = temp;
            k++;
            i--;
        }
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
*/

