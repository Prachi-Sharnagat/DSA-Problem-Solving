// POSITIVE INTEGER ONLY
class Solution {
  public:
    int longestSubarray_bruteForce(vector<int>& arr, int k) {
        int maxLen = 0;
        for(int i=0; i<arr.size(); i++){
            int sum = 0;
            for(int j = i; j<arr.size(); j++){
                sum += arr[j];
                if(sum <= k){
                    maxLen = max(maxLen, j-i+1);
                }
                else {
                    break;
                }
            }
        }
        
        return maxLen;
    }
};

class Solution {
  public:
    int longestSubarray_betterSolution(vector<int>& arr, int k) {
          // code here
        int maxLen = 0;
        int l = 0, r = 0;
        int n = arr.size();
        int sum = 0;
        while(r < n){
        sum += arr[r];
            while(sum > k){
                sum = sum - arr[l];
                l++;
                
            }
            if(sum == k){
                maxLen = max(maxLen, r-l+1);
            }
            r++; 
        }
         
        return maxLen;
    }
};


