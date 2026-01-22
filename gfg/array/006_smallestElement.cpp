/*
Platform: General / GFG
Problem: Find Smallest and Second Smallest Element
Difficulty: Easy
Link: https://www.geeksforgeeks.org/problems/find-the-smallest-and-second-smallest-element-in-an-array3226/1
*/

#include <bits/stdc++.h>
using namespace std;

/* ---------- Optimal (Single Pass) ----------

Intuition:
Maintain two variables: smallest and second smallest.
While traversing the array:
- If current element is smaller than smallest,
  update second smallest and then smallest.
- Else if it lies between smallest and second smallest,
  update second smallest.
This finds both values in one traversal.

Time Complexity: O(n)
Space Complexity: O(1)
*/
vector<int> minAnd2ndMin(vector<int> &arr) {
    int smallest = arr[0];
    int secondSmallest = INT_MAX;

    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] != smallest && arr[i] < secondSmallest) {
            secondSmallest = arr[i];
        }
    }

    if(secondSmallest == INT_MAX) {
        return {-1};
    }
    return {smallest, secondSmallest};
}

/* ---------- Optimal (Array Version) ----------

Intuition:
Traverse the array once.
Track smallest and second smallest simultaneously.
Update values based on comparisons.
Print both results at the end.

Time Complexity: O(n)
Space Complexity: O(1)
*/
void smallestElement(int arr[], int size) {
    int smallest = arr[0];
    int secondSmallest = INT_MAX;

    for(int i = 0; i < size; i++) {
        if(arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] != smallest && arr[i] < secondSmallest) {
            secondSmallest = arr[i];
        }
    }

    cout << "smallest element is " << smallest << endl;
    cout << "second smallest is " << secondSmallest;
}

int main() {
    int size;
    cin >> size;

    int arr[size];
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Choose any method
    // vector<int> ans = minAnd2ndMin(vector<int>(arr, arr + size));
    smallestElement(arr, size);

    return 0;
}
