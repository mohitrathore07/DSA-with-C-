#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<vector<int>> boxTypes = {{3, 2}, {1, 1}, {2, 3}};

    sort(boxTypes.begin(), boxTypes.end(), [](vector<int>& a, vector<int>& b) {
        return a[0] > b[0];  // Sort by units per box descending
    });

    // Print sorted
    for (auto& box : boxTypes) {
        cout <<   box[0] << "," << box[1] << endl;
    }
    return 0;
}