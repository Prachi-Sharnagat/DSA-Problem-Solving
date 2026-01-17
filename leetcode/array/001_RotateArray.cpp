/*
Platform: LeetCode
Problem: Rotate Array
Problem No: 189
Difficulty: Medium
Link: https://leetcode.com/problems/rotate-array/
*/

#include <bits/stdc++.h>
using namespace std;

/* ---------- Brute Force (Temporary Array) ----------

Intuition:
Store the last k elements in a temporary array.
Shift the remaining elements of the array to the right by k positions.
Copy the elements from the temporary array to the first k positions.
This directly simulates rotation using extra space.

Time Complexity: O(n)
Space Complexity: O(k)   // worst case O(n)
*/
void rotateArray_brute(vector<int> &nums, int k) {
    int n = nums.size();
    k = k % n;

    int temp[k];
    for(int i = n - k; i < n; i++) {
        temp[i - (n - k)] = nums[i];
    }

    for(int i = n - k - 1; i >= 0; i--) {
        nums[i + k] = nums[i];
    }

    for(int i = 0; i < k; i++) {
        nums[i] = temp[i];
    }
}

/* ---------- Optimal (Reverse Method) ----------

Intuition:
Reverse the entire array first.
Then reverse the first k elements.
Finally reverse the remaining n-k elements.
This achieves rotation in-place without extra space.

Time Complexity: O(n)
Space Complexity: O(1)
*/
void rotateArray_Optimise(vector<int> &nums, int k) {
    int n = nums.size();
    k = k % n;

    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}

int main() {
    int size;
    cin >> size;

    vector<int> arr(size);
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    // Choose any method
    // rotateArray_brute(arr, k);
    rotateArray_Optimise(arr, k);

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
