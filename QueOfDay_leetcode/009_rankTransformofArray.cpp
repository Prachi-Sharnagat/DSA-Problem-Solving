class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if(arr.empty()){
            return {};
        }
        unordered_map<int,int> rank;
        vector<int> temp = arr;
        sort(temp.begin(), temp.end());
        int currRank = 1;
        rank[temp[0]] = currRank;
        for(int i=1; i<temp.size(); i++){
            if(temp[i] != temp[i-1]){
              rank[temp[i]] = ++currRank;
            }
            else{

            }
        }

        for(int i=0; i<arr.size(); i++){
            arr[i] = rank[arr[i]];
        }

        return arr;
    }
};