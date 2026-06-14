class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans = "";
        for(int i=0; i<words.size(); i++){
             int total = 0;
            for(char s : words[i]){
               total += weights[s-'a'];
            }
            ans.push_back(122 - (total%26));
            
        }
        return ans;
    }
};