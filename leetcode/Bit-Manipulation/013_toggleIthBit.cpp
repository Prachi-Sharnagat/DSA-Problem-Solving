#include <iostream>
using namespace std;

class Solution {
public:
    int toggle(int n, int k) {
        int ans = n ^ (1 << k);
        return ans;
    }
};

int main() {
    Solution obj;

    int n, k;
    cout << "Enter number: ";
    cin >> n;

    cout << "Enter bit position (0-based): ";
    cin >> k;

    int result = obj.toggle(n, k);

    cout << "After toggling bit " << k << ": " << result << endl;

    return 0;
}