/*                                                              19/10/2024                                                                    */


// drawback sorted result nhi milega  - solution = phle dono vectors ko sort then send to function 
#include <iostream>
#include <vector>
using namespace std;

vector <int> merge (vector <int>& arr1 ,vector <int>& arr2 ) {
    int n = arr1.size();
    int m = arr2.size();
    vector <int> res(n+m);

    int j = 0;
    int i = 0;
    int k = 0;

    while(i < n && j < m) {
        if(arr1[i] < arr2[j]) {
            res[k] = arr1[i];
            i++;
        }
        else {
            res[k] = arr2[j];
            j++;
        }
        k++;
    }

    if(i == n) {
        while(j < m ) {
            res[k] = arr2[j];
            j++;
            k++;
        }
    }

    if(j == m) {
        while(i < n) {
            res[k] = arr1[i];
            i++;
            k++;
        }
    }
    return res;
}

int main () {

    vector <int> arr1;
    arr1.push_back(1);
    arr1.push_back(4);
    arr1.push_back(5);
    arr1.push_back(8);
    // arr1.push_back(1);
    
    vector <int> arr2;
    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(6);
    arr2.push_back(7);
    arr2.push_back(10);
    arr2.push_back(12);
    // arr2.push_back(2);

    vector <int> result = merge( arr1, arr2);
    
    for(int i = 0; i < result.size();i++) {
        cout<<result[i]<<" ";
    }
    return 0;
}