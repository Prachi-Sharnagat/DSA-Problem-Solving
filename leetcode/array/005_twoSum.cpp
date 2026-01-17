#include <bits/stdc++.h>
using namespace std;
/*
------------------------------------------------------------
🧩 Problem: Two Sum (Brute → Better → Optimal)
Difficulty: Easy–Medium
Time Complexity:
    Brute      -> O(n²)
    Hash Map   -> O(n)
    Two Pointers (sorted) -> O(n log n)
Space Complexity:
    Brute      -> O(1)
    Hash Map   -> O(n)
    Two Pointers -> O(n)

🔗 Links:
GFG:     https://www.geeksforgeeks.org/two-sum-problem/
LeetCode: https://leetcode.com/problems/two-sum/

Brute:
    - Check every pair using a double loop.

Better (Hash Map):
    - Use a map to store value → index.
    - For every element, check if "target - current" exists.

Optimal (Two Pointers):
    - Store pairs (value, index).
    - Sort by value.
    - Use left & right pointers to find target sum.
    - Return original indices.
------------------------------------------------------------

---------------------------------------------------------
   TYPE 01 — Brute Force
   Return true/false whether any pair adds to target
--------------------------------------------------------- */
bool twoSum_brute_type01(vector<int> &arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] + arr[j] == target) {
                return true;
            }
        }
    }
    return false;
}

/* ---------------------------------------------------------
   TYPE 02 — Brute Force
   Return indices of pair that adds to target
--------------------------------------------------------- */
vector<int> twoSum_brute_type02(vector<int> &arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] + arr[j] == target) {
                return {i, j};
            }
        }
    }
    return {-1, -1};
}

/* ---------------------------------------------------------
   BETTER — Hashing (O(n))
--------------------------------------------------------- */
vector<int> twoSum_hashing_optimise(vector<int> &nums, int target) {
    map<int, int> mp; // value → index

    for (int i = 0; i < nums.size(); i++) {
        int need = target - nums[i];

        if (mp.find(need) != mp.end()) {
            return {mp[need], i};
        }
        mp[nums[i]] = i;
    }
    return {-1, -1};
}

/* ---------------------------------------------------------
   OPTIMAL — Two Pointers After Sorting (O(n log n))
--------------------------------------------------------- */
vector<int> twoSum_optimise(vector<int> &nums, int target) {
    int n = nums.size();
    vector<pair<int, int>> arr;

    for (int i = 0; i < n; i++) {
        arr.push_back({nums[i], i}); // (value, original_index)
    }

    sort(arr.begin(), arr.end());

    int left = 0, right = n - 1;

    while (left < right) {
        int sum = arr[left].first + arr[right].first;

        if (sum == target) {
            return {arr[left].second, arr[right].second};
        }
        else if (sum < target) {
            left++;
        } 
        else {
            right--;
        }
    }
    return {-1, -1};
}

/* ---------------------------------------------------------
   MAIN FUNCTION
--------------------------------------------------------- */
int main() {
    int size;
    cin >> size;

    vector<int> arr(size);
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    // Choose any method you want:
    // vector<int> ans = twoSum_brute_type02(arr, target);
    // vector<int> ans = twoSum_hashing_optimise(arr, target);
    vector<int> ans = twoSum_optimise(arr, target);

    if (ans[0] == -1) {
        cout << "No pair found\n";
    } else {
        cout << "Indices: " << ans[0] << " and " << ans[1] << "\n";
    }

    return 0;
}
