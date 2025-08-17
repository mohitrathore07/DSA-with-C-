// bit masking 
/*
Consider this problem: There are N≤5000
 workers. Each worker is available during some days of this month (which has 30 days). For each worker, you are given a set of numbers, each from interval [1,30]
, representing his/her availability. You need to assign an important project to two workers but they will be able to work on the project only when they are both available. Find two workers that are best for the job — maximize the number of days when both these workers are available.

You can compute the intersection of two workers (two sets) in O(30)
 by using e.g. two pointers for two sorted sequences. Doing that for every pair of workers is O(N2⋅30)
, slightly too slow.

We can think about the availability of a worker as a binary string of length 30
, which can be stored in a single int. With this representation, we can count the intersection size in O(1)
 by using __builtin_popcount(x[i] & x[j]). The complexity becomes O(N2)
, fast enough.

What if we are given the availability for the whole year or in general for D
 days? We can handle D≤64
 in a single unsigned long long, what about bigger D
?

We can split D
 days into convenient parts of size 64
 and store the availability of a single worker in an array of D64
 unsigned long longs. Then, the intersection can be computed in O(D64)
 and the whole complexity is O(N2⋅D64)
.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of workers: ";
    cin >> n;
    
    vector<int> masks(n, 0);
    
    for (int i = 0; i < n; i++) {
        int num_days;
        cin >> num_days;
        int mask = 0;
        for (int j = 0; j < num_days; ++j) {
            int day;
            cin >> day;
            mask |= (1 << (day - 1)); // day-1 for 0-based bit indexing
        }
        masks[i] = mask;
    }

    int max_days = 0;
    int person1 = -1;
    int person2 = -1;
    
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int intersection = (masks[i] & masks[j]);
            int common_days = __builtin_popcount(intersection); // ✅ correct fn
            if (common_days > max_days) {
                max_days = common_days;
                person1 = i;
                person2 = j;
            }
        }
    }
    
    cout << "Person1: " << person1 
    << " and Person2: " << person2 
    << "  Max common days: " << max_days << endl;
    
    return 0;
}

*/

