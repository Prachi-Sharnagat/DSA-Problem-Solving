class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> times(26,0);
        for(auto n:s){
            times[n-'a']++;
        }

        for(int i=0; i<s.length(); i++){
            if(times[s[i]-'a'] == 1){
                return i;
            }
        }
        return -1;
    }
};