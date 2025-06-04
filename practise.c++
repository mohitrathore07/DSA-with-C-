/*
#include <iostream>
#include <vector>
#include<algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
   vector<int> num1 = {2,2,4,4};
   vector<int> num2 = {2,2,2,4,4};

   num1.insert(num1.end() , num2.begin() , num2.end());
   sort(num1.begin() , num1.end());
   int n = num1.size() + 1;
   if(num1.size() % 2 == 0) {
    cout<<(double)(num1[n-1] + num1[n-2])/2;
   }

   cout<<num1[n-1];
    return 0;
}*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main () {
    vector<int> nums1 = {};
    vector<int> nums2 = {3,4};
    
    nums1.insert(nums1.end() , nums2.begin() , nums2.end());
    sort(nums1.begin() , nums1.end());

   int n = nums1.size();
   double ans;
   int mid = n / 2;
   if(mid % 2 == 0 && n) ans = (nums1[mid] + nums1[mid - 1]) / 2.0;
   else ans = nums1[mid];
   cout<<ans;
   return 0;
}