/*
#include <iostream>
#include <climits>
using namespace std;

int main() {    
    int arr[] = {7,1,2,5,8,4,9,3,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    int maxSum = INT_MIN;

    for (int i = 0; i <= size-k; i++)
    {
        int sum = 0;
        for (int j = i; j < i+k; j++)
        {
            sum += arr[j];
        }
        maxSum = max(maxSum, sum);
    }
    cout<<"max sum subarray of length "<<k<<" is "<<maxSum;
    return 0;
}
*/

/*
 Sliding window technique of above question
*/


#include <iostream>
#include <climits>
using namespace std;

int main() {    
    int arr[] = {7,1,2,5,8,4,9,3,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    int maxSum = INT_MIN;
    
    int prevSum = 0;
    for (int i = 0; i < k; i++)
    {
        prevSum += arr[i];
    }

    maxSum = prevSum;
    int i = 1 , j = k;
    int maxIdx = -1;
    while (j < size) 
    {
        prevSum = prevSum + arr[j] - arr[i];
        if(maxSum < prevSum) {
            maxSum=prevSum;
            maxIdx=i;
        }
        
        i++;
        j++;
    }
     
    cout<<"max sum subarray of length "<<k<<" is "<<maxSum<<" from index"<<maxIdx;
    return 0;
}