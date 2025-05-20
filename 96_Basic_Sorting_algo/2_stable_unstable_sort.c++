// stable and unstable sort - bubble sort is stable sort


// string sort and removal of values which are smaller than x
/* 
#include <iostream>
#include <string>
using namespace std;

int main() {
    string a = "AZYZXBYDXJK";
    string str  = "";
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i] >= 'X') {
            str.push_back(a[i]);
        }
    }

    cout<<str;
    cout<<endl;
    for (int i = 0; i < str.size()-1; i++)
    {
        bool flag = true;
        for (int j = 0;  j < str.size() - i - 1; j++)
        {
            if(str[j] > str[j+1]) {
                swap(str[j] , str[j+1]);
                flag = false;
            }
        }
        if(flag == true) {
            break;
        }
    }

    cout<<str;
}

*/

// push zeros to end while maintaining the relative order same


int main() {
    int ary[] = {5,0,1,2,0,0,4,0,3};

    int n = 9;
    for (int i = 0; i < n-1; i++)
    {

        for (int j = 0;  j < n - i - 1; j++)
        {
            if(ary[j] == 0) {
                swap(ary[j] , ary[j+1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<ary[i]<<" ";
    }
    
}