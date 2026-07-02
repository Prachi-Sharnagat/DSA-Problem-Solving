class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size();
        int sum1 = 0;
        int sum2 = 0;
        for(int i=0; i<n; i++){
            sum1 += nums[i];
        }

        for(int i = 0; i<n; i++){
            int ele = nums[i];
            while(ele){
                int rem = ele % 10 ;
                sum2 += rem;
                ele = ele/10;
            }
        }
        return abs(sum1-sum2);
    }
};