#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;    // safer mid

            if (nums[mid] < target) {
                low = mid + 1;
            }
            else if (nums[mid] > target) {
                high = mid - 1;
            }
            else {
                return mid;    // found
            }
        }
        return -1;   // not found
    }
};

int main() {
    // Example to test in VS Code
    Solution s;

    vector<int> nums = { -1, 0, 3, 5, 9, 12 };
    int target = 9;

    int index = s.search(nums, target);

    cout << "Index = " << index << endl;

    return 0;
}