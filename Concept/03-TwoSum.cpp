#include<bits/stdc++.h>
using namespace std;

 vector<int> twoSum(vector<int>& nums, int target) {
      int n = nums.size();
      for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(nums[i]+nums[j] == target){
                return {i,j};
            }
        }
      }   return {};
    } 

int main(){
    int size, target;
    cout << "enter size of array : ";
    cin >> size;
    cout << endl;
    cout << "enter target : ";
    cin >> target;
    cout << endl;
    vector<int> nums(size);
    cout << "enter array : ";
    for(int i=0 ; i<size; i++){
        cin >> nums[i];
    }
    vector<int> ans = twoSum(nums, target);
    if(!ans.empty()){
        cout << "[" << ans[0] << "," << ans[1] << "]" << endl;
    }
    else{
        cout << "no two numr sum up to target";
    }
    return 0;
}