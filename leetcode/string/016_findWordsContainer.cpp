class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int indices = -1;
        vector<int>  ans;
        for(auto n:words){
            indices += 1;
            if(n.find(x)!= string::npos){
                ans.push_back(indices);
            }
        }
        return ans;
    }
};