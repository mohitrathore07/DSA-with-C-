// 13/03/2025

/*
// leetcode 2187

class Solution {
public:
    bool check(vector<int>& time ,int totalTrips ,long long mid) {
        long long trips = 0;
        int n = time.size();

        for(int i = 0; i<time.size();i++) {
            trips += mid/(long long)time[i];
        }

        if(trips < totalTrips) return false;
        else return true;
        }
    long long minimumTime(vector<int>& time, int totalTrips) {
          long long lo = 1;
          long long ans = -1;
          int mx = -1;

          int n = time.size();
          for(int i = 0; i<time.size();i++) {
            mx = max(mx, time[i]);
          } 

          long long hi = (long long)mx * (long long )totalTrips;
          while(lo <= hi) {
            long long mid = lo + (hi - lo) / 2;
            if(check(time , totalTrips , mid) == true) {
                ans = mid;
                hi = mid - 1;
            }
            else lo = mid + 1; 
          }
    return ans;
    }
};

*/