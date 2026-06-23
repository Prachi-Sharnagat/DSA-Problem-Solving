class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int i= 0; i<nums.size(); i++){
            ans ^= nums[i];
        }
        return ans;
    }
};


class Solution {
public:
    int singleNumber(vector<int>& nums) {
      // brute force : 
      map<int,int> mpp;
      for(int i=0; i<nums.size(); i++){
        mpp[nums[i]]++;
      }

      for(auto it:mpp){
        if(it.second==1){
            return it.first;
        }
      }

      return -1;
    }
};