#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] < target) {
                low = mid + 1;
            } 
            else if (nums[mid] > target) {
                high = mid - 1;
            } 
            else {
                return mid;
            }
        }

        // If not found → return insertion index
        int lb = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        return lb;
    }
};

int main() {
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;

    Solution obj;
    cout << obj.searchInsert(nums, target);
}