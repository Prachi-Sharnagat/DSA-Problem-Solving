#include <iostream>
using namespace std;

class Solution {
public:
    int removeRightMostBit(int n) {
        return n & (n - 1);
    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    cout << obj.removeRightMostBit(n) << endl;

    return 0;
}