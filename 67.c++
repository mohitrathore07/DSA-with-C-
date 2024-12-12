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