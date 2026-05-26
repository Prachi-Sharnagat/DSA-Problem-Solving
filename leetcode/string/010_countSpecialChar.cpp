class Solution{
public:
int numberOfSpecialChar(String word){
    // abAaaBcCdE ==> 3 
    unordered_set<char> lower;
    unordered_set<char> upper;

    for(char c:word){
        if(islower(c)){
            lower.insert(c);
        }
        else{
            upper.insert(c);
        }
    }

    int cnt = 0;
    for(char c : lower){
        if(upper.count(toupper(c))){
            cnt++;
        }
    }


    return cnt;
}
};