class Solution {
public:
    int mySqrt(int x) {
       int ans = 0;
        for(long long i= 1;i<=x; i++){
            if(i*i <= x){
                ans = i;
            }
            else{
                break;
            }
        }
          return ans;
        
    }
};

class Solution {
public:
    int mySqrt(int x) {
       int low = 0, high = x;
       int ans = 0;
       while(low<=high){
        long long mid = low + (high-low)/2;
        if(mid*mid<=x){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
       }
       return ans;
        
    }
};