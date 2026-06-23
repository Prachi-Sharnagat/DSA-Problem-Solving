class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i = 0; i<= n; i++){
            int cnt = 0;
            int num = i;
            while(num!=0){
                num = num & (num-1);
                cnt++;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i = 0; i<= n; i++){
            int cnt = 0;
            int num = i;
            while(num>1){
               cnt += num&1;
                num = num >> 1;
            }
            if(num==1) cnt++;
            ans.push_back(cnt);
        }
        return ans;
    }
};

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i = 0; i<= n; i++){
            int cnt = 0;
            int num = i;
            while(num>1){
                int rem = num%2;
                if(rem){
                    cnt++;
                }
                num /= 2;
            }
            if(num==1) cnt++;
            ans.push_back(cnt);
        }
        return ans;
    }
};