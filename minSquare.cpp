#include <bits/stdc++.h>
using namespace std;

int minSquare(int a, int b) {
    // get the smallest and largest of the two sides
    int mn = min(a, b), mx = max(a, b);
    // get the smallest possible square side
    int minSide = max(mx, 2*mn);
    // return area
    return minSide * minSide;
}

int main() 
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;
        cout << minSquare(a, b) << endl;
    }
}