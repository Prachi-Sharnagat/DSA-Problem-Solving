class Solution {
  public:
    int setKthBit(int n, int k) {
    int ans = (n | (1 << k));
    return ans;
    }
};
