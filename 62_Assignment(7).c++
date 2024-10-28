/*                                                                    25/10/2024                                                         */


/*
// Q - 1 count the number of elements strictly greater than x
#include <iostream>
using namespace std;

int main () {
    int x;
    cin>>x;
    int a[5];
    cout<<"Enter the number of elements of the array";
    for(int i = 0; i < 5; i++) {
        cin>>a[i];
    }
    int ans = 0;

    for(int i = 0; i < 5; i++) {
        if(a[i] > x) {
            ans++;
        }
    }
    cout<<"elements greater than "<<x<< " is: "<<ans;
    return 0;
}
*/

/* 
// Q - 2
#include <iostream>
using namespace std;

int main () {
    int a[8];
    cout<<"Enter the number of elements of the array";

    for(int i = 0; i < 8; i++) {
        cin>>a[i];
    }

    int max1  = a[0];
    int max2 = a[0];
    int max3 = a[0];

    for(int i = 1; i < 8; i++) {
        if(a[i] > max1) {
            max3 = max2;
            max2 = max1;
            max1 = a[i];
        }
        else if ( a[i] > max2) {
            max3 = max2;
            max2 = a[i];
        } 
        else if (a[i] > max3) {
            max3 = a[i];
        }
    }
    cout<<"largest 3 numbers are:  "<<max1<< " " << max2 <<" "<< max3;
    return 0;
}
*/


// Q - 3
/*
#include <iostream>
using namespace std;

int main () {
    int a[4];
    cout<<"Enter the number of elements of the array";

    for(int i = 0; i < 4; i++) {
        cin>>a[i];
    }

    for(int i = 0; i < 3; i++) {
        if(a[i] > a[i+1] ) {
        cout<<"no"<<endl;
        return 0;
        }
    }
    cout<<"yes"<<endl;
    return 0;
    return 0;
}
*/

/* 
#include <iostream>
using namespace std;

int main () {
    int a[6] = {1,7,5,2,6,4};
    int oddsum = 0, esum = 0;
    for(int i = 0; i < 6; i++) {
        if(i % 2 == 0 ) {
            esum += a[i];
        }
        else {
            oddsum += a[i];
        }
    }

    cout<<"sum of even index elements "<<esum<<" sum of odd index elements: "<<oddsum;
    return 0;
}
*/ 


// Q - 5 
/* 
#include <iostream>
using namespace std;

int main () {
    int a[6] = {1,7,5,2,6,4};
    for(int i = 0; i < 6; i++) {
        if(i % 2 == 0 ) a[i] += 10;
        else {
            a[i] = 2*a[i];
        }
        cout<<a[i]<<" ";
    }
    return 0;
}

*/

/* 

// unique element

#include <iostream>
using namespace std;

int main () {
    int a[6] = {1,1,5,5,5,4};
    for(int i = 0; i < 6; i++ ) {
        bool flag = true;
        for(int j = 0; j < 6; j++ ) {
        if(i != j && a[i] == a[j]) {
            flag = false;
            break;
        }
    }        
    if(flag == true) {
        cout<<a[i]<<" ";
       }
    }
    return 0;
}

*/



/* Assignment - 2  */
/*
// Q - 1
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int countTriples(vector <int>& arr, int x ) {
    int n = arr.size();
    int count = 0;

    sort(arr.begin() , arr.end());
    for(int i = 0; i < n - 2; i++) {
    int target = x - arr[i];   
    int left = i + 1;
    int right = n - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];
        if(sum == target) {
            count++;
            left++;
            right--;
        }
        else if (sum < target) {
            left++;
        }
        else {
            right++;
        }
    }
         
    }
    return count;
}

int main () {
    vector<int> arr = {1, 5, 3, 2, 4, 6};
    int x;
    cout<<"Enter x: ";
    cin>>x;
    int result = countTriples(arr , x);
    cout<<"no of triples are: "<<result;
    return 0;
} 

*/


// Q - 2 remaining 
/*

// Q - 3

#include <iostream>
#include <vector>
using namespace std;

void nonRepeatingelement (vector <int>& v) {
    for(int i = 0; i < v.size(); i++) {
    for(int j = 0; j < v.size(); j++) {
        if( i != j && v[i] == v [j]) 
        {
            break;
        }
        if(j == v.size()-1) {
            cout<<v[i]<<" ";
            return;
        }
    }    
    }
}

int main () {
    vector <int> v = {5,5,6,6,4,8,8,7,5};
    nonRepeatingelement(v);    
    return 0;
}
*/


/* 
#include <iostream>
#include <vector>
using namespace std;

void zerostoend (vector <int>& v) {
    int j = v.size() - 1;
    int i = 0;
    while ( i <= j) {
        if (v[i] == 0 && v[j] != 0) {
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
        else if(v[i] == 0 && v[j] == 0){
            j--;
        }
        else {
            i++;
        }
    } 
} 

void printelements(vector <int> & v) {
    for (int i = 0; i < v.size(); i++) {
        cout<<v[i]<<" ";
    }
}

int main () {
    vector <int> v = {5,5,0,4,0,8,7,5};
    zerostoend(v);    
    printelements(v);
    return 0;
}
*/