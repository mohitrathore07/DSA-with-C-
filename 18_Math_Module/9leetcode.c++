/*
2507

class Solution {
public:
    int smallestValue(int n) {
        if(isPrime(n)) return n;
        int sum = 0;

        for(int i = 1; i < sqrt(n); i++) {
            if(n%i==0 && isPrime(i)) {
                int m = n;
                while(m % i == 0) {
                    sum += i;
                    m /= i;
                }
            }
        }
        for(int i = sqrt(n); i >= 1; i--) {
            if(n%i==0 && isPrime(n/i)) {
                int m = n;
                while(m % (n/i) == 0) {
                    sum += (n/i);
                    m /= (n/i);
                }
            }
        }
        if(sum == n) return n;
        return smallestValue(sum);
    }
    bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) { 
        if (n % i == 0) return false;
    }
    return true;
}
};
*/

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

/*
204
class Solution {
public:
    void fillSieve (vector<bool>& sieve) {
        int n  = sieve.size()-1;
        for(int i = 2; i <= sqrt(n);i++) {
            for(int j = i*2; j<=n;j+=i) {
                sieve[j]=0;
            }
        }
    }
    int countPrimes(int n) {
        if(n <= 2) return 0;
        n = n-1;
        int count = 0;
        vector<bool> sieve(n+1, 1); // 0 not prime 1 prime 
        fillSieve(sieve);
        sieve[0] = 0;
        sieve[1] = 0;
        for(int i = 2; i<=n;i++) {
            if(sieve[i]==1) count++;
        }
        return count;
    }
};
*/

/*
2521. Distinct Prime Factors of Product of Array

class Solution {
public:
    void fillSieve(vector<bool>& sieve) {
        int n = sieve.size() - 1;
        for (int i = 2; i <= sqrt(n); i++) {
            for (int j = i * 2; j <= n; j += i) {
                sieve[j] = 0;
            }
        }
    }
    int distinctPrimeFactors(vector<int>& nums) {
        int n = nums.size();
        int mx = -1;
        for (int i = 0; i < n; i++) {
            mx = max(mx, nums[i]);
        }
        vector<bool> sieve(mx + 1, 1);
        if (mx + 1 > 0)
            sieve[0] = 0;
        if (mx + 1 > 1)
            sieve[1] = 0;

        fillSieve(sieve);
        vector<int> primes;
        for (int i = 2; i <= mx; i++) {
            if (sieve[i] == 1)
                primes.push_back(i);
        }
        vector<bool> taken(primes.size(), 0);
        for (int i = 0; i < nums.size(); i++) {
            int ele = nums[i];
            for (int j = 0; j < primes.size(); j++) {
                if (primes[j] > ele)
                    break;
                if (ele % primes[j] == 0)
                    taken[j] = 1;
            }
        }
        int count = 0;
        for (int i = 0; i < taken.size(); i++) {
            if (taken[i] == 1)
                count++;
        }
        return count;
    }
};
*/