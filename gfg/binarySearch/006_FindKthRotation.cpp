class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int n = arr.size();
        int mini = INT_MAX;
        int index;
        int low = 0, high = n - 1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(arr[low]<=arr[mid]){
                if(arr[low]<=mini){
                    mini = arr[low];
                    index = low;
                }
                low = low + 1;
            }
            else{
               if(arr[mid]<=mini){
                   mini = arr[mid];
                   index = mid;
               }
                high = mid - 1;
            }
        }
        return index;
        
    }
};

// minimum element : index 