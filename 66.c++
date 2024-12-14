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