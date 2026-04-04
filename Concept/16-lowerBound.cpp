class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        // tc -> o(n)
        int n = arr.size();
        for(int i=0; i<n; i++){
            if(arr[i]>= target){
                return i;
            }
        }
        
        return n;
    }
};


// using binary search 0(nlogn)
class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        // code here
        int low = 0, high = arr.size()-1;
        int index = -1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(arr[mid]>= target){
                index = mid;
                high = mid -1;
            }
            else{
                low = mid+1;
            }
        }
        if(index==-1) return arr.size();
        return index;
    }
};

class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        // code here
      int lb = lower_bound(arr.begin(), arr.end(), target)- arr.begin();
      return lb;
    }
};
