
#include <bits/stdc++.h>
using namespace std;

// generate sorted permutation 
// linear search to current arrayy 
// next perutation 
// it will end up taking n!*n 

vector<int> nextPermutation_brute(vector<int> &nums){
// tc ->
// sc-> 
next_permutation(nums.begin(),nums.end()); // stl in built
return nums;
}

vector<int> nextPermutation_optimal(vector<int> &nums){
int n = nums.size();
int index = -1;
for(int i = n-2; i>=0; i--){
    if(nums[i]<nums[i+1]){
        index = i;
        break;
    }
}
if(index == -1){
    reverse(nums.begin(),nums.end());
    return nums;
}

for(int i = n-1; i>index; i--){
    if(nums[i]> nums[index]){
        swap(nums[i],nums[index]);
        break;
    }
  
}
  reverse(nums.begin()+index+1, nums.end());  reverse(nums.begin()+index+1, nums.end());


    return nums;
 
}

// ---------------------------------------------------------
// MAIN FUNCTION
// ---------------------------------------------------------
int main() {
    int size;
    cin >> size;

    vector<int> arr(size);
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
 vector<int> ans = nextPermutation_optimal(arr);

    for(auto it:ans){
        cout << it << "  ";
    }

    return 0;
}
