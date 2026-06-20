class Solution {
public:
    string reverse(string s){
        
        return string(s.rbegin(), s.rend());
    }
    string decToBinary(int n) {
        // code here
        string result = "";
        if(n==0){
          return string(32, '0');
        }
        int cnt = 1;
        while(n>1){
            int rem = n%2;
            result += to_string(rem);
            n = n/2;
            cnt++;
        }
        result += "1";
        while(cnt<32){
            result += '0';
            cnt++;
        }
        return reverse(result);
    }

    int hammingDistance(int x, int y) {

    string a = decToBinary(x);
    string b = decToBinary(y);
    int countBits = 0;
    for(int i=0; i<32; i++){
        if(a[i]!= b[i]){
            countBits++;
        }
    }
        return countBits;
    }
};