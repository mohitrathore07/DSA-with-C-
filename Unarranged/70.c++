/*                                                               15/12/2024                                                                     */

/* 
// 2d vectors
#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector <int> v1;
    vector <int> v2;
    vector <int> v3;

    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    v2.push_back(4);
    v2.push_back(5);

    v3.push_back(6);
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);
    v3.push_back(10);

    // 2-D vector
    vector < vector<int>> v;
    
    // v.push_back(2);  we'cant push it into like this we can only push vector of int type

    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    cout<<v[1][1]<<endl; // valid

    cout<<v[1][3]<<endl; // invalid bcz index ke beyond nhi jana hai (bcz 1 3  not exists)

    return 0; 
}
*/

// passing 2d array to 2d array

/* 
#include <iostream>
#include <vector>
using namespace std;

void change2dVector(vector < vector<int>> &v) { // &v otherwise it will create a new 2d vector
        v[0][1] = 100;
}

void length(vector <vector <int>> &v) {
    cout<<v.size();
}

int main () {
    vector <int> v1;
    vector <int> v2;
    vector <int> v3;

    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    v2.push_back(4);
    v2.push_back(5);

    v3.push_back(6);
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);
    v3.push_back(10);

    
    vector < vector<int>> v;
    
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    cout<<v[0][1]<<endl;

    change2dVector(v); 

    cout<<v[0][1]<<endl; // change its value to 100

    length(v); // size calculate

    return 0; 
}
*/


/* 
// important

#include <iostream>
#include <vector>

using namespace std;

int main () {
    // vector <int> v(5 , 2); // it means size 5 and all elements will be field by 2
    // cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<" "<<v[3]<<" "<<v[4]<<endl;

    // vector < vector <int>> v(3 , vector <int> (4)); // 3 - size it means 3 vectors aa skte hai // next means each vector ka size 4 hoga

    vector < vector <int>> v(3 , vector <int> (4,2)); // 3 - size it means 3 vectors aa skte hai // next means each vector ka size 4 hoga and each element 2 hoga

    // cout<<v.size()<<" ";

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++ ) {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"row size"<<v.size()<<endl; // row wise size print

    cout<<"column size"<<v[0].size()<<endl; // column wise size print
    return 0;
}
*/

/*  size of columns 
#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector <int> v1;
    vector <int> v2;
    vector <int> v3;

    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    v2.push_back(4);
    v2.push_back(5);

    v3.push_back(6);
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);
    v3.push_back(10);

    
    vector < vector<int>> v;
    
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    cout<<v[0].size()<<endl; // each column ka size diff hai  //3
    cout<<v[1].size()<<endl; // 2
    cout<<v[2].size()<<endl; // 5

    return 0; 
}
*/


// pascles tringle - leetcode 118

/* 
1 
1 1
1 2 1
1 3 3 1
1 4 6 4 1

#include <iostream>
#include <vector> 
using namespace std;

int main () {
    int m = 5;
    vector < vector <int>>v; 
    for(int i = 1; i <= m;i++) {
        vector<int> a(i);
        v.push_back(a); // diff size ke vectors insert ho jayege
    }

    // generate pascle's triangle

    for(int i = 0; i < m;i++) {
        for(int j = 0; j <= i;j++) {
            if(j == 0  || j == i) {
                v[i][j] = 1;
            }
            else {
                v[i][j] = v[i-1][j] + v[i-1][j-1];
            }
        }
    }

    for(int i = 0; i < m;i++) {
        for(int j = 0; j <= i;j++) {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/

/* 

// leetcode score-after-flipping matrix 861
#include <iostream>
#include <vector>
using namespace std;

int main ( ) {
    vector <int> v1;
    vector <int> v2;
    vector <int> v3;

    v1.push_back(0);
    v1.push_back(0);
    v1.push_back(1);
    v1.push_back(1);

    v2.push_back(1);
    v2.push_back(0);
    v2.push_back(1);
    v2.push_back(0);

    v3.push_back(1);
    v3.push_back(1);
    v3.push_back(0);
    v3.push_back(0);

    vector <vector <int>> v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    int rows = v.size();
    int cols = v[0].size();

    for(int i = 0 ; i < rows; i++) {
        if(v[i][0] ) {
            for(int j = 0; j < cols; j++) {
                if(v[i][j] == 0 ) {
                    v[i][j] = 1;
                }
                else {
                    v[i][j] = 0;
                }
            }
        }
    } 

    // cols wise flipping

    for(int j = 0; j < cols; j++) {
        int numofzero = 0;
        int numofone = 0;
        for(int i = 0; i < rows;i++) {
            if(v[i][j] == 0) numofzero++;
            else numofone++;
        }
        
        if(numofzero > numofone) {
            for(int i = 0; i < rows; i++) {
                    if(v[i][j] == 0 ) {
                        v[i][j] = 1;
                    }
                    else  {
                        v[i][j] = 0;
                    }
            }
        }
        }
        // binary sum calculate
        int sum =  0;
        for(int i = 0; i < rows; i++) {
            int x = 1;
            for(int j = cols - 1; j >= 0; j--) {
                sum += v[i][j] * x;
                x *= 2;
            }
        }
    
    cout<<"Sum is: "<<sum;
    return 0;
}
*/


// search a 2d vector 74
#include <iostream>
#include <vector> 
using namespace std;

int main () {
    vector <int> v1;
    vector <int> v2;
    vector <int> v3;

    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(7);

    v2.push_back(10);
    v2.push_back(11);
    v2.push_back(16);
    v2.push_back(20);

    v3.push_back(23);
    v3.push_back(30);
    v3.push_back(34);
    v3.push_back(60);

    vector <vector <int>> v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    int rows = v.size();
    int cols = v[0].size();

    int i = 0;
    int j = cols - 1;
    int target = 3;
        while(i <= rows - 1 && j >= 0 ) {
            if(v[i][j] == target)  {
                cout<<"founded";
                break;
            }
            else if(v[i][j] > target) j--;
            else {
                i++;
            } 
        }
        cout<<"not founded";
}