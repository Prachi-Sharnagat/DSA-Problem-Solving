class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        int low = 0, high = arr.size()-1;
        int first = -1;
        int last = -1;
        int occurrence = 0;
        
        while(low <= high){
            int mid = low + (high - low)/2;
            if(arr[mid]== target){
                first = mid;
                high = mid - 1;
            }
            else if(arr[mid]> target){
                high = mid-1;
            }
            else{
                low = mid+ 1;
            }
        }
        
        if(first == -1) return 0;
        low = 0, high = arr.size()-1;
         while(low <= high){
            int mid = low + (high - low)/2;
            if(arr[mid]== target){
                last = mid;
                low = mid + 1;
            }
            else if(arr[mid]> target){
               high = mid -1;
            }
            else{
                low = mid+ 1;
            }
        }
        
        int occurence = last - first + 1;
        
        return occurence;
        
        
        
        
        
        
    }
};
class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        int low = 0, high = arr.size()-1;
        int first = -1;
        int last = -1;
        int occurrence = 0;
        
        while(low <= high){
            int mid = low + (high - low)/2;
            if(arr[mid]== target){
                first = mid;
                high = mid - 1;
            }
            else if(arr[mid]> target){
                high = mid-1;
            }
            else{
                low = mid+ 1;
            }
        }
        
        if(first == -1) return 0;
        low = 0, high = arr.size()-1;
         while(low <= high){
            int mid = low + (high - low)/2;
            if(arr[mid]== target){
                last = mid;
                low = mid + 1;
            }
            else if(arr[mid]> target){
               high = mid -1;
            }
            else{
                low = mid+ 1;
            }
        }
        
        int occurence = last - first + 1;
        
        return occurence;     
        
    }
};
