/*                                                            15/09/2024                                                                  */

/*
Q - 1  
#include <iostream>
using namespace std;

int square(int num) {
    return num * num;
}

int main () {
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++) {
        cout<<square(i)<<" ";
    }
    return 0;
}
*/

/*
Q - 2
#include <iostream>
using namespace std;

int area(int radius) {
    return radius * radius * 3.14;
}

int main () {
    int n;
    cin>>n;
    cout<<"Radius is: "<<area(n);

    return 0;
}
*/

/*

// Q - 3

#include <iostream>
using namespace std;

void oddnum(int n, int m) {
    if(n > m){
        oddnum(m , n);
        return;
    }
    for(int i = n; i <= m; i++) {
        if(i % 2 != 0 ){
            cout<<i<<" ";
        }
    }
}

int main () {
    int n, m;
    cin>>n>>m;
    oddnum(n , m);
    return 0;
}
*/

#include <iostream>
using namespace std;

int squares(int n) {
    return n*n;
}

int numberofdigits(int n) {
    int count = 0;
    while(n != 0) {
        n/=10;
        count++;
    }
    return count;
}

int main () {
    int n;
    cin>>n;
    cout<<"number of digits in "<<n<<" is : "<<numberofdigits(n)<<endl;
    cout<<"square of num "<<n<<" is : "<<squares(n)<<endl;
    return 0;
}


