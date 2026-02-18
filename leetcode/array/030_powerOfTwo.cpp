// LeetCode 231 - Power of Two

#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n) {
    if (n <= 0) return false;

    while (n % 2 == 0) {
        n /= 2;
    }

    return n == 1;
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    if (isPowerOfTwo(n))
        cout << "True\n";
    else
        cout << "False\n";

    return 0;
}
