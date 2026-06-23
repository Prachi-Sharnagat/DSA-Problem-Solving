#include <iostream>
using namespace std;

class Solution {
public:
    int setRightMostUnsetBit(int n) {
        return n | (n + 1);
    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    cout << obj.setRightMostUnsetBit(n) << endl;

    return 0;
}