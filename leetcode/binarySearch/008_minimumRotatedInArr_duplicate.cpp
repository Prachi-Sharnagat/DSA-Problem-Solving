// duplicate exist 
// hard level que 
class Solution {
public:
    int findMin(vector<int>& arr) {
        int n = arr.size();
        int low = 0, high = n - 1;
        int mini = INT_MAX;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(arr[low]==arr[mid] &&  arr[mid]==arr[high]){
                mini = min(mini,arr[low]);
                low++;
                high--;
                continue;
            }

            if(arr[low]<=arr[mid]){
                if(arr[low]<=mini){
                    mini = arr[low];
                }
                low = mid + 1;
            }
            else{
                if(arr[mid]<=mini){
                    mini = arr[mid];
                }
                high = mid -1;

            }
        }
        return mini;
    }
};