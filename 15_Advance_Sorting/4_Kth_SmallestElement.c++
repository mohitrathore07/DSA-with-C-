
// kth largest element  - merge sort  T.C - O(n logn)  but Quick Select O(n) - avg case  but in worst O(n^2)


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

int kthsmallest(int arr[] , int si ,int ei,int k ){
   int pi = partition(arr, si , ei);
   if(pi+1 == k) return arr[pi];
   else if(pi+1 < k) return kthsmallest(arr,pi+1, ei, k); 
   else  return kthsmallest(arr,si, pi-1, k);
}

int main() {
    int arr[] = {5,1,8,2,7,6,3,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k = 4;
    int ans = kthsmallest(arr, 0 , n-1, k);
    cout<<ans;
    return 0;
}