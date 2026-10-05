// a = 26, b = 25, c = 24..................z = 1

class Solution{
    public:
    int reverseString(string s){
        int sum = 0;
        int index = 1;
        for(auto ch :  s){
            sum = sum + ('z' - ch + 1)*index;
            index++; 
        }

        return sum;
    }
}