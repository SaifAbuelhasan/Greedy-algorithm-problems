#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Get the minimum number of moves to make array even
int minMoves(int *arr, int n) {
    // Variables for even out of place and odd out of place
    int notEvens = 0, notOdds = 0;
    for (int i = 0; i < n; i++) {
        // check that the index and the array element have equal first bit (same parity)
        if ((i & 1) == (arr[i] & 1)) {
            continue;
        }
        // if they don't have same parity
        notOdds += (i & 1); // if the index is odd the element is even. Increment notOdds
        notEvens += (arr[i] & 1); // if the element is odd the index is even. Increment notEvens
    }
    
    // return number of switches if possible, -1 if it's not possible
    if (notOdds == notEvens)
        return notOdds;
    return -1;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n; // size of array
        // fill array with input
        cin >> n;
        int arr[n];
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
        }
        cout << minMoves(arr, n) << endl;
    }

    // int arr[5] = {1, 2, 3, 4, 5};
    // cout << minMoves(arr, (sizeof(arr)/sizeof(arr[0]))) << endl;
}