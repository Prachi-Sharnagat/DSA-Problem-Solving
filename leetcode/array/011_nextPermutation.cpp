
#include <bits/stdc++.h>
using namespace std;

// generate sorted permutation 
// linear search to current arrayy 
// next perutation 
// it will end up taking n!*n 

vector<int> nextPermutation_brute(vector<int> &nums){
// in built stl can be use 
// tc ->
// sc-> 
next_permutation(nums.begin(),nums.end());
return nums;
}


// optimal solution : 
// implementation of stl next_permutation in built function

vector<int> nextPermutation_brute(vector<int> &nums){
// tc ->
// sc-> 

 

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
 vector<int> ans = nextPermutation_brute(arr);

    for(auto it:ans){
        cout << it << "  ";
    }

    return 0;
}
