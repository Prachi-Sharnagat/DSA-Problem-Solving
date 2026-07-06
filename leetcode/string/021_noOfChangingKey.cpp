class Solution {
public:
    int countKeyChanges(string s) {
        int n = s.length();
        int cnt = 0;
        for(int i=0; i<n; i++){
            if(i== (n-1)){
                break;
            }

            if(abs(s[i] - s[i+1]) != 32 && (s[i] - s[i+1]) != 0 ){
                cnt++;
            }
        }

        return cnt;
    }
};