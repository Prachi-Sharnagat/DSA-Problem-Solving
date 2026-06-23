

#include<cmath>
class Solution {
public:
    int divide(int dividend, int divisor) {
       if(dividend == divisor) return 1;
       bool posSign = true;
       if((dividend >= 0 && divisor < 0) || (dividend < 0 && divisor > 0)){
            posSign = false;
       }

       long long n = abs((long long)dividend);
       long long d = abs((long long)divisor);
    int cnt = 0;
    long long total = 0;
       while(n>= d){
        int cnt = 0;
        while(n >= (d<<cnt)){
            cnt++;
        }
         total += 1LL << (cnt-1);
         long long value = d << (cnt -1);
         n -= value;
         if(n < d){
            break;
         }
       }
          if(total >= pow(2,31) && posSign ==true){
        return INT_MAX;
    }
    if(total >= pow(2,31) && posSign == false ){
        return INT_MIN;
    }

    return posSign ? total : (-1*total);
    }
};

// scenaarios 



#include<cmath>
class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN && divisor==-1){
            return INT_MAX;
        }
        if(dividend==INT_MIN && divisor==1){
            return INT_MIN;
        }
       if(dividend == divisor) return 1;
       bool posSign = true;
       if((dividend >= 0 && divisor < 0) || (dividend < 0 && divisor > 0)){
            posSign = false;
       }

       long long n = abs((long long)dividend);
       long long d = abs((long long)divisor);
    int i = 0;
    int sum = 0;
    int cnt = 0;
    int total = 0;
       while(n>= d){
        int cnt = 0;
        while(n >= d * pow(2,cnt)){
            cnt++;
        }
         total += pow(2,cnt-1);
         long long value = d * pow(2, cnt-1);
         n -= value;
         if(n < d){
            break;
         }
       }
    if(!posSign){
        return -total;
    }
       return total;
    }
};