class Solution {
public:
// char add then use push_back 
// position insert(position, value)
// string or char add the use result += c
    string duplicate(string s){

        string result = s;
        result.insert(result.size(),s);
        return result;
    }

    string reverse(string s){
        // string result;
        // for(int c = s.length()-1; c>=0; c--){
        //    result += s[c];
        // }
        return string(s.rbegin(),s.rend());
    }

    string lastCharRemove(string s){
        if(s.empty()){
            return s;
        }
        s.pop_back(); 
        // it return void
        return s;
    }

    string processStr(string s) {
        string result = "";
        for(char c:s){
            if(c=='#'){
               result = duplicate(result);
            }
            else if(c=='%'){
                result = reverse(result);
            }
            else if(c=='*'){
                result = lastCharRemove(result);
            }
            else{
               result.push_back(c);
            }
        }
        
        return result;
    }
};