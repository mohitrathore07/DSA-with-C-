/*                                                                                 15/01/2024                                                                                         */

/* 
#include<iostream>
using namespace std;

void findnum(int arr[], int size, int target, int index) {
    if (index==size) {
        return;
    }
    if (arr[index] == target) {
        cout<<"element at: " << index << endl;
        return findnum(arr, size, target, index + 1);
    }
    return findnum(arr, size, target, index + 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]); 
    int target = 4;

    findnum(arr, size, target, 0);
    return 0;
}
*/


// print zig zag

#include<iostream>
using namespace std;

void printzigzag(int n ) {
    if(n == 0) return;
    cout<<n;
    printzigzag(n-1);
    cout<<n;
    printzigzag(n-1);
    cout<<n;
}

int main() {
    printzigzag(3);
    return 0;
}
