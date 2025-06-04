#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector <int> v;
    v.push_back(5);
    v[1] = 8; // no point of adding this last me ek garbage value create ho jayegi bs
    v.push_back(10);
    v.push_back(4);

    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
    return 0;
}