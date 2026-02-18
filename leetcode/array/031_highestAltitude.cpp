// LeetCode 1732 - Find the Highest Altitude

#include <bits/stdc++.h>
using namespace std;

int largestAltitude(vector<int>& gain) {
    int n = gain.size();
    int maxAltitude = 0;
    int curr = 0;

    for (int i = 0; i < n; i++) {
        curr += gain[i];
        maxAltitude = max(curr, maxAltitude);
    }

    return maxAltitude;
}

int main() {
    int n;
    cout << "Enter size of gain array: ";
    cin >> n;

    vector<int> gain(n);

    cout << "Enter gain values: ";
    for (int i = 0; i < n; i++) {
        cin >> gain[i];
    }

    cout << "Highest Altitude: " << largestAltitude(gain) << endl;

    return 0;
}
