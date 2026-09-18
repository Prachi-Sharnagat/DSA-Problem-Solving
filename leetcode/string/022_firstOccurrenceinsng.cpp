class Solution {
public:
    int strStr(string haystack, string needle) {
        int size = needle.size()- 1;
        int index = -1;
        int j = 0;
        bool firstOcurrence = true;
        for(int i = 0; i<haystack.size(); i++){
            if(haystack[i] == needle[j]){
                if(firstOcurrence){
                    index = i;
                    firstOcurrence = false;
                }
                j++;
                if(j>size){
                    return index;
                }
            }
            else{
                if(index!= -1){
                    i = index;
                }
                j = 0;
                firstOcurrence = true;
                index = -1;
            }
        }

        return -1;
    }
};