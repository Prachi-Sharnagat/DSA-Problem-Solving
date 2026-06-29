public : 
class Solution {

    int noOfString(vector<int> &pattern, string word){
        int cnt = 0;
        // string::npos -> if  the substring not found
        // if found : return index 
        
        for(auto n : pattern){
            if(word.find(n)!= string::npos){
                cnt++;
            }
        }
        return cnt;
    }
};