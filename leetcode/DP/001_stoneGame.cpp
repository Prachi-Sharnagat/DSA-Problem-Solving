#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        // Alex always wins for LeetCode 877
        return true;
    }
};

int main() {
    int n;
    cout << "Enter number of piles: ";
    cin >> n;

    vector<int> piles(n);
    cout << "Enter piles: ";
    for (int i = 0; i < n; i++) {
        cin >> piles[i];
    }

    Solution obj;
    bool result = obj.stoneGame(piles);

    cout << (result ? "Alex Wins (true)" : "Lee Wins (false)") << endl;

    return 0;
}