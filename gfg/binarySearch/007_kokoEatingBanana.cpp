class Solution {
  public:   
  
  int ceil(int n, int i){
      return (n+i-1)/i;
  }
  
  int funcReqTime(vector<int> &arr, int BananasPerHour){
      int totalTime = 0;
      for(auto n:arr){
          totalTime += ceil(n,BananasPerHour);
      }
      return totalTime;
  }
  
  
  
  
    int kokoEat(vector<int>& arr, int h) {
        int low = 1;
        int maxElement = *max_element(arr.begin(),arr.end());
        int high = maxElement;
        
        while(low<=high){
            int mid = low + (high -low)/2;
            int requiredTime = funcReqTime(arr,mid);
            if(requiredTime<= h){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
            
        }
        
        
        return low;
       
       
        
    }
};