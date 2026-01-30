/*
Platform: GFG
Problem: Linear Search
Difficulty: Easy
Link: https://www.geeksforgeeks.org/dsa/linear-search/
*/

#include <bits/stdc++.h>
using namespace std;

/* ---------- Brute Force / Optimal ----------

Intuition:
Traverse the array element by element.
Compare each element with the target value.
If a match is found, return its index.
If the loop ends without a match, the element is not present.

Time Complexity: O(n)
Space Complexity: O(1)
*/
int linearSearch(vector<int> &arr, int num) {
    int n = arr.size();

    for(int i = 0; i < n; i++) {
        if(arr[i] == num) {
            return i;
        }
    }
    return -1;
}

int main() {
    int size;
    cin >> size;

    vector<int> arr(size);
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int num;
    cin >> num;

    int findIndex = linearSearch(arr, num);
    cout << findIndex;

    return 0;
}
