/*                                                              04-01-2025                                                             */

// Q - 1 input a string of size n and update all the odd positions in the string to character # 
/* 
#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    getline(cin,str);

    int n = str.length();

    // for(int i = 0; i < n; i++) {
    //     if(i % 2 != 0) {
    //         str[i] = '#';
    //     }
    // }

    // better way

    for(int i = 1; i < n; i+=2) {
        str[i] = '#';
    }
    cout<<str;
    return 0;
}
*/

/* 
// Q - 2 count consonants in a string

#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    getline(cin,str);
    int count = 0;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == 'a'|| str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            count++;
        }
    }

    cout<<"Count is: "<< str.length() - count;
    return 0;
}


*/

/* 
// Q - 3 palindrom of a string
#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    getline(cin,str);

    int n = str.length();
    bool flag = true;
    int i = 0;
    int j = n-1;
    while(i < j) {
        if(str[i]!=str[j]) {
            flag = false;
        }
        i++;
        j--;
    }
    if(flag) {
        cout<<"Palindrom yes";
    }
     else {
        cout<<"Palindrom no";
    }
    return 0;
}
*/

// Assignment - 2
/* 
//  Q - 1 reverse and concate the same string
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
    string str = "PWSkills";
    string temp  = str;
    reverse(str.begin(), str.end());
    temp += str;
    cout<<temp;
    return 0;
}
*/


/* // second largest digit in a string
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() { 
    string str = "2847579";
    int n = stoi(str);
    int firstmax = INT8_MIN;
    int secmax = INT8_MIN;

    while (n != 0)
    {
        int digit = n % 10;
        // if(digit > ( firstmax || secmax)) {
        // secmax = firstmax;
        // firstmax = digit;
        // } // not the correct way

        if(digit > firstmax) {
        secmax = firstmax;
        firstmax = digit;
        } 
        else if (digit > secmax && digit < firstmax) {
            secmax = digit;
        }
        n /= 10;
    }
    
    cout<<"second max is: "<<secmax;
    return 0;
}
*/


// Q - 4 anagram
/*
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
    string s = "book";
    string t = "hook";

    sort(s.begin() , s.end());
    sort(t.begin() , t.end());

    if(s==t) cout<<"anagram";
    else cout<<"anagram not";
    return 0;
}
*/


#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
    string s = "abjkoe";
    return 0;
}