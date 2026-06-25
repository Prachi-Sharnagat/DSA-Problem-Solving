



class Solution {
public:
    int singleNumber_brute(vector<int>& nums) {
        map<int,int> mpp;
        for(auto n : nums){
            mpp[n]++;
        }
        
        for(auto it : mpp){
            if(it.second==1){
                return it.first;
            }
        }
        return -1;
    }
};