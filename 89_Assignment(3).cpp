/*                                                               18/02/2025                                                                      */


/* 
// Q - 1 write a recursive function to reverse a number . Avoiding preceding 0s in the reversed number
#include<iostream>
using namespace std;

int reversenum(int num , int ans) {
    if(num==0) return ans;
    int remainder = num%10;
    if(ans==0 && remainder == 0) return reversenum(num/10, ans);
    else return reversenum(num/10, ans*10+remainder);
}

int main () {
    int num = 100;
    cout<<num<<" ------>"<<reversenum(num , 0);
    return 0;
}
  
*/


/* Q - 2 
#include<iostream>
#include<vector>
using namespace std;

void printingnum(int arr[], int k , vector<int> ans, int idx, int size) {
    if(idx == size ) {
        if(ans.size() == k) {
            for(int i = 0; i < ans.size(); i++) {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    if(ans.size() + (size-idx) < k) return;

    printingnum(arr, k , ans, idx+1, size); 
    ans.push_back(arr[idx]);
    printingnum(arr, k , ans, idx+1, size);
}

int main () {
    int arr[] = {1,2,3,4,5};
    int k = 3;
    vector<int> v;
    printingnum(arr,k,v ,0 , 5);
    return 0;
}

*/

/* 
#include <iostream>
#include <vector>
using namespace std;

void printa(vector<int>& arr1, vector<int>& v , vector<vector<int>>& ans  ,  int idx , int n){
    if(idx == n) {
        ans.push_back(v);    
        return;
    }
    printa(arr1, v , ans ,idx+1,n);
    v.push_back(arr1[idx]);
    printa(arr1, v , ans, idx+1,n);
}

int main () {
    vector<int> arr1= {1 , 2 ,3};
    vector<int> v;
    vector<vector<int>> ans;
    printa(arr1 , v , ans, 0 , 3);
    int row = ans.size();
    int column = ans[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j  < column; j++)
        {
          cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
*/

//// Assignment - 2

/*
// leet code  78
#include <iostream>
#include <vector>
using namespace std;

void printa(vector<int>& arr1, vector<int> v , vector<vector<int>>& ans ,  int idx , int n) {
    if (idx == n) {
        ans.push_back(v);    
        return;
    }

    printa(arr1, v , ans, idx + 1, n);
    v.push_back(arr1[idx]);
    printa(arr1, v , ans, idx + 1, n);
}

int main() {
    vector<int> arr1 = {1, 2, 2};
    vector<int> v;
    vector<vector<int>> ans;

    printa(arr1, v, ans, 0, 3);

    int row = ans.size();
    int column = 0;
    for (const auto& subset : ans) {
       column = max(column, (int)subset.size()); 
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (j < ans[i].size()) {
                cout << ans[i][j] << " ";
            } else {
                cout << "  "; 
            }
        }
        cout << endl;
    }

    return 0;
}
*/

/* 
// leet code  90
#include <iostream>
#include <vector>
using namespace std;

void printa(vector<int>& arr1, vector<int> v , vector<vector<int>>& ans ,  int idx , int n) {
    if (idx == n) {
    int row = ans.size();
    int column = 0;
    for (const auto& subset : ans) {
       column = max(column, (int)subset.size()); 
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (j < ans[i].size()) {
                if(ans[i][j] != v[i]) {
                    ans.push_back(v);
                }
                else {
                    continue;
                }
            } 
        }
    } 
        return;
    }

    printa(arr1, v , ans, idx + 1, n);
    v.push_back(arr1[idx]);
    printa(arr1, v , ans, idx + 1, n);
}

int main() {
    vector<int> arr1 = {1, 2, 2};
    vector<int> v;
    vector<vector<int>> ans;

    printa(arr1, v, ans, 0, 3);

    int row = ans.size();
    int column = 0;
    for (const auto& subset : ans) {
       column = max(column, (int)subset.size()); 
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (j < ans[i].size()) {
                cout << ans[i][j] << " ";
            } else {
                cout << "  "; 
            }
        }
        cout << endl;
    }

    return 0;
}
*/


/*
#include<iostream>
#include<string>
using namespace std;

void substring(string str1 , string str2, string ans , string prev){
    if (str1 == "" && str2 == "") 
    {
        cout<<ans<<endl;
        return;
    }
    char ch = str1[0];
    char ch2 = str2[0];
    substring(str1.substr(1), str2.substr(1), ans, prev+ch);
    substring(str1.substr(1), str2.substr(1), ans, prev+ch2);
}
 
int main (){
    string str1 = "abcd";
    string str2 = "zcde";
    // printingsubsets(str1, str2 , 0, "" , "", n);
    substring(str1 , str2, "","");
}
*/


// Q - 4
/* 
#include<iostream>
using namespace std;

int factorial(int num , int fact) {
    if(num==1) {
        return fact;
    }
    return factorial(num-1, fact*num);
}

int main () {
    cout<<factorial(4, 1);
    return 0;
}
    */

    #include<iostream>
    using namespace std;
    
    int decitobin(int num , int ans) {
        if(num == 0) {
            return ans;
        }
        return decitobin(num / 2, ans * 10 + num % 2);
    }
    
    int main () {
        int num = 13;
        int result = decitobin(num, 0);
    
        cout << "Binary of " << num << " is: ";
        cout << result << endl; 
        return 0;
    }
    