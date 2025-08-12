/*
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) { // sqrt(n) tk hi jayega loop 
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isPrime(num))
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;
    return 0;
}
*/


/*

2614 leetcode

class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int mx = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            if(isPrime(nums[i][i])) {
                mx = max(nums[i][i] , mx);
            }
            if(isPrime(nums[i][n-i-1])) {
                mx = max(nums[i][n-i-1] , mx);
            }
         }
         return mx;
    }
    bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) { // sqrt(n) tk hi jayega loop 
        if (n % i == 0) return false;
    }
    return true;
}
};
*/

/*
// factors printing

#include <iostream>
#include <cmath>
using namespace std;

void factors(int n) {
    for(int i = 1; i<=n; i++) {
        if(n%i == 0) cout<<i<<" ";
    }
}

int main() {
    factors(60);
    return 0;
}

*/

/*
perfect square issue 49 - 1 49 7 7
#include <iostream>
#include <cmath>
using namespace std;

void factors(int n) {
    for(int i = 1; i<=sqrt(n); i++) {
        if(n%i == 0) cout<<i<<" "<<n/i<<" ";
    }
}

int main() {
    factors(60);
    return 0;
}
    */

/* 
#include <iostream>
#include <cmath>
using namespace std;

void factors(int n) {
    for(int i = 1; i<=sqrt(n); i++) {
        if(n%i == 0) {
            cout<<i<<" ";
            if(i != sqrt(n)) cout<<n/i<<" ";
        }
    }
}

int main() {
    factors(49);
    return 0;
}
    */
/*
// sequence wise print
#include <iostream>
#include <cmath>
using namespace std;

void factors(int n) {
    for(int i = 1; i<=sqrt(n); i++) {
        if(n%i == 0)  cout<<i<<" ";
    }
    for(int i = sqrt(n)-1; i>1; i--) {
        if(n%i == 0 ) cout<<n/i<<" ";
    }
}

int main() {
    factors(6);
    return 0;
}
*/

// correct way of printing factors 
#include <iostream>
#include <cmath>
using namespace std;

void factors(int n) {
    int num = n;
    int sq = sqrt(num);
   for (int i = 1; i <= sq; i++) {
            if (num % i == 0) {
                cout << i<<" ";
            }
    }
    for (int i = sq; i >= 2; i--) {  
        if (num % i == 0) {
            int otherDiv = num / i;   // logic ki same number repeat na ho 
                if (otherDiv != num && otherDiv != i) { 
                    cout<<otherDiv<<" ";
                }
            }
    }
}

int main() {
    factors(36);
    return 0;
}

/*
leetcode 507

class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num <= 1) return false;

        int sum = 1; // 1 is always a proper divisor
        int sq = sqrt(num);

        for (int i = 2; i <= sq; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }
        for (int i = sq; i >= 2; i--) {
            if (num % i == 0) {
                int otherDiv = num / i;
                if (otherDiv != num && otherDiv != i) { 
                    sum += otherDiv;
                }
            }
        }
        return sum == num;
    }
};

*/