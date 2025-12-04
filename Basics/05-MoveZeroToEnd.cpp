/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array.
*/

#include<bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    int lastNonZero = 0;

    for(int i = 0; i < n; i++) {
        if(nums[i] != 0) {
            swap(nums[i], nums[lastNonZero]);
            lastNonZero++;
        }
    }
}

int main(){
    int size;
    cout << "enter size of array : ";
    cin >> size;
    cout << endl;
    vector<int> nums(size);
    cout << "enter array : ";
    for(int i=0 ; i<size; i++){
        cin >> nums[i];
    }
    moveZeroes(nums);
   for(int i=0; i<size; i++){
    cout << nums[i]<< "," << " ";
   }
    return 0;
}