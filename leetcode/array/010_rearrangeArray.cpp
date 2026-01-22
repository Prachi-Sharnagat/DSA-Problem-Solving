
#include <bits/stdc++.h>
using namespace std;

    vector<int> rearrangeArray_brute(vector<int>& nums) {
       
        int n = nums.size();
        vector<int> pos;
        vector<int> neg;

        for(int i=0; i<n; i++ ){
            if(nums[i]>=0){
                pos.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }

        for(int i=0; i<n/2; i++){
            nums[2*i] = pos[i]; 
              nums[2*i+1] = neg[i];
        }
        return nums;
    }

    vector<int> rearrangeArray_optimise(vector<int> &nums){

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
   
//  vector<int> ans = rearrangeArray_brute(arr);
 vector<int> ans = rearrangeArray_optimise(arr);

    for(auto it:ans){
        cout << it << " ";
    }

    return 0;
}
