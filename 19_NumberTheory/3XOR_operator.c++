/*
#include <iostream>
using namespace std;

int main() {
    // swapping of two numbers using xor
   int a = 4,  b = 9;
   a = a ^ b;
   b = b ^ a;
   a = a ^ b;
   
   cout<<a<<" "<<b<<endl;
    return 0;
}
*/

// given an array of integers. All integers are present in even count except one. Find out that one integer which has odd count in O(n) time complexity and O(1) spacee ;
// N < 10 ^ 5 and a[i] < 10^5

// arr[] = { 2,4,6,7,7,4,2,2,2};  // 2 even times present h 4 bhi 7 bhi except 6 we have to find in in O(n) time

#include <iostream>
using namespace std;

int main() {
    int arr[] = { 2,4,6,7,7,4,2,2,2}; 
    int ans = 0;
    for(int i = 0; i < 9; i++) {
        ans ^= arr[i];
    }
    cout<<"the num is: "<<ans;
    return 0;
}