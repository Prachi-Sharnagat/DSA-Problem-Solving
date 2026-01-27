
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


// optimal solution : 
// implementation of stl next_permutation in built function


// wrong solution : 
// vector<int> nextPermutation_optimal(vector<int> &nums){
// // tc ->
// // sc-> 
// int n = nums.size();
// // bool isSorted = true;
// // for(int i=0; i<n; i++){
// //     if(nums[i] < nums[i+1]){
// //         isSorted = false;
// //     }
// // }
// // if(isSorted){
// //     reverse(nums.begin(), nums.end());
// //     return nums;
// //     }

// int index = -1;

// for(int i= n-2; i>=0; i--){
//     if(nums[i] < nums[i+1]){
//         index = i;
//         break;
//     }
// }

// if(index==-1){
//     reverse(nums.begin(), nums.end());
//     return nums;
// }

// int min = nums[index+1];
// for(int i = index + 1; i<n; i++){
//     if(nums[index]<nums[i] && min > nums[i]){
//         min = i;
//     }
// }

// swap(nums[min],nums[index]);
// reverse(nums.begin()+index+1, nums.end());
// return nums;
// }


// correct solution : 





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
