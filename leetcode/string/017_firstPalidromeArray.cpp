class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        // string ans;
        for(int i=0; i<words.size(); i++){
        string original = words[i];
        bool palindromic = true;
        int left = 0, right = original.length()-1;    

        while(left<=right){
            if(original[left]!=original[right]){
                palindromic = false;
                break;
            }
            else{
                left++;
                right--;
            }
        }
        if(palindromic){
            return original;
        }

        }
       
       return "";
        
    }
};