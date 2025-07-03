/*                                                           13\07\2024                                                                         */

// loops 

#include <iostream>
using namespace std;

int main () {
    
    for (int i = 0 ; i <= 4 ; i++) {
        cout<<"Good Morning"<<endl;
    }

}


/*                                                             14/07/2024                                                                        */

// for loop 

// print hello world n times take n as input from the user

/*
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>> n;

    for (int i=1 ; i <= n ; i++) {
        cout<<"Hello World\n";
    }
    return 0; 
}
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>> n;
    int i;
    for (i=1 ; i <= n ; i++) {
        cout<<"Hello World\n";
    }
    cout << i; // if n = 4 i = 5
    return 0; 
}