class Solution {
public:
    int func(vector<int> &bloomDay, int day, int adjFlower){
        int totalAdjPossible = 0;
        int count = 0;
        for(int n:bloomDay){
            if(n<=day){
                count++;
            }
            else{
             totalAdjPossible += count/adjFlower;
                count = 0;
            }
        }
        totalAdjPossible += count/adjFlower;
        return totalAdjPossible;


    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long n = bloomDay.size();
        long long cal = (long long)m*k;
          if(n < cal){
            return -1;
        }

        int maxElement = *max_element(bloomDay.begin(), bloomDay.end());
        int minElement = *min_element(bloomDay.begin(), bloomDay.end());
        int low = minElement , high = maxElement;

        while( low <= high){
            int mid = low + (high-low)/2;
            int noOfAdjPossible = func(bloomDay,mid , k);
            if(noOfAdjPossible >= m){
                high = mid - 1;
            } 
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};



// brute force method 
class Solution {
  public:
  int func(vector<int> &arr,  int day , int adjFlower){
      int totalAdj = 0;
      int count = 0;
      for(auto n:arr){
          if(n<=day){
              count++;
          }
          else{
             
              totalAdj += count/adjFlower;
               count = 0;
          }
      } 
      totalAdj += count/adjFlower;
      
      return totalAdj;
  }
  
  
  
    int minDaysBloom(vector<int>& arr, int k, int m) {
        // Code here
        int n = arr.size();
        long long cal = (long long)m*k;
        if(n < cal){
            return -1;
        }
        int maxElement = *max_element(arr.begin(), arr.end());
        int minElement = *min_element(arr.begin(), arr.end());
        
        for(int i=minElement; i<= maxElement; i++){
            int noOfAdjacent = func(arr, i, k);
            if(noOfAdjacent > = m){
                return i;
            }
        }
        
        return -1;
         
    }
};