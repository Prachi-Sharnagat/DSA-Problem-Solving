/*
Platform: gfg
Problem: missing value in sorted array
Difficulty: easy
Link: https://www.geeksforgeeks.org/dsa/find-the-missing-number-in-a-sorted-array/

Approach 1: Brute Force
Time: o(n^2)
Space: o(1)

Approach 2: Optimal (sum method)
Time: O(n)
Space: O(1)
*/

#include<bits/stdc++.h>
using namespace std;
// sum method :
int FindingMissingNum_Optimise1(vector<int> &arr){
    int num = arr.size()+1;
          int sumTotal = num*(num+1)/2;
        for(int i=0; i<arr.size(); i++){
                sumTotal -= arr[i];
        }
        if(sumTotal!=0){
            return sumTotal;
        }
    }



// brute force method
int FindingMissingNum_brute(vector<int> &arr, int num){
for(int i=1; i<=num; i++){
    bool found = false;
    for(int j=0; j<arr.size(); j++){
        if(arr[j]==i){
            found = true;
            break;
        }
    }
    if(!found){
        return i;
    }
}
return -1;
}


int main(){
    int size;
    cin >> size;
 vector<int> arr(size);
 for(int i=0; i<size; i++){
    cin >> arr[i] ;
 }

 int missing = FindingMissingNum_Optimise1(arr);
 cout << missing;
 return 0;
}