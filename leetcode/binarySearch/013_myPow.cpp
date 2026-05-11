class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        long long N = n;
        if(x==0) return 0;

        if(N<0){
         N= -N;
        }
          while(N>0){
            if(N%2==1){
                ans *= x;
                N--;
            }
            else{
                x *= x;
                N= N/2;
            }

        }
    if(n<0) return 1/ans;
      

        return ans;
        
    }
};