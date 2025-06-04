/*                                                               12/12/2024                                                                     */
/* 
// wave form print
#include <iostream>
using namespace std;

int main () {
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
 
    for(int i = 0; i < 3; i++) {
        if(i % 2 == 0 ) {
            for(int j = 0; j < 3; j++) {
                cout<<arr[i][j]<<" ";
            }
        }
        else {
             for(int j = 3-1; j >= 0; j--) {
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
*/

/* 
// from 3 2 1 wave form
#include <iostream>
using namespace std;

int main () {
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
 
    for(int i = 0; i < 3; i++) {
        if(i % 2 != 0 ) {
            for(int j = 0; j < 3; j++) {
                cout<<arr[i][j]<<" ";
            }
        }
        else {
             for(int j = 3-1; j >= 0; j--) {
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
*/

/*
// reverse wave 
#include <iostream>
using namespace std;

int main () {
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
 
    for(int i = 3; i >=  0; i--) {
        if(i % 2 == 0 ) {
            for(int j = 0; j < 3; j++) {
                cout<<arr[i][j]<<" ";
            }
        }
        else {
             for(int j = 3-1; j >= 0; j--) {
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
*/

/* 
// column wise printing
// 1 4 7 8 5 2 3 6 9

#include <iostream>
using namespace std;

int main () {
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
 
    for(int i = 0; i <  3; i++) {
        if(i % 2 == 0 ) {
            for(int j = 0; j < 3; j++) {
                cout<<arr[j][i]<<" ";
            }
        }
        else {
             for(int j = 3-1; j >= 0; j--) {
                cout<<arr[j][i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
*/

// leetcode 54
// spiral form
/* 
#include <iostream>
using namespace std;

int main ( ) {
    int m =  3 , n = 3;
    // int arr[m][n] = {1,2,3,4,5,6,7,8,9}; // this will create problem do like below
    int arr[m][n] = {{1,2,3},{4,5,6},{7,8,9}};
    
    int minc = 0 , maxc = 2 , minr = 0 , maxr = 2;

    while(minc <= maxc && minr <= maxr) {
        // right
        for(int j = minc ; j <= maxc; j++) {
            cout<<arr[minr][j]<<" ";
        }
        minr++;

        // down
        for(int i = minr ; i <= maxr; i++) {
            cout<<arr[i][maxc]<<" ";
        }
        maxc--;

        // left
        for(int j = maxc ; j >= minc; j--) {
            cout<<arr[maxr][j]<<" ";
        }
        maxr--;
        
        // up
        for(int i = maxr ; i >= minr; i--) {
            cout<<arr[i][minc]<<" ";
        }
        minc++;

    }
    return 0;
}
*/

/* 
// above is correct but it will create some problems at some specific cases so 
#include <iostream>
using namespace std;

int main () {
    int m =  3 , n = 3;

    int arr[m][n] = {{1,2,3},{4,5,6},{7,8,9}};
    int totalele = m*n;
    int count = 0;

    int minc = 0 , maxc = 2 , minr = 0 , maxr = 2;

    // while(minc <= maxc && minr <= maxr && count < totalele) { // we can do like this also

    // }

    // 2nd method 
    while(minc <= maxc && minr <= maxr ) { // we can do like this also
    for(int j = minc; j <= maxc && count < totalele; j++) {
        cout<<arr[minr][j]<<" ";
        count++;
    }
    minr--;

    // down 
    for(int i = minr; i <= minc && count<totalele; i++) {
        cout<<arr[i][maxc]<<" ";
        count++;
    }
    maxc--;

    // left
    for(int j = maxc; j >= minc && count<totalele; j--) {
        cout<<arr[maxr][j]<<" ";
        count++;
    }
    maxr--;

    // up
    for(int i = maxr; i>= minr && count<totalele; i--) {
        cout<<arr[i][minc]<<" ";
        count++;
    }
    minc++;
    }
    return 0;
}
*/

/* 
// another way
#include <iostream>
using namespace std;

int main () {
    int m =  3 , n = 3;
    int arr[m][n] = {{1,2,3},{4,5,6},{7,8,9}};
    int minc = 0 , maxc = 2 , minr = 0 , maxr = 2;

    
    while(minc <= maxc && minr <= maxr ) {
    for(int j = minc; j <= maxc ; j++) {
        cout<<arr[minr][j]<<" ";
    }
    minr--;
    if(minr>maxr || minc>maxc) break;
    // down 
    for(int i = minr; i <= minc; i++) {
        cout<<arr[i][maxc]<<" ";
        
    }
    maxc--;
    if(minr>maxr || minc>maxc) break;

    // left
    for(int j = maxc; j >= minc ; j--) {
        cout<<arr[maxr][j]<<" ";
    }
    maxr--;
    if(minr>maxr || minc>maxc) break;

    // up
    for(int i = maxr; i>= minr ; i--) {
        cout<<arr[i][minc]<<" ";        
    }
    minc++;
    }
    return 0;
}
*/