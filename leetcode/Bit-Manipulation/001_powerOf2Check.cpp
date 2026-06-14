#include<cmath>
class Solution {
public:
   
    bool isPowerOfTwo(int n) {
        long long ans; 
        for(int i=0; i<=n; i++){
            ans = pow(2,i);
            if(ans > n){
                break;
            }
            if(ans== n){
                return true;
            }
        }

        return false;
        
    }
};