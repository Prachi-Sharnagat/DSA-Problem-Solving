class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        // code here
        int low =0, high = arr.size()-1;
        int ans = -1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(arr[mid]<=x){
                ans = mid;
                low = mid+1;
            }
            else{
                high = mid-1;
                
            }
            
        }
        return ans;
    }
};

class Solution {
  public:
    int findFloor(vector<int>& arr, int target) {
        int n = arr.size();
        int ub = upper_bound(arr.begin(), arr.end(), target)- arr.begin();
        if(ub==0){
            return -1;
        }
        
            return ub-1;

    }
};


