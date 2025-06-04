/*                                                              17-12-2024                                                             */

/* 
// Q - 2
#include <iostream>
using namespace std;

int main () {
    int arr[2][3] = {{1,2,3}, {4,5,6}};

    int *ptr = (int *)arr; // 00 ko point
    cout<<*(ptr + 3); //  01 02 10 = 4
    return 0;
}
*/

/*
// Q - 3
#include <iostream>
using namespace std;

int main () {
    int arr[2][3] = {{1,2,3}, {4,5,6}};

    int *ptr1=(int *)arr; // 00 ko point
    int *ptr2=(int *)(arr+1); // 2nd row ka 1st element
    cout<<*(ptr1 + 2) - *(ptr2); // 0 + 2 = 3 - 4 = -1
    cout<<endl;
    cout<<*(ptr1 + 2)<<" "; // 3
    cout<<*(ptr2); // 4
    return 0;
}
 */

#include <iostream>
using namespace std;

int main () {
    int arr[2][3] = {{1,2,3},{4,5,6}};
    int sum = 0;

    int (*ptr)[3] = arr;
    cout<<(*ptr)[3];
    return 0;
}