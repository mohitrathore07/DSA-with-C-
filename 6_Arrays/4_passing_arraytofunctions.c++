/*                                                             24/09/2024                                                                     */

// Passing array to functions

/* 
#include <iostream>
using namespace std;

void display(int arr[]) {
    for (int i = 0; i <= 4; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

void change(int b[]) {
    b[0] = 500;
}

int main () {
    int arr[5] = {4,7,5,5,2}; // it means real array send hota h na ki copied variables jese
    display(arr);
    change(arr);
    display(arr);
    return 0;
}
*/


/* 
// size - error
#include <iostream>
using namespace std;

void display(int arr[]) {
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i <= 4; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"size is: "<<size;
    cout<<endl;
    return;
}

void change(int b[]) {
    b[0] = 500;
}

int main () {
    int arr[5] = {4,7,5,5,2}; // it means real array send hota h na ki copied variables jese
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"size: "<<size; 
    display(arr);
    change(arr);
    display(arr);
    return 0;
}
*/


// solution - size pass krte hai function me 
/* 
#include <iostream>
using namespace std;

void display(int arr[], int size) {
    for (int i = 0; i <= 4; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"size is: "<<size;
    cout<<endl;
    return;
}

void change(int b[]) {
    b[0] = 500;
}

int main () {
    int arr[5] = {4,7,5,5,2}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    display(arr, size);
    change(arr);
    display(arr, size);
    return 0;
}
*/


/* 
// array & pointers
#include <iostream>
using namespace std;

int main () {
    int arr[] = {1,5,7,89,5,4};
   
    /* 
    valid
    int* ptr = arr; // array ke 1st element ka address usme save hota hai 
    cout<<ptr; 

    cout<<ptr[0]; // 1 
    

    int* ptr = arr; // 1st element k address de dete hai to iske pass uske pure elements ka access ho jata hai 

    ptr[0] = 444;

    for(int i = 0; i <= 5; i++) {
        cout<<ptr[i]<<" ";
    }
    return 0;
}

*/

 /* 
// since hm uska address bhej rhe hai so use pointer me bhi le skte hai
#include <iostream>
using namespace std;

void display(int* ptr , int size ) { // int ptr[] is also a pointer bcz it is taking the address of the first element
    for(int i = 0; i <= size - 1; i++) {
        cout<<ptr[i]<<" ";
    }
}

int main () {
    int arr[] = {5,5,8,2,4,8,9,6,5,6,3,2};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<size<<endl;

    display(arr, size);
    return 0;
}

*/

/* 

#include <iostream>
using namespace std;

int main () {
    int arr[] = {5,5,6,5,6,3,2};
    int size = sizeof(arr) / sizeof(arr[0]);    
    int *ptr = arr;
/* 
    for(int i = 0; i <= size - 1; i++) {
        cout<<ptr[i]<<" ";
    }

    cout<<endl;

    *ptr = 87; // ptr[0] = 87

    for(int i = 0; i <= size - 1; i++) {
        cout<<ptr[i]<<" ";
    }

    for(int i = 0; i <= size - 1; i++) {
        cout<<*ptr<<" ";
        ptr++; // next address pe since contiguous memory hai so next address means ptr[1] ka address
    }
    return 0;
}
*/


/*
#include <iostream>
using namespace std;

int main () {
    int arr[] = {5,5,6,5,6,3,2};
    int size = sizeof(arr) / sizeof(arr[0]);    
    int *ptr = arr;
 
    for(int i = 0; i <= size - 1; i++) {
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr = arr;

    *ptr = 8; // ptr[0] = 8
    cout<<" = "<<*ptr;

    ptr++; // ptr[1]
    cout<<" = "<<*ptr;

    *ptr = 9; // ptr[1] = 9
    cout<<" = "<<*ptr;

    ptr--; // ptr[0]
    cout<<" = "<<*ptr;

    return 0;
}


*/



// starting vectors

