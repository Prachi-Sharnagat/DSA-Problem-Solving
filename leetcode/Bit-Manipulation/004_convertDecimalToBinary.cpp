class Solution {
  public:
    string reverse(string s){
        
        return string(s.rbegin(), s.rend());
    }
    string decToBinary(int n) {
        // code here
        string result = "";
        if(n==0){
            return "0";
        }
        while(n>1){
            int rem = n%2;
            result += to_string(rem);
            n = n/2;
        }
        result += "1";
        return reverse(result);
    }
};