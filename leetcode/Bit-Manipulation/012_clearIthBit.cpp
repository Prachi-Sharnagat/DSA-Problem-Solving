class Solution {
public: 
    int replaceBit(int n , int k){
        int ans = n & ~(1<< k);

        return ans;
    }
};