class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i = 0; i< nums.size(); i++){
            int ans = i^nums[i];
            if(ans){
                return i;
            }
        }
        return nums.size();
    }
};