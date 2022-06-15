#include <bits/stdc++.h>
#include <iostream>
using namespace std;


// Get minimum number of operations to get b from a
int getMin(int a, int b) {
    // Variables for absolute difference and number of steps in 10
    int diff = abs(b-a), divTen = diff / 10;
    if (diff % 10 == 0) return divTen;

    // if the difference isn't a multiple of 10, add 1 step
    return divTen + 1;
}

int main() 
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;
        cout << getMin(a, b) << endl;
    }
}