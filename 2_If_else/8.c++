/*                                                               07/08/2024                                                                      */

// Quiz
/*
// Q - 3
// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main () {
    if(int q = 0) { // 0 - false else will be executed
        cout<<"good";
    }
    else {
        cout<<"excellent";
    }
    return 0;
}
*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main () {
    if(!(std::cout<<"hello")) {
        std::cout<<"pw";
    }
    else {
        std::cout<<"nothing";
    }
    return 0;
}