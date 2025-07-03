/*                                                               09/12/2024                                                                     */

// 2-D array

/* 
// size will be same n-1 elements will be stored 
#include <iostream>
using namespace std;

int main () {
    int arr[2][2];
    arr[0][0] = 5;
    arr[0][1] = 1; 
    arr[1][0] = 7; 
    arr[1][1] = 4; 

    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
    
    return 0;
}
*/

/* 
// 2nd way of initialization
#include <iostream>
using namespace std;

int main () {
    int arr[3][3] = {{1,2,3}, {4 , 5 , 6}, { 7 , 8 , 9}};

    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
    
    return 0;
}
*/

/* 
// another way of initialization
#include <iostream>
using namespace std;

int main () {
    int arr[3][3] = {1, 2 , 3, 4 , 5 , 6,  7 , 8 , 9};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
    
    return 0;
}
*/


// valid initializations
#include <iostream>
using namespace std;

int main () {
    // int arr[4][2] = {{14, 12} , {74 , 58}, {48 , 54} , { 65 , 54}};

    // int arr[4][2] = {14, 12 , 74 , 58, 48 , 5 ,  65 , 54};

    // int arr[2][3] = {14, 12 , 74 , 5 ,  65 , 54};

    // int arr[][2] = {1,2,3,4,5,6,7,8,9};

    // above all are correct


    // int arr[2][] = { 1,4,5,50}; // wrong way of initialization
    return 0;
}