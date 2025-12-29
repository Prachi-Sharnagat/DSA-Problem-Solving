/*
Problem: Move Zeroes
Platform: leetcode
problem no : 283
Link: https://leetcode.com/problems/move-zeroes/description/

Approach 1: Brute Force
Time: O(n)
Space: O(n)

Approach 2: Optimal (Two Pointers)
Time: O(n)
Space: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

void moveZero_optimal(vector<int> &arr, int n){
     int j = -1;
   for(int i=0; i<n; i++){
    if(arr[i]==0){
        j = i;
        break;
    }
   }
    if(j==-1){ return; }
   for(int i=j+1; i<n; i++){
    if(arr[i]!=0){
        swap(arr[j], arr[i]);
        j++;
    }
   }
}

void moveZero_brute(vector<int> &arr, int n ){
    vector<int> temp;
    int count =0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
        else{
            count++;
        }
    }
    for(int i=0; i<n-count; i++){
        arr[i]= temp[i];
    }
    for(int i=n-count ; i<n; i++){
        arr[i] = 0;
    }

}

int main()
{
    int size;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    moveZero_optimal(arr, size);
    // moveZero_brute(arr, size);
    
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}