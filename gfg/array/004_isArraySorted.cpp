/*
Platform: General / GFG
Problem: Check if Array is Sorted
Difficulty: Easy
Link: https://www.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1
*/

#include <bits/stdc++.h>
using namespace std;

/* ---------- Optimal ----------

Intuition:
Traverse the array from left to right.
Compare every element with the next one.
If at any point the current element is greater than the next,
the array is not sorted.
If all comparisons satisfy sorted order, the array is sorted.

Time Complexity: O(n)
Space Complexity: O(1)
*/
bool isArraySorted(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int size;
    cin >> size;

    int arr[size];
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    if(isArraySorted(arr, size)) {
        cout << "the given array is sorted";
    } else {
        cout << "the given array is not sorted";
    }

    return 0;
}
