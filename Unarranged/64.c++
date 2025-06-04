/*                                                               09/12/2024                                                                     */

/* 
// traversing 2-d array
#include <iostream>
using namespace std;

int main () {
    int arr[3][3] = {14, 12 , 74 , 15 ,  65 , 54 , 14, 12 , 74 };

    for(int i = 0 ; i < 3; i++) {
        for(int j = 0; j < 3; j++ ) {
            cout<<arr[i][j]<<" ";
        }
            cout<<endl;
    }
    return 0;
}
*/


/* 
// input from the user
#include <iostream>
using namespace std;

int main () {
    int m , n;

    cout<<"Enter the number of rows: ";
    cin>>m;

    cout<<"Enter the number of columns: ";
    cin>>n;

    int arr[m][n];

    for(int i = 0 ; i < m; i++) {

        for(int j = 0 ; j < n; j++) {
            cin>>arr[i][j];
        }    
    }

    for(int i = 0 ; i < m; i++) {

        for(int j = 0 ; j < n; j++) {
            cout<<arr[i][j]<<" ";
        }    
        cout<<endl;
    }
    
    return 0;
}
*/


// write a program to store roll number and marks obtain by  4 students side by side in a matrix

#include <iostream>
using namespace std;

int main () {
    int arr[2][4];

    for(int i = 0 ; i < 2; i++) {

        for(int j = 0 ; j < 4; j++) {
            cin>>arr[i][j];
        }    
    }

    for(int i = 0 ; i < 2; i++) {

        for(int j = 0 ; j < 4; j++) {
            cout<<arr[i][j]<<" ";
        }    
        cout<<endl;
    }
    
    return 0;
}