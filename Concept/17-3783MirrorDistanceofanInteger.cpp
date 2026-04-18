class Solution {
public:

    int reverse(int n){
        int reverse = 0,rem = 0;
        while(n!=0){
        rem = n%10;
        reverse = reverse*10 + rem;
         n = n/10;

        }
        return reverse;

    }
    int mirrorDistance(int n) {
        return abs(n - reverse(n));
        
    }
};