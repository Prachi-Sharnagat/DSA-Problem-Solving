/*
Problem: Max Consecutive Ones
Difficulty: Easy
Link LeetCode: https://leetcode.com/problems/max-consecutive-ones/
Link GFG: https://www.geeksforgeeks.org/dsa/maximum-consecutive-ones-or-zeros-in-a-binary-array/
*/

#include <bits/stdc++.h>
using namespace std;

/* ---------- Brute Force ----------

Intuition:
Check every subarray and count consecutive 1s.
Keep updating the maximum count.
This approach is slow because of repeated counting.

Time Complexity: O(n^2)
Space Complexity: O(1)
*/
int maxConsecutiveOnes_brute(vector<int> &arr) {
    int n = arr.size();
    int maxi = 0;

    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = i; j < n; j++) {
            if(arr[j] == 1) {
                count++;
                maxi = max(maxi, count);
            } else {
                break;
            }
        }
    }
    return maxi;
}

/* ---------- Optimal ----------

Intuition:
Traverse the array once.
Increase count when 1 is found.
Reset count when 0 is found.
Track the maximum count during traversal.

Time Complexity: O(n)
Space Complexity: O(1)
*/
int maxConsecutiveOnes(vector<int> &arr) {
    int maxi = 0;
    int count = 0;

    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == 1) {
            count++;
            maxi = max(maxi, count);
        } else {
            count = 0;
        }
    }
    return maxi;
}

int main() {
    int size;
    cin >> size;

    vector<int> arr(size);
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Choose any method
    // int ans = maxConsecutiveOnes_brute(arr);
    int ans = maxConsecutiveOnes(arr);

    cout << ans;
    return 0;
}
