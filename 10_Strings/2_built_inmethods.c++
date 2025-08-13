/*                                                              31-12-2024                                                             */

/* 
// counting vowels in a string

#include <iostream>
#include <string>
using namespace std;

int main () {
    string str = "Mohit";
    int count = 0;
    int i = 0;
    while(str[i] != '\0') {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            count++;
        }
        i++;
    }
    cout<<count<<" ";
    return 0;
}
*/

/* 
// updation  of sigle character in a string
#include <iostream>
#include <string>
using namespace std;

int main () {
    string str = "Rohit";
    str[0] = 'M'; // updation of a single character in a string 

    cout<<str<<" ";
    return 0;
}
*/


/* 
// input a string of length n and count all the vowels in a given string 
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin>>n;
    char str[n];

    for(int i = 0; i < n; i++) {
        cin>>str[n];
    }
    return 0;
}
*/

/* 
// input a string of size n and update all the even positions in the string to character 'a' Consider 0-based indexing

#include<iostream>
#include<string>
using namespace std;

int main () {
    string str = "aoeioritrowe";

    int i = 0;
    while(str[i] != '\0' ) {
        if(i % 2 == 0 ) {
            str[i] = 'm';
        }
        i++;
    }

    cout<<str;
    return 0;
}
*/

/* 
// built in functions in string 

#include <iostream>
#include <string>
using namespace std;

int main () {
    string str = "mohit rathore";
    cout<<str.size()<<endl; // null character include nhi

    cout<<str.length()<<endl; // same as size

    str.push_back('a'); // add a character from behind 
    str.push_back('b');
    str.push_back('c');

    cout<<str<<endl;

    // str.push_back('da'); // this is not possible only single character ko push kar skte hai 

    str.pop_back(); // last character remove
    str.pop_back();
    str.pop_back();
    cout<<str<<endl;

    // addition of string using '+' operator

    string s = "mohit ";
    string t = "rathore";

    s = s + t;
    cout<<s<<endl;

    // we can also do like this

    t = t  + " mohit";
    cout<<t<<endl;

    // also do this
    string k = "kash";
    k = "pra" + k;
    cout<<k<<endl;

    return 0;
}
*/

/* 
// string functions
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main () {
    string s = "abced";
    cout<<s<<endl;

    reverse(s.begin() , s.end()); // reverse a string
    cout<<s<<endl;
    return 0;
}
*/

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main () {
    string s = "abced";
    cout<<s<<endl;

    reverse(s.begin()+2 , s.end() - 1); // 2 se start last wala remains same
    cout<<s<<endl; 
    return 0;
}