/*🧩 Problem: Majority Element
Platform: LeetCode
Problem No: 169
Difficulty: Easy
Link: https://leetcode.com/problems/majority-element/
*/

#include <bits/stdc++.h>
using namespace std;

// ---------------------------------------------------------
// 1. BRUTE FORCE METHOD -> O(n^2)
// ---------------------------------------------------------
int majorityElement_brute(vector<int> &arr) {
    for(int i = 0; i < arr.size(); i++) {
        int count = 0;
        for(int j = 0; j < arr.size(); j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count > arr.size() / 2) {
            return arr[i];
        }
    }
    return -1;
}

// ---------------------------------------------------------
// 2. BETTER METHOD (HASHING) -> O(n) time, O(n) space
// ---------------------------------------------------------
int majorityElement_better(vector<int> &arr) {
    map<int, int> mpp;

    for(int i = 0; i < arr.size(); i++) {
        mpp[arr[i]]++;
    }

    for(auto x : mpp) {
        if(x.second > arr.size() / 2) {
            return x.first;
        }
    }
    return -1;
}

// ---------------------------------------------------------
// 3. OPTIMAL METHOD (Moore's Voting Algorithm) -> O(n)
// ---------------------------------------------------------
int majorityElement_optimise(vector<int> &arr) {
    int element = 0;
    int count = 0;

    // Step 1: Find potential majority element
    for(int i = 0; i < arr.size(); i++) {
        if(count == 0) {
            element = arr[i];
            count = 1;
        }
        else if(arr[i] == element) {
            count++;
        }
        else {
            count--;
        }
    }

    // Step 2: Verify that the element is truly majority
    int checkCount = 0;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == element) checkCount++;
    }

    if(checkCount > arr.size() / 2) {
        return element;
    }

    return -1;
}

// ---------------------------------------------------------
// MAIN FUNCTION
// ---------------------------------------------------------
int main() {
    int size;
    cin >> size;

    vector<int> arr(size);
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Choose any function:
    // int ans = majorityElement_brute(arr);
    // int ans = majorityElement_better(arr);
    int ans = majorityElement_optimise(arr);

    cout << ans;

    return 0;
}
