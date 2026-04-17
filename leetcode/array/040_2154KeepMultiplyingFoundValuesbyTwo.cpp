class Solution {
public:
    void originalChange(vector<int>& nums,int &original){
        int n = nums.size();
         for(int i=0;  i<n; i++){
                if(nums[i]== original){
                   original *=2;
                   originalChange(nums,original);
                    return ;
                }
            }
    }

    int findFinalValue(vector<int>& nums, int original) {
        
          originalChange(nums,original);
          return original;
        
    }
};