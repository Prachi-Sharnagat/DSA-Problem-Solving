class Solution {
public:
    int reverse(int n){
        int rev = 0;

    while (n > 0) {
      int digit = n % 10;
      rev = rev * 10 + digit;
      n = n / 10;
    }
        return rev; 
    }

    long long sumAndMultiply(int n) {
        long long x = 0;
        long long  sum = 0;
        while(n>0){
            int rem = n%10;
            if(rem) {
                x = x*10 + rem;
                sum += rem;

            }
            n /= 10;
        }
        
        return  reverse(x)*sum;
    }
};