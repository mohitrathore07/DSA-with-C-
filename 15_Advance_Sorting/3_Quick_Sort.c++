
/*

Quick Sort

#include <iostream>
#include <vector>
using namespace std;

int partition (int arr[] , int si ,int ei) {
    int pivot = arr[si];
    int count = 0;

    for (int i = si+1; i <= ei; i++)
    {
        if(arr[i] <= pivot) count++;
    }
    int pivotIdx = count+si;
    swap(arr[si] , arr[pivotIdx]);
    int i = si;
    int j = ei;
    while (i < pivotIdx && j > pivotIdx)
    {
        if(arr[i] <= pivot) i++;
        if(arr[j] > pivot) j--;
        else if (arr[i] > pivot && arr[j] <= pivot) {
            swap(arr[i] , arr[j]);
            i++;
            j--;
        } 
    }
    return pivotIdx;   
}

void quickSort(int arr[] , int si ,int ei){
    if(si>=ei) return;  // base case // why >= bcz 0 arrar pr bhi call lag jati h sometimes
     
    int pi = partition(arr , si , ei); // partition and pivot index

    quickSort(arr, si , pi-1);
    quickSort(arr, pi+1 , ei);
}

int main() {
    int arr[] = {5,1,8,2,7,6,3,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quickSort(arr, 0 , n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
    */


// Quick sort - randomized pivot element

#include <iostream>
#include <vector>
using namespace std;

int partition (int arr[] , int si ,int ei) {
    int pivot = arr[(si+ei)/2];
    int count = 0;

    for (int i = si; i <= ei; i++)
    {
        if(i == (si+ei)/2) continue;
        if(arr[i] <= pivot) count++;
    }
    int pivotIdx = count+si;
    swap(arr[(si+ei)/2] , arr[pivotIdx]);
    int i = si;
    int j = ei;
    while (i < pivotIdx && j > pivotIdx)
    {
        if(arr[i] <= pivot) i++;
        if(arr[j] > pivot) j--;
        else if (arr[i] > pivot && arr[j] <= pivot) {
            swap(arr[i] , arr[j]);
            i++;
            j--;
        } 
    }
    return pivotIdx;   
}

void quickSort(int arr[] , int si ,int ei){
    if(si>=ei) return;  // base case // why >= bcz 0 arrar pr bhi call lag jati h sometimes
     
    int pi = partition(arr , si , ei); // partition and pivot index

    quickSort(arr, si , pi-1);
    quickSort(arr, pi+1 , ei);
}

int main() {
    int arr[] = {5,1,8,2,7,6,3,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quickSort(arr, 0 , n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}