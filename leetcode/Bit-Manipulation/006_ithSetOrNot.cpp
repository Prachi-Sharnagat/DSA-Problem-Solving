// if 1 then yes 
// indices reveerse 
class Solution {
  public:
    bool checkKthBit(int n, int k) {
        //  code here
        int ans = ((n >>  k) & 1); // 0(1)
        // bits operations are extremely fast
        return ans;
    }
};

class Solution {
  public:
  
    bool checkKthBit(int n, int k) {
        bool val = ((1 << k) & n);
        if(val==0){
            return false;
        }
        return true;
    }
};

class Solution {
  public:
    string decToBin(int n){
        string s = "";
        if(n==0){
            return "0";
        }
        
        while(n>1){
            int rem = n%2;
            s += to_string(rem);
            n = n/2;
        }
         
        s += '1';
        
        return s;
    }
  
  
    bool checkKthBit(int n, int k) {
        string s = decToBin(n);
        if(s.length()-1 < k){
            return false;
        }
        return s[k] == '1';
    }
};

