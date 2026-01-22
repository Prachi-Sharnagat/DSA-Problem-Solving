/*
Platform: GFG
Problem: Union of Two Sorted Arrays
Difficulty: Easy
Link: https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1
*/

#include <bits/stdc++.h>
using namespace std;

/* ---------- Brute Force (Set Insertion) ----------

Intuition:
Insert all elements of both arrays into a set.
Set automatically removes duplicates and keeps elements sorted.
Finally, print all elements from the set.

Time Complexity: O(n1 log n1 + n2 log n2)
Space Complexity: O(n1 + n2)
*/
void unionSorted_brute(vector<int> &arr1, vector<int> &arr2) {
    int n1 = arr1.size();
    int n2 = arr2.size();
    set<int> st;

    for(int i = 0; i < n1; i++) {
        st.insert(arr1[i]);
    }

    for(int i = 0; i < n2; i++) {
        st.insert(arr2[i]);
    }

    for(int x : st) {
        cout << x << " ";
    }
}

/* ---------- Optimal (Two Pointers) ----------

Intuition:
Use two pointers, one for each sorted array.
Compare elements and insert the smaller one into the union array.
Avoid duplicates by checking the last inserted element.
After one array finishes, add remaining elements from the other array.

Time Complexity: O(n1 + n2)
Space Complexity: O(n1 + n2)
*/
void unionSorted_optimise(vector<int> &arr1, vector<int> &arr2) {
    int n1 = arr1.size();
    int n2 = arr2.size();
    int i = 0, j = 0;
    vector<int> unionLoop;

    while(i < n1 && j < n2) {
        if(arr1[i] <= arr2[j]) {
            if(unionLoop.empty() || unionLoop.back() != arr1[i]) {
                unionLoop.push_back(arr1[i]);
            }
            i++;
        }
        else {
            if(unionLoop.empty() || unionLoop.back() != arr2[j]) {
                unionLoop.push_back(arr2[j]);
            }
            j++;
        }
    }

    while(i < n1) {
        if(unionLoop.empty() || unionLoop.back() != arr1[i]) {
            unionLoop.push_back(arr1[i]);
        }
        i++;
    }

    while(j < n2) {
        if(unionLoop.empty() || unionLoop.back() != arr2[j]) {
            unionLoop.push_back(arr2[j]);
        }
        j++;
    }

    for(int x : unionLoop) {
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
    // unionSorted_brute(arr1, arr2);
    unionSorted_optimise(arr1, arr2);

    return 0;
}
