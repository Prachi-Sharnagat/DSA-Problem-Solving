#include<cmath>
class Solution {
public:
    // string reverse(string s){
    //     return string(s.rbegin(),s.rend());
    // }

     string decToBinary(int n) {
        // code here
        string result = "";
        if(n==0){
            return string(32,'0');
        }
        int cnt = 1;
        while(n>1){
            cnt++;
            int rem = n%2;
            result += to_string(rem);
            n = n/2;
        }
        result += "1";
        while(cnt < 32){
            result += '0';
            cnt++;
        }
        return result;
    }

    int convertDecimal(string b) {
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

  int reverseBits(int n) {
    string reverseBinary = decToBinary(n);
    int val = convertDecimal(reverseBinary);

    return val;
    }
};