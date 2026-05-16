class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
    int totalApple = 0;
    for(int n:apple){
        totalApple += n;
    }

    sort(capacity.begin(),capacity.end(),greater<int>());
    int currCapacity = 0;
    int count = 0;

    for(int box:capacity){
        currCapacity += box;
        count++;
        if(currCapacity >= totalApple){
            return count;
        }
    }

    return count;
    }
};