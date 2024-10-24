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