/*
// array ki vector copy
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[ ] = { 1,4,5,8};
    int n1 = sizeof(arr) /  sizeof(arr[0]);
    vector<int> a (arr, arr+n1);

    for(int i: a) {
        cout<<i<<" ";
    }
   return 0;
}
*/

/*
// merge two sorted array into a array
#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &a , vector<int> &b ,vector<int> &res) {
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < a.size() && j < b.size())
    {
        if(a[i] < b[j]) res[k++] = a[i++];
        else res[k++] = b[j++];
    }
    if(i==a.size()) {
        while (j < b.size()) 
        {
            res[k++] = b[j++];
        }
    }
    if(j==b.size()) {
        while (i < a.size()) 
        {
            res[k++] = a[i++];
        }
    }
}

void printVec(vector<int> &res) {
    for(int i: res) {
        cout<<i<<" ";
    }
}

int main() {
    int arr[ ] = { 1,4,5,8};
    int n1 = sizeof(arr)/sizeof(arr[0]);

    int brr[] = { 2,3 ,6,7,10,12};
    int n2 = sizeof(brr)/sizeof(brr[0]);

    vector<int> a(arr, arr+n1);
    vector<int> b(brr, brr+n2);
    vector<int> res(n1+n2);

    merge(a , b , res);
    printVec(res);
   return 0;
}
   
*/

/*
// Merge Sort
#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& a , vector<int>& b ,vector<int>& res) {
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < a.size() && j < b.size())
    {
        if(a[i] <= b[j]) res[k++] = a[i++];
        else res[k++] = b[j++];
    }
    if(i==a.size()) {
        while (j < b.size()) 
        {
            res[k++] = b[j++];
        }
    }
    if(j==b.size()) {
        while (i < a.size()) 
        {
            res[k++] = a[i++];
        }
    }
}


void printVec(vector<int>& res) {
    for(int i: res) {
        cout<<i<<" ";
    }
}

void mergeSort(vector<int>& v) {
    int n = v.size();
    if(n==1) return;

    int n1 = n/2 , n2 = n - n/2; // why n-n/2 bcz odd size hua so equally distribute ho jayega
    vector<int>a(n1) , b(n2); //  2 vectors a b 

    // copy pasting

    for(int i = 0 ; i < n1; i++) 
        a[i] = v[i];
        
    for(int i = 0 ; i < n2; i++) 
        b[i] = v[i+n1]; // bcz waha se fill jaha tk last me fill ho gya h uske aage se bcz we re merging  arrays

    mergeSort(a);
    mergeSort(b);

    // merge
    merge(a,b,v);
}
int main() {
    int arr[] = {5,1,3,0,4,65,6};
    int n1 = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr , arr+n1);

    mergeSort(v);
    printVec(v);
   return 0;
}

// Merge Sort - improved space complexity - clear function
#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& a , vector<int>& b ,vector<int>& res) {
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < a.size() && j < b.size())
    {
        if(a[i] <= b[j]) res[k++] = a[i++];
        else res[k++] = b[j++];
    }
    if(i==a.size()) {
        while (j < b.size()) 
        {
            res[k++] = b[j++];
        }
    }
    if(j==b.size()) {
        while (i < a.size()) 
        {
            res[k++] = a[i++];
        }
    }
}


void printVec(vector<int>& res) {
    for(int i: res) {
        cout<<i<<" ";
    }
}

void mergeSort(vector<int>& v) {
    int n = v.size();
    if(n==1) return;

    int n1 = n/2 , n2 = n - n/2; // why n-n/2 bcz odd size hua so equally distribute ho jayega
    vector<int>a(n1) , b(n2); //  2 vectors a b 

    // copy pasting

    for(int i = 0 ; i < n1; i++) 
        a[i] = v[i];
        
    for(int i = 0 ; i < n2; i++) 
        b[i] = v[i+n1]; // bcz waha se fill jaha tk last me fill ho gya h uske aage se bcz we re merging  arrays

    mergeSort(a);
    mergeSort(b);

    // merge
    merge(a,b,v);
    a.clear();
    b.clear();
}
int main() {
    int arr[] = {5,1,3,0,4,65,6};
    int n1 = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr , arr+n1);

    mergeSort(v);
    printVec(v);
   return 0;
}

*/


#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& a , vector<int>& b ,vector<int>& res) {
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < a.size() && j < b.size())
    {
        if(a[i] >= b[j]) res[k++] = a[i++];
        else res[k++] = b[j++];
    }
    if(i==a.size()) {
        while (j < b.size()) 
        {
            res[k++] = b[j++];
        }
    }
    if(j==b.size()) {
        while (i < a.size()) 
        {
            res[k++] = a[i++];
        }
    }
}


void printVec(vector<int>& res) {
    for(int i: res) {
        cout<<i<<" ";
    }
}

void mergeSort(vector<int>& v) {
    int n = v.size();
    if(n==1) return;

    int n1 = n/2 , n2 = n - n/2; // why n-n/2 bcz odd size hua so equally distribute ho jayega
    vector<int>a(n1) , b(n2); //  2 vectors a b 

    // copy pasting

    for(int i = 0 ; i < n1; i++) 
        a[i] = v[i];
        
    for(int i = 0 ; i < n2; i++) 
        b[i] = v[i+n1]; // bcz waha se fill jaha tk last me fill ho gya h uske aage se bcz we re merging  arrays

    mergeSort(a);
    mergeSort(b);

    // merge
    merge(a,b,v);
    a.clear();
    b.clear();
}
int main() {
    int arr[] = {5,1,3,0,4,65,6};
    int n1 = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr , arr+n1);

    mergeSort(v);
    printVec(v);
   return 0;
}
