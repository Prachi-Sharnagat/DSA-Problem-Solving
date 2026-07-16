class Solution {
public:
    long long gcd(int a, int b){
        if(b==0) return a;

        return gcd(b, a%b);
    }


    long long gcdSum(vector<int>& nums) {
        vector<int> mxi;
        vector<int> prefixGcd;
        int n = nums.size();
        int mx = INT_MIN;
        for(int i=0; i<n; i++){ 
            mx = max(nums[i],mx);
            mxi.push_back(mx);
        }
        int i=0;
        for(auto num : mxi){
            prefixGcd.push_back(gcd(nums[i], num));
            i++;
        }
        sort(prefixGcd.begin(), prefixGcd.end());
        long long sum = 0;
        for(int i=0; i<n/2; i++){
        sum += gcd(prefixGcd[i],prefixGcd[prefixGcd.size()-i-1]);
        }

        return sum;
         
    }
};