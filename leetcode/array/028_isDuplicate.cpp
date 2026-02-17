// LeetCode Problem: 217. Contains Duplicate
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        set<int> st;

        for(int i = 0; i < n; i++) {
            int curr = nums[i];

            // If element already exists in set
            if(st.find(curr) != st.end()) {
                return true;
            }

            st.insert(curr);
        }

        return false;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {1, 2, 3, 4, 5, 1};

    if(obj.containsDuplicate(nums)) {
        cout << "Contains Duplicate" << endl;
    } else {
        cout << "No Duplicate Found" << endl;
    }

    return 0;
}
