class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;
        map<int,int> mpp;
        for(int n:nums){
            mpp[n]++;
        }

        for(auto it:mpp){
            if(it.second==1){
                ans.push_back(it.first);
            }
        }
        return ans;
        
    }
};