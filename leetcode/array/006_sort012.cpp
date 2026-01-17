#include <bits/stdc++.h>
using namespace std;

/*
---------------------------------------------------------------------
🧩 Problem: Sort 0s, 1s and 2s (Dutch National Flag Algorithm)
Difficulty: Easy–Medium
Time Complexity:
    Brute Force (Counting)      -> O(n)
    Optimal (DNF Algorithm)     -> O(n)
Space Complexity:
    Brute                      -> O(1)
    Optimal                    -> O(1)

🔗 Links:
GFG:     https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/
LeetCode: https://leetcode.com/problems/sort-colors/

Brute (Counting Method):
    - Count number of 0s, 1s, and 2s.
    - Rewrite array based on counts.

Optimal (Dutch National Flag):
    - Use 3 pointers (low, mid, high):
        low  → boundary for 0s
        mid  → current element
        high → boundary for 2s
    - Swap & adjust pointers based on value at mid.
---------------------------------------------------------------------
*/

/* ---------------------------------------------------------------
   BRUTE FORCE — Counting Method
--------------------------------------------------------------- */
vector<int> sortElement_brute(vector<int> &arr) {
    int n = arr.size();
    int count0 = 0, count1 = 0, count2 = 0;

    for (int x : arr) {
        if (x == 0) count0++;
        else if (x == 1) count1++;
        else count2++;
    }

    for (int i = 0; i < count0; i++) arr[i] = 0;
    for (int i = count0; i < count0 + count1; i++) arr[i] = 1;
    for (int i = count0 + count1; i < n; i++) arr[i] = 2;

    return arr;
}

/* ---------------------------------------------------------------
   OPTIMAL — Dutch National Flag Algorithm
--------------------------------------------------------------- */
vector<int> sortElement_optimise(vector<int> &arr) {
    int n = arr.size();
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    return arr;
}

/* ---------------------------------------------------------------
   MAIN FUNCTION
--------------------------------------------------------------- */
int main() {
    int size;
    cin >> size;

    vector<int> arr(size);
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    vector<int> ans = sortElement_optimise(arr);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}
