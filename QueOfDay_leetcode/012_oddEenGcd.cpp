class Solution {
public:

    // approach -> 1. sum of odd number from 1....n => n^2 1+3+5+7 = 16 
    // 2. sum of even is n(n+1)  2 + 4 + 6 + 8 = 4*5 => 20
    // gcd(n*n , n(n+1)) = n

    int gcdOfOddEvenSums(int n) {
       return n;
        
    }
};

class Solution {
public:

    int gcd_optimal(int a,int b){
        if(b == 0){
            return a;
        }
        return gcd_optimal(b , a%b);
    }
    int gcd_brute(int n1, int n2) {
    for (int i = min(n1, n2); i >= 1; i--) {
        if (n1 % i == 0 && n2 % i == 0) {
            return i;
        }
    }
    return 1;
}

    int gcdOfOddEvenSums(int n) {
        int odd = 0, even = 0;
        for(int i=1; i<=n; i++){
            odd += 2*i - 1;
            even += 2*i; 
        }

        return gcd_optimal(odd,even);
        
    }
};