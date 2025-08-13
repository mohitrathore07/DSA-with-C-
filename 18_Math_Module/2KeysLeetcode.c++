/*
leetcode 650 2 keys keyboard

class Solution {
public:
    int gretestdivisor(int n) {
        for(int i = n/2; i>=1; i--) {
            if(n%i==0) return i;
        }
        return 1; // in case of prime number
    }
    int minSteps(int n) {
        int count = 0;
        while(n>1) {
            int hf= gretestdivisor(n);
            count += (n/hf);
            n = hf;
        } 
        return count;
    }
};
*/

/*
class Solution {
public:
    int gretestdivisor(int n) {
        for(int i = 2; i <= sqrt(n);i++) {
            if(n%i==0) return n/i;
        }
        return 1;
    }
    bool isPrime(int n) {
        if (n <= 1) return false;
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) return false;
        }
        return true;
    }
    int minSteps(int n) {
        int count = 0;
        while(n>1) {
            if(isPrime(n)) {
                count += n;
                break;
            }
            int hf = gretestdivisor(n);
            count += (n/hf);
            n = hf;
        } 
        return count ;
    }
};
*/

/*
263
class Solution {
public:
    bool isUgly(int n) {
        if(n==0) return false;
       while(n%2==0) n/=2;
       while(n%3==0) n/=3;  
       while(n%5==0) n/=5;
       return (n==1);
    }
};
*/

