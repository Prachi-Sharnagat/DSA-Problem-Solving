/*
Platform: General / GFG
Problem: Find Second Largest Element in Array
Difficulty: Easy
Link: https://www.geeksforgeeks.org/problems/second-largest3735/1
*/

#include <bits/stdc++.h>
using namespace std;

/* ---------- Brute Force (Two Pass) ----------

Intuition:
First traverse the array to find the largest element.
Then traverse the array again to find the largest element
that is smaller than the maximum.
This requires two passes over the array.

Time Complexity: O(n)
Space Complexity: O(1)
*/
void SecondLargest(int arr[], int size) {
    int largest = arr[0];
    int secondLargest = -1;   // assuming non-negative values

    for(int i = 0; i < size; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    for(int i = 0; i < size; i++) {
        if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    cout << "second largest element is " << secondLargest;
}

/* ---------- Optimal (Single Pass) ----------

Intuition:
Maintain two variables: largest and second largest.
While traversing the array:
- If current element is greater than largest,
  update second largest and then largest.
- Else if it lies between largest and second largest,
  update second largest.
This finds the answer in one traversal.

Time Complexity: O(n)
Space Complexity: O(1)
*/
void SecondLargestApproach2(int arr[], int size) {
    int largest = arr[0];
    int secondLargest = -1;   // assuming non-negative values

    for(int i = 0; i < size; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    cout << "second largest element : " << secondLargest;
}

int main() {
    int size;
    cin >> size;

    int arr[size];
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Choose any method
    // SecondLargest(arr, size);
    SecondLargestApproach2(arr, size);

    return 0;
}
