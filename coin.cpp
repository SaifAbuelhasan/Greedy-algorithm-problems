#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int numberOfBills(int n) {
    int den[5] = {1, 5, 10, 20, 100};
    // variables for array index, return num
    int index = 4, num = 0;
    while (n != 0) {
        if (n / den[index] >= 1) {
            num += n / den[index];
            n %= den[index];
        }
        index--;
    }
    return num;
}

int main() {
    int input;
    cin >> input;
    cout << numberOfBills(input) << endl;
}