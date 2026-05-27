class Solution{
public:
int numberOfSpecialChar(String word){
   // if upper case come before lower case tehn invalid !invalide(Char)
    unordered_set<char> upper;
    unordered_set<char> lower;
    unordered_set<char> special;
    unordered_set<char> invalid;

    for(char c: word){
        if(islower(c)){
            lower.insert(c);
            if(upper.count(toupper(c))){
                special.erase(toupper(c));
                invalid.insert(toupper(c));
            }
        }
        else{
            upper.insert(c);
            if(lower.count(tolower(c)) && !invalid.count(c)){
                special.insert(c);
            }

        }
    }

    return special.size();

}
};