/*
Platform: LeetCode
Problem: Rotate Array
Problem No: 349
Difficulty: easy
Link: https://leetcode.com/problems/intersection-of-two-arrays/

Approach 1: Brute Force
Time: o(n^2)
Space: o(n)

Approach 2: Optimal (Two Pointers)
Time: O(n)
Space: O(1)
*/

#include<bits/stdc++.h>
using namespace std;

void intersectionSorted_optimise(vector<int> &arr1, vector<int> &arr2){

}

void intersectionSorted_brute(vector<int> &arr1, vector<int> &arr2){
int n1 = arr1.size();
int n2 = arr2.size();
vector<int> v;
// k is size of set 
// k = min(n1,n2); // st-> space complexity : o(k)
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            if(arr1[i]==arr2[j]){
                v.push_back(arr1[i]); // insertion in set = o(logn)
                break;
            }
        }
    }

    for(int x:v){
        cout << x << " ";
    }
}


int main(){
 int size1, size2;
 cin >> size1 >> size2;
 vector<int> arr1(size1);
 vector<int> arr2(size2);
 for(int i=0; i<size1; i++){
    cin >> arr1[i];
 }
  for(int i=0; i<size2; i++){
    cin >> arr2[i];
 }
 intersectionSorted_brute(arr1, arr2);
 return 0;
}