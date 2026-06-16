

#include<cmath>
class Solution {
public:
    // int convertDecimal(string s){
    //     int result = 0; 
    //     int n = s.length();
    //     for(int i = n-1; i>=0; i--){
    //         int num = s[i] - '0';
    //         result = result + num*pow(2,(n-i-1));
    //     }

    //     return result;
    // }
      int convertDecimal(string& b) {
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


    string complement(string s){
        string result = "";
        for(char c:s){
            if(c=='0'){
                result += '1';
            }
            else{
                result +='0';
            }
        }
        return result;
    }

      string reverse(string s){
        return string(s.rbegin(), s.rend());
    }

    int binaryConvert(int n){
        string result = "";
      if(n==0){
        result +='0';
      }
        while(n>1){
            int rem = n%2;
            result += to_string(rem);
            n = n/2;
        }
      if(n==1)  result += "1";
        result = reverse(result);
       string newNum = complement(result); 
       return convertDecimal(newNum);
    }

    int bitwiseComplement(int num) {
     int  result = binaryConvert(num);
        return  result;
    }
};