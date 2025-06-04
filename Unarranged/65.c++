/*                                                               11/12/2024                                                                     */

/*
// Q - 2d array find largest number
#include <iostream>
#include <limits.h>

using namespace std;

int main () {
    int arr[4][4];
    
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cin>>arr[i][j];
    }    
    }
    // int max = arr[0][0];

    int max = INT_MIN;

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(max < arr[i][j]){
                max = arr[i][j];
            }
    }    
    }
    cout<<"max is: "<<max;
    return 0;
}
*/

/* 
// Q - sum of 2d arrray
#include <iostream>
#include <limits.h>

using namespace std;

int main () {
    int arr[4][4];
    
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cin>>arr[i][j];
    }    
    }

    int sum = 0;

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
           sum+=arr[i][j];
    }    
    }
    cout<<"sum is: "<<sum;
    return 0;
}
*/

/* 
// add  matrix
#include <iostream>
using namespace std;

int main () {
    int arr1[3][3] = {1,2,3,6,4,8,5,6,8};
    int arr2[3][3] = {1,4,4,6,4,6,7,6,8};

    int res[3][3];
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
        {
            res[i][j] = arr1[i][j] + arr2[i][j];
        }
        
    }

    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0; 
}
*/

/* 
// transpose of matrix
#include <iostream>
using namespace std;

int main () {
    int arr[2][3] ={1,2,3,4,5,6};

    int transpose[3][2];

    for(int i = 0 ; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            transpose[j][i] = arr[i][j];
        }
    } 

    for(int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++)
        {
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0; 
}
*/

/* 
// transpose only print without a new array
#include <iostream>
using namespace std;

int main () {
    int arr[2][3] ={1,2,3,4,5,6};


    for(int i = 0 ; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    } 

    return 0; 
}
*/

// 2d vector
/* 
#include <iostream>
#include <vector>

using namespace std;

int main () {
    vector<vector<int>> v = {{1, 2, 3 },{4, 5, 6}}; 

    int r = v.size(); // row size
    int c = v[0].size(); // column size

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout<<v[i][j]<< " ";
        }
        cout<<endl;
    }
    return 0;
}
*/

/* 
 // transpose 2d vector 
#include <iostream>
#include <vector>

using namespace std;

int main () {
// way to create 2d vector    // vector <vector<int>> v(row, vector <int>(column));
   vector <vector<int>> v = {{1,2,3},{2,5,6}};

   vector <vector<int>> transpose(3, vector <int>(2));

    int r = v.size(); // no of rows
    int c = v[0].size(); // no of coulumns

    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++) {
            cout<<v[j][i]<<" ";
        }
        cout<<endl;
    }

    return 0; 
}

*/

/* 
// another vector me copy transpose
#include <iostream>
#include <vector>

using namespace std;

int main () {
   vector <vector<int>> v = {{1,2,3},{2,5,6}};

   vector <vector<int>> transpose(3, vector <int>(2));

    int r = v.size(); // no of rows
    int c = v[0].size(); // no of coulumns

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
        transpose[j][i]  = v[i][j];  
        }
    }

    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++) {
            cout<<transpose[i][j]<<" ";  
        }
        cout<<endl;
    }

    return 0; 
}
*/