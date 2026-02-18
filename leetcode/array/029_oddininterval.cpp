#include<bits/stdc++.h>
using namespace std;

int countOdds(int low, int high) {
    int n = high - low + 1;
    int count = 0;

    if (low % 2 == 0 && high % 2 == 0) {
        count = n / 2;
    } else {
        count = (n + 1) / 2;
    }

    return count;
}

int main() {
    int low, high;

    cout << "Enter low and high: ";
    cin >> low >> high;

    int result = countOdds(low, high);

    cout << "Number of odd numbers: " << result << endl;

    return 0;
}
