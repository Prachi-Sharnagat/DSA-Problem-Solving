class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        if(k==1) {
            int mxval = 0;
            for(int i=0; i<arr.size(); i++){
                mxval = max(mxval,arr[i]);
            }
            return mxval;
        }

        int l = 0, r = k-1;
             int n = arr.size();
             int sumVal = 0;

             for(int i = 0; i<k; i++){
                 sumVal += arr[i];
             }
             int mxVal = sumVal;
             while(r < n-1){
                 sumVal = sumVal - arr[l];
                 l++;
                 r++;
                 sumVal = sumVal + arr[r];
                 mxVal = max(mxVal, sumVal);
             }
             return mxVal;
    }
};