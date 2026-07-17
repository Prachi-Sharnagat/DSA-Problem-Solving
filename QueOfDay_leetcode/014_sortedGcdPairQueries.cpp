// TIME EXCEEDED : NOT efficient code 

#include<numeric>

class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int n = nums.size();
        vector<int> gcdPairs;
        long long totalPairs = 1LL * n * (n - 1) / 2;
        for (int i = 0; i < n; i++) {
            for(int j = i+1; j<n; j++){
                gcdPairs.push_back(std::gcd(nums[i], nums[j]));
            
            }
        }
        // gcdPairs.reserve(totalPairs);
        sort(gcdPairs.begin(), gcdPairs.end());   
          vector<int> ans;   
      
            gcdPairs.reserve(totalPairs);
             for (long long x : queries) {
                      ans.push_back(gcdPairs[x]);
                
        }
        return ans;
    }
};