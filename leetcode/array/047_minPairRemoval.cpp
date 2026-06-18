class Solution {
public:
    bool isSorted(vector<int>& nums){
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] > nums[i + 1]){
                return false;
            }
        }
        return true;
    }

    int minimumPairRemoval(vector<int>& nums) {
        int cnt = 0;

        while(!isSorted(nums)){
            int idx = 0;
            int mn = nums[0] + nums[1];

            for(int i = 1; i < nums.size() - 1; i++){
                int sum = nums[i] + nums[i + 1];

                if(sum < mn){
                    mn = sum;
                    idx = i;
                }
            }

            vector<int> temp;

            for(int i = 0; i < idx; i++){
                temp.push_back(nums[i]);
            }

            temp.push_back(nums[idx] + nums[idx + 1]);

            for(int i = idx + 2; i < nums.size(); i++){
                temp.push_back(nums[i]);
            }

            nums = temp;
            cnt++;
        }

        return cnt;
    }
};