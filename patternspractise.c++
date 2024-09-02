/*
1
0 1
1 0 1
0 1 0 1

// another method
logic - when i & j both even or both odd so 1 otherwise 0

#include <iostream>
using namespace std;

int main () {
    int n;
    cout<<"Enter no of rows: ";
    cin>>n;

    for(int i = 1; i <= n; i++) {
     for(int j = 1; j <= i; j++) {
     if( (i+j) % 2 == 0 ) cout<<1;
     else cout<<0;
    }
    cout<<endl;
    }
    return 0;
}
*/

/*
****
***
**
*
logic n - 1 - i

#include <iostream>
using namespace std;

int main () {
    int n;
    cout<<"Enter no of rows: ";
    cin>>n;

    for(int i = 1; i <= n; i++) {
     for(int j = 1; j <= n + 1 - i; j++) {
        cout<<"*";
    }
    cout<<endl;
    }
    return 0;
}


*/

/*
      *
    * *
  * * *
* * * *

logic - 2 loops in 1 loop one for spaces and 2nd for *
// spaces till j <= n-i
// stars till k <= i

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter no of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // stars
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

*/