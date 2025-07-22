/*
smallest and  largest element 

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,4,2,9,55,24,-24,-210,6,4,210};
    int size = sizeof(arr) / sizeof(arr[0]);

    int minimum = INT8_MAX , maximum = INT8_MIN;
    for (int i = 0; i < size; i++)
    {
        if(minimum > arr[i]) minimum = arr[i];
        if(maximum < arr[i]) maximum = arr[i];
    }
    
    cout<<"minimum is : "<<minimum<<" and maximmum is: "<<maximum;
    return 0;
}
*/

/*

// smallest and  largest element  with min and max function
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,4,2,9,55,24,-24,-210,6,4,210};
    int size = sizeof(arr) / sizeof(arr[0]);

    int minimum = INT8_MAX , maximum = INT8_MIN;
    for (int i = 0; i < size; i++)
    {
        minimum = min(minimum , arr[i]);
        maximum = max(maximum , arr[i]);
    }
    
    cout<<"minimum is : "<<minimum<<" and maximmum is: "<<maximum;
    return 0;
}
*/


// pass by referrencce
/*
not possible
#include <iostream>
using namespace std;

void changeArr(int arr[]) {
    int size = sizeof(arr) / sizeof(arr[0]); // not error but it is not possible to calculate the size here
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2*arr[i];
    }
    
}

int main() {
    int arr[] = {1,2,3,4};

    changeArr(arr);
    
    for (int i = 0; i < 4; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
*/

/*
right way to pass a array to a function

#include <iostream>
using namespace std;

void changeArr(int arr[], int n) {
    
    for (int i = 0; i < n; i++)
    {
        arr[i] = 2*arr[i];
    }
    
}

int main() {
    int arr[] = {1,2,3,4};
    int size = sizeof(arr) / sizeof(arr[0]); 
    changeArr(arr, size);
    
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
*/

/*

// linear search
#include <iostream>
using namespace std;


int targetFind(int arr[] ,int size ,int target) {
    
for(int i = 0; i < size; i++) {
    if(target == arr[i]) return i;
}
return -1;
} 
int main() {
    int arr[] = {4,2,7,8,11,2,5};
    int target = -2;
    int size = sizeof(arr) / sizeof(arr[0]); 
    
   cout<<targetFind(arr , size , target);
   return 0;
}
*/

/* 

// reverse an array - without creating a new array
#include <iostream>
using namespace std;

int main() {
    int arr[] = {4,2,7,8,1,2,5,15};

    int size = sizeof(arr) / sizeof(arr[0]); 

    int i = 0 , j = size-1;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/

/* 

// reverse an array - without creating a new array (function method)

#include <iostream>
using namespace std;

void reversingAnArray(int arr[] , int size) {
    
    int i = 0 , j = size-1;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main() {
    int arr[] = {4,2,7,8,1,2,5,15};
    int size = sizeof(arr) / sizeof(arr[0]); 
    
    reversingAnArray(arr , size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/

/*

// home work #1 product or sum using user choice
#include <iostream>
using namespace std;

int productofarray(int arr[] , int size) {
    int product = 1;
    
    for (int i = 0; i < size; i++)
    {
        product = arr[i] * product;
    }
    return product;
}

int sumofarray(int arr[] , int size) {
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = arr[i] + sum;
    }
    return sum;
}

int main() {
    int arr[] = {1,2,3,4};
    int size = sizeof(arr) / sizeof(arr[0]); 
    
    int choice;
    cout<<"write 1 for product and 2 for sum: ";
    cin>>choice;
    
    if(choice == 1) {
        cout<<productofarray(arr, size);
    }
    
    else if(choice == 2) {
        cout<<sumofarray(arr, size);
    }
    else {
        cout<<"incorrect choice";
    }
    return 0;
}
*/


/*
// homework #2 - min and max swap - INT8_MIN and INT8_MAX only -127 to 127 tk ki value carry kr skte h problem aa skti h 

#include <iostream>
using namespace std;

void minmaxswap (int arr[] , int size) {
    if(size==1) {
        cout<<"Only one element → nothing to swap.";
        return;
    }
    int minele = INT8_MAX , maxele = INT8_MIN;
    int mineleidx = -1 , maxeleidx = -1;
    
    for(int i = 0; i < size; i++) {
        if(minele > arr[i]) {
            minele = arr[i];
            mineleidx = i;
        }
        if(maxele < arr[i]) {
            maxele = arr[i];
            maxeleidx = i;
        }
    }
    swap(arr[mineleidx] , arr[maxeleidx]);
}

int main() {
    int arr[] = {1000, 2000, 3000, 4000, 5000};
    int size = sizeof(arr) / sizeof(arr[0]); 
    
    minmaxswap(arr, size);
    
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
*/

/*
// homework #2 - min and max swap - fixed version
#include <iostream>
#include <climits>
using namespace std;

void minmaxswap (int arr[] , int size) {
    if(size==1) {
        cout<<"Only one element → nothing to swap.";
        return;
    }
    int minele = INT_MAX , maxele = INT_MIN;
    int mineleidx = -1 , maxeleidx = -1;
    
    for(int i = 0; i < size; i++) {
        if(minele > arr[i]) {
            minele = arr[i];
            mineleidx = i;
        }
        if(maxele < arr[i]) {
            maxele = arr[i];
            maxeleidx = i;
        }
    }
    swap(arr[mineleidx] , arr[maxeleidx]);
}

int main() {
    int arr[] = {1000, 2000, 3000, 4000, 5000};
    int size = sizeof(arr) / sizeof(arr[0]); 
    
    minmaxswap(arr, size);
    
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

*/

/* 

// #h3 print all unique values
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,5,2,1,7,9,2};
    int size = sizeof(arr) / sizeof(arr[0]); 

    for (int i = 0; i < size; i++)
    {
        bool flag = true;
        for (int j = 0; j < size; j++)
        {
            if(i == j) continue;
            if(arr[i] == arr[j]) {
                flag = false;
                break;
            }
        }   
        if(flag) cout<<arr[i]<<endl;
    }
    
    return 0;
}
*/
 