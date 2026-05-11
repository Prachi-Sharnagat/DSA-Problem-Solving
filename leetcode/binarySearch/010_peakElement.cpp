class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return 0;
        for(int i=0; i<n; i++){
             if(i==0){
            if(nums[i]>nums[i+1]){
                return i;
            }
        }
     else if(i==(n-1)){
            if(nums[i]>nums[i-1]){
                return i;
            }
        }
       else{

         if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
                return i;
            }
       } 
        }
        return 0;
    }
};


class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return 0;
        int low = 0, high = n-1;
        if(low==0 && nums[low]> nums[low+1]){
            return low;
        }
        if(high==n-1 && nums[high]>nums[high-1]){
            return high;
        }
        low++;
        high++;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
                return mid;
            }

            if(nums[mid]>nums[mid-1]){
                low = mid + 1;
            }   
            else{
                high = mid - 1;

            }         
        }
        return -1;
        
    }
};