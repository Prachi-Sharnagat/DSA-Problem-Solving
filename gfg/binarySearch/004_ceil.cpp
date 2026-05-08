// User function Template for C++
class Solution {
  public:
    int findCeil(vector<int>& arr, int target) {
        // code here
        int low = 0, high = arr.size()-1;
        int index = -1;
        
        while(low <= high){
            int mid = low + (high-low)/2;
            if(arr[mid] >= target){
                index = mid;
                high = mid -1;
            }
            else{
                low = mid + 1;
            }
        }
    
        
        return index;
        
    }
};


// Floor <= target largest number <= target 
// Ceil	>= target lowest number >= target

// User function Template for C++
class Solution {
  public:
    int findCeil(vector<int>& arr, int x) {
        // code here
        int lb =lower_bound(arr.begin(), arr.end(),x)- arr.begin();
        if(lb == arr.size()){
            return -1;
        }
        return lb;
    }
};