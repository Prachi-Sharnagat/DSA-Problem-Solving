/*
Platform: LeetCode
Problem: Intersection of Two Arrays
Problem No: 349
Difficulty: Easy
Link: https://leetcode.com/problems/intersection-of-two-arrays/
*/

#include <bits/stdc++.h>
using namespace std;

/* ---------- Brute Force ----------

Intuition:
For every element in the first array, check if it exists in the second array.
Use a visited array to avoid picking the same element multiple times.
Stop early if elements are sorted and current element exceeds comparison value.

Time Complexity: O(n1 * n2)
Space Complexity: O(n2)
*/
void intersectionSorted_brute(vector<int> &arr1, vector<int> &arr2) {
    int n1 = arr1.size();
    int n2 = arr2.size();
    int visited[n2] = {0};
    vector<int> v;

    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j] && visited[j] == 0) {
                v.push_back(arr1[i]);
                visited[j] = 1;
                break;
            }
            if(arr2[j] > arr1[i]) {
                break;
            }
        }
    }

    for(int x : v) {
        cout << x << " ";
    }
}

/* ---------- Optimal (Two Pointers) ----------

Intuition:
Since both arrays are sorted, use two pointers.
If elements are equal, add to result and move both pointers.
If one element is smaller, move that pointer forward.
This avoids unnecessary comparisons.

Time Complexity: O(n1 + n2)
Space Complexity: O(1)   // ignoring output array
*/
void intersectionSorted_optimise(vector<int> &arr1, vector<int> &arr2) {
    int n1 = arr1.size();
    int n2 = arr2.size();
    int i = 0, j = 0;
    vector<int> v;

    while(i < n1 && j < n2) {
        if(arr1[i] < arr2[j]) {
            i++;
        }
        else if(arr1[i] > arr2[j]) {
            j++;
        }
        else {
            v.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    for(int x : v) {
        cout << x << " ";
    }
}

int main() {
    int size1, size2;
    cin >> size1 >> size2;

    vector<int> arr1(size1);
    vector<int> arr2(size2);

    for(int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }
    for(int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    // Choose any method
    // intersectionSorted_brute(arr1, arr2);
    intersectionSorted_optimise(arr1, arr2);

    return 0;
}
