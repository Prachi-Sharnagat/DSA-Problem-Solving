class Solution {
public:
    string decToBin(int n){
        if(n==0){
            return "0";
        }
        string s = "";
        
        while(n>1){
            int rem = n%2;
            s += to_string(rem);
            n = n/2;
        }
        s += '1';
        return string(s.rbegin(), s.rend());
    }

    int hammingWeight(int n) {
        //no of set bits
        int  cnt = 0;
        string s = decToBin(n);
        for(int i = 0; i<s.length(); i++){
            if(s[i]=='1') cnt++;
        }        

        return cnt;
    }
};