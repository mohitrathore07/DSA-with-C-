/*                                                               11/12/2024                                                                     */

/* 
// change matrix to its transpose where no of rows and columns = n 
#include <iostream>
using namespace std;

int main () {
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(i == j) {
                continue;
            }
            else {
                if(i <= j) {
                    int temp =  arr[i][j];
                    arr[i][j] = arr[j][i];
                    arr[j][i] = temp;
                }
                else {
                    continue;
                }
            }
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

*/ 

/* another method of doing this
#include <iostream>
using namespace std;

int main () {
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};

    for(int i = 0; i < 3; i++) {
        for(int j = i+1; j < 3; j++) {  
            int temp =  arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
                  
           }
        }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
*/

// leetcode 48  - clock wise rotate

#include <iostream>
using namespace std;

int main () {
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};

    for(int i = 0; i < 3; i++ ) {
        for(int j = i+1; j < 3; j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

      for(int i = 0; i < 3; i++ ) {
        for(int j = 0; j < 3; j++) {
           cout<<arr[i][j]<<" ";
            }
        cout<<endl;
        }

    for(int i = 0; i < 3; i++ ) {
        int k = 0;
        int j = 3-1;
        while (k <= j)
        {
            int temp = arr[i][k];
            arr[i][k] = arr[i][j];
            arr[i][j] = temp;
            k++;
            j--;
        }
        
        
    }
    for(int i = 0; i < 3; i++ ) {
        for(int j = 0; j < 3; j++) {
           cout<<arr[i][j]<<" ";
            }
        cout<<endl;
        }
    
    return 0;
}


/*                                                               11/12/2024                                                                     */

// multiplation of matrix

#include <iostream>
using namespace std;

int main ( ) {
    int m ,n,p,q;

    cout<<"Enter the no. of rows of 1st array";
    cin>>m;

    cout<<"Enter the no. of cols of 1st array";
    cin>>n;

    cout<<"Enter the no. of rows of 2nd array";
    cin>>p;

    cout<<"Enter the no. of cols of 2nd array";
    cin>>q;

    if(n == p ) {
        int a[m][n];
        cout<<"Enter elements of a matrix: ";
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                cin>>a[i][j];
            }
        }
        int b[p][q];
        cout<<"Enter elements of 2nd matrix: ";
        for(int i = 0; i < p; i++) {
            for(int j = 0; j < q; j++) {
                cin>>b[i][j];
            }
        }
       
        int res[m][q];
         for(int i = 0; i < m; i++) {
            for(int j = 0; j < q; j++) {
                res[i][j] = 0;
                for(int k = 0; k < p; k++) {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }
         for(int i = 0; i < m; i++) {
            for(int j = 0; j < q; j++) {
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else {
        cout<<"Multiplication not possible";
    }
    return 0;
}