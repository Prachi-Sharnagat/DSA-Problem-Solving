
class Solution {
public:
    string toLowerCase(string s) {
     
        // string result = "";
        for(int i=0; i<s.length(); i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                 s[i] += 32;
            }
        }

        return s;
    }
};

class Solution {
public:
    string toLowerCase(string s) {
     
        string result = "";
        for(int i=0; i<s.length(); i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                 result += (char)(s[i]+32);
            }
            else{
                result += s[i];
            }
           
        }

        return result;
    }
};