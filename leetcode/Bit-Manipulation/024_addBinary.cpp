class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length() - 1;
        int j = b.length()-1;

        if(i>j){
            while(j<i){
                b.insert(0, "0");
                j++;
            }
        }
        else{
            while(i<j){
                a.insert(0, "0");
                i++;
            }
        }

        string num = "";
        int carry = 0;
      while(i>=0){
        int sum = (a[i] - '0')+ (b[j] -'0') + carry;
        num += (sum%2) + '0';
        carry = sum/2; 
        i--;
        j--;
      }
      if(carry){
        num += "1";
      }

       reverse(num.begin(), num.end());
       return num;
    }
};