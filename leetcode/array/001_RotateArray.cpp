/*
Platform: LeetCode
Problem: Rotate Array
Problem No: 189
Difficulty: Medium
Link: https://leetcode.com/problems/rotate-array/

Approach 1: Brute Force (Temporary Array)
Time Complexity: O(n)
Space Complexity: O(k)  // worst case O(n)

Approach 2: Optimal (Reverse Method)
Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

void rotateArray_Optimise(vector<int> &nums, int k)
{
    int n = nums.size();
    k = k % n;
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}

// Time Complexity: O(nlogn)
// Space Complexity: O(nn)

void rotateArray_brute(vector<int> &nums, int k)
{
    int n = nums.size();
    k = k % n;
    int temp[k];
    for (int i = n - k; i < n; i++)
    {
        temp[i - (n - k)] = nums[i];
    }

    for (int i = n - k - 1; i >= 0; i--)
    {
        nums[i + k] = nums[i];
    }
    cout << endl;
    for (int i = 0; i < k; i++)
    {
        nums[i] = temp[i];
    }
    cout << endl;
}

int main()
{
    int size;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int n;
    cin >> n;
    rotateArray_Optimise(arr, n);
    // rotateArray_brute(arr, n);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}