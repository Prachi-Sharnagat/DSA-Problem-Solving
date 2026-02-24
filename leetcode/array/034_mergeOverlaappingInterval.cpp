#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());  // Sort by start time
        vector<vector<int>> ans;

        for (int i = 0; i < intervals.size(); i++) {
            int start = intervals[i][0];
            int end = intervals[i][1];

            // If last merged interval already covers this interval, skip
            if (!ans.empty() && ans.back()[1] >= end) {
                continue;
            }

            // Merge all intervals that overlap with [start, end]
            while (i + 1 < intervals.size() && intervals[i + 1][0] <= end) {
                end = max(end, intervals[i + 1][1]);
                i++;
            }

            ans.push_back({start, end});
        }

        return ans;
    }
};

int main() {
    Solution s;
    vector<vector<int>> intervals = {{1,3}, {2,6}, {8,10}, {15,18}};
    
    vector<vector<int>> result = s.merge(intervals);

    cout << "Merged Intervals: ";
    for (auto &v : result) {
        cout << "[" << v[0] << "," << v[1] << "] ";
    }
    return 0;
}