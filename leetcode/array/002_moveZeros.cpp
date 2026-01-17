/*
Problem: Move Zeroes
Platform: LeetCode
Problem No: 283
Difficulty: Easy
Link: https://leetcode.com/problems/move-zeroes/description/
*/

#include <bits/stdc++.h>
using namespace std;

/* ---------- Brute Force ----------

Intuition:
Store all non-zero elements in a temporary array.
Count how many zeroes are present.
Place non-zero elements back in the original array,
and fill the remaining positions with zeroes.

Time Complexity: O(n)
Space Complexity: O(n)
*/
void moveZero_brute(vector<int> &arr, int n) {
    vector<int> temp;
    int count = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            temp.push_back(arr[i]);
        } else {
            count++;
        }
    }

    for(int i = 0; i < n - count; i++) {
        arr[i] = temp[i];
    }

    for(int i = n - count; i < n; i++) {
        arr[i] = 0;
    }
}

/* ---------- Optimal (Two Pointers) ----------

Intuition:
First find the index of the first zero.
Then traverse the array from the next index.
Whenever a non-zero element is found,
swap it with the zero position and move the zero pointer forward.
This shifts all zeroes to the end in-place.

Time Complexity: O(n)
Space Complexity: O(1)
*/
void moveZero_optimal(vector<int> &arr, int n) {
    int j = -1;

    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            j = i;
            break;
        }
    }

    if(j == -1) return;

    for(int i = j + 1; i < n; i++) {
        if(arr[i] != 0) {
            swap(arr[j], arr[i]);
            j++;
        }
    }
}

int main() {
    int size;
    cin >> size;

    vector<int> arr(size);
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Choose any method
    // moveZero_brute(arr, size);
    moveZero_optimal(arr, size);

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
