/*
Platform: GFG
Problem: Missing value in sorted array
Difficulty: Easy
Link: https://www.geeksforgeeks.org/dsa/find-the-missing-number-in-a-sorted-array/
Link LeetCode: https://leetcode.com/problems/missing-number/
*/

#include <bits/stdc++.h>
using namespace std;

/* ---------- Brute Force ----------

Intuition:
Check every number from 1 to n.
For each number, scan the entire array.
If a number is not found, that number is the missing one.

Time Complexity: O(n^2)
Space Complexity: O(1)
*/
int FindingMissingNum_brute(vector<int> &arr, int n) {
    for(int i = 1; i <= n; i++) {
        bool found = false;
        for(int j = 0; j < arr.size(); j++) {
            if(arr[j] == i) {
                found = true;
                break;
            }
        }
        if(!found) return i;
    }
    return -1;
}

/* ---------- Better (Hashing) ----------

Intuition:
Create a hash array to mark which numbers are present.
The number whose frequency is zero is the missing number.

Time Complexity: O(n)
Space Complexity: O(n)
*/
int FindingMissingNum_usingHashing(vector<int> &arr) {
    int n = arr.size() + 1;
    vector<int> hash(n + 1, 0);

    for(int i = 0; i < arr.size(); i++) {
        hash[arr[i]]++;
    }

    for(int i = 1; i <= n; i++) {
        if(hash[i] == 0) return i;
    }
    return -1;
}

/* ---------- Optimal (Sum Method) ----------

Intuition:
The sum of numbers from 1 to n is known.
Subtract all array elements from this sum.
The remaining value is the missing number.

Time Complexity: O(n)
Space Complexity: O(1)
*/
int FindingMissingNum_Optimise1(vector<int> &arr) {
    int n = arr.size() + 1;
    int sumTotal = n * (n + 1) / 2;

    for(int i = 0; i < arr.size(); i++) {
        sumTotal -= arr[i];
    }
    return sumTotal;
}

/* ---------- Optimal (XOR Method) ----------

Intuition:
XOR of the same numbers becomes zero.
XOR all numbers from 1 to n and XOR all array elements.
All common numbers cancel out and the remaining value is the missing number.

Time Complexity: O(n)
Space Complexity: O(1)
*/
int FindingMissingNum_optimise2(vector<int> &arr) {
    int n = arr.size() + 1;
    int xor1 = 0, xor2 = 0;

    for(int i = 1; i <= n; i++) {
        xor1 ^= i;
    }

    for(int i = 0; i < arr.size(); i++) {
        xor2 ^= arr[i];
    }

    return xor1 ^ xor2;
}

int main() {
    int size;
    cin >> size;

    vector<int> arr(size);
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Choose any method
    // int missing = FindingMissingNum_brute(arr, size + 1);
    // int missing = FindingMissingNum_usingHashing(arr);
    // int missing = FindingMissingNum_Optimise1(arr);
    int missing = FindingMissingNum_optimise2(arr);

    cout << missing;
    return 0;
}
