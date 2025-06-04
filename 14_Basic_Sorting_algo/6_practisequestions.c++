/* 
// Q - 4 descending order using bubble sort
#include <iostream>
using namespace std;

int main() {
    int arr[] = { 1,6,2,5,4,3};
    int n = 6;
    for (int i = 0; i < n-1; i++)
    {
        bool flag = false; 
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j] < arr[j+1]) {
                swap(arr[j] , arr[j+1]);
                flag = true;
            }
        }
        if(flag == false) break;
    }
    for(int i : arr) {
        cout<<i<<" ";
    }
    return 0;
}  
*/

/*
#include <iostream>
using namespace std;

int main() {
    int arr[] = { 1,2,3,4,6,5};
    int n = 6;

    int count = 0;
    bool flag = true; // sorted
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i] > arr[i+1]) {
            flag = false;
            swap(arr[i] , arr[i+1]);
            count++;
        }
    }

    if(flag == true) cout<<"Array is already sorted";

    else {
        if(count == 1) {
            cout<<"elements are 1 position away"<<endl;
        }
        else {
            cout<<"elements are need to be moved more than 1";
        }
    }

    for(int i : arr) {
        cout<<i<<" ";
    }
    return 0;
}  
*/

/* 
// practise 2 q 3 - sort krke kth index return 

#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[] = { 10, 7, 4, 3, 20, 15};

    int k = 3;

    int min = INT_MAX;
    int minidx = -1;
    
    cout<<minidx<<" ";
    return 0;
}
*/

/* 
//Given an array of N elements, where each element is at most k away from its targeted position, devise algorithm that sorts on O(N log k)
#include <iostream>
using namespace std;

int main() {
    int arr[] = {2,6,3,12,56,8};
    int size = 6;
    int k=3;
    int i , j , key;
    for (i = 1; i < size; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= max(0 , i - k) && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    
    for(int a: arr) {
        cout<<a<<" ";
    }
    return 0;
}
    */


#include <iostream>
using namespace std;
 
int main() {
    char arr[][20] = {"physicswallah" , "quiz", "practise" , "pwskills" , "coding"};

    int n = sizeof(arr) / sizeof(arr[0]);

    
    return 0;
}