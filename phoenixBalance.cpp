#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// The least difference will always be achieved by splitting the numbers into: (1, 2, ... (n/2 - 1), n) and (n/2, n/2+1...n-1) 
int getDiff(int n) {
    // Get sum of first (n/2 - 1) coins
    int sum1 = ((1<<(n/2)) - 2) + (1<<n);
    // Get sum of (n/2 to n-1) coins 
    int sum2 = ((1<<(n/2)) - 1)<<(n/2);
    return sum1 - sum2;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        cout << getDiff(n) << endl;
    }
}