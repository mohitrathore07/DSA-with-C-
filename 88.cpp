/*                                                               14/02/2024                                                                      */

/* 
// k-th symbol in grammer --> leetcode 779 - leetode copy explaination
#include<iostream>
using namespace std;

int kthelement(int n , int k) {
    if(n == 0) return 0;
    if(k % 2 == 0) { // since even ke case me hme ans ko flip krna hai 
        int prevAns = kthelement(n-1 , k/2);
        if(prevAns == 0) return 1;
        else return 0;  
    }
    else { // odd cases me prev ke equal ans hota hai 
        int prevAns = kthelement(n-1 , (k/2) + 1);
        return prevAns;
    }
}

int main () {
    int n = 4, k = 8;
    int ans = kthelement(n , k); 
    cout<<"on row: "<<n<<" position k: "<<k<<" symbol is: "<<ans;
    return 0;
}
*/

// leetcode 38 - dry run 

#include<iostream>
using namespace std;

string countAndSay(int n) {
    if(n == 1) return "1";
    string str = countAndSay(n-1);

    string ztr = "";
    int freq = 1;
    char ch = str[0];
    for(int i = 1; i < str.length(); i++) {
        char dh = str[i];
        if(dh == ch) {
            freq++;
        } 
        else {
            ztr += (to_string(freq)+str);
            freq = 1;
            ch = dh;
        }
    }
    ztr += (to_string(freq)+str); // for two reasons - copy leetcode    
}

int main () {
    int n = 4;
    string s = countAndSay(n);
    cout<<s;
    return 0;
}