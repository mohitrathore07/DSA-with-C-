/*                                                              01-01-2025                                                             */

// input a string of even length and reverse the fisrt half of the string
/*
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main () {
    string str;
    getline(cin , str);
    int n = str.length();
    reverse(str.begin()+0 , str.begin()+n/2); 
    cout<<str<<endl;
    return 0;
}
*/

/* 
// input a substring of length greater than 5 and reverse the substring from position 2 to 5 using inbuilt functions
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
    string str;
    cout<<"enter a string of length greater than 5";
    getline(cin ,str);
    cout<<str<<endl;

    reverse(str.begin()+1 , str.begin()+5);
    cout<<str<<endl;

    return 0;
}
*/


// substring
/* 
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
    string s = "abcdefgh";

    cout<<s.substr(2)<<endl; // 2 index ke baad ki puri string return

    cout<<s.substr(2,4)<<endl; // 2 index ke baad 4 tk ki puri string  // index start , end index
    return 0;
}
*/


// input a substring of length greater than 5 and reverse the substring from position 2 to 5 using inbuilt functions
/*
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;
int main () {
    string str;
    cout<<"Enter a string  of even length ";
    getline(cin,str);
    cout<<str<<endl;

    int n = str.length();
    cout<<str.substr(n/2); 
    
    return 0;
}
*/

/*
// to_string - integer to string convert

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
    int n  = 13545;

    string str = to_string(n);
    
    // length find 
    int x = str.length();
    cout<<x<<endl;
    return 0; 
} 
*/

/* 
// input a string and return the number of times the neighbouring characters are different from each other 
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
    string str = "abbcdeffghh";
    int count = 0;
    int n  = str.length();

    for(int i = 0; i < n-1; i++) {
        if (n==1) {
            break;
        }
        if(n == 2 && str[0]!=str[1]) {
            count = 1;
            break;
        }
        if(i == 0 ) {
            if(str[i] != str[i+1]) {
                count++;
            }
        }
        else if (i == n-1) {
            if(str[i] != str[i-1]) {
                count++;
            }
        }
        else if(str[i]!=str[i+1] && str[i] != str[i-1]) {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
*/


/* 
// sorting a string 
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    string str = "name";
    sort(str.begin(), str.end());
    cout<<str;
    return 0;
}
*/


// anagram of string

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main () {
    string s = "physicswallah";
    string t = "wallahphysics";

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    if(s==t) cout<<"true";
    else cout<<"false";
    return 0;
}