#include<cmath>
class Solution {
  public:
    int binaryToDecimal(string& b) {
        // code here
        int n = b.length();
        int result = 0;
        for(int i=n-1; i>=0; i--){
            if(b[i]=='0'){
                result +=0;
            }
            else{
                result += pow(2, n-i-1);
            }
        }
        
        return result;
    }
};