class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        string s = "123456789";

        for (int len = 2; len <= 9; len++) {          // length of number
            for (int i = 0; i + len <= 9; i++) {      // starting index
                int num = stoi(s.substr(i, len));

                if (num >= low && num <= high)
                    ans.push_back(num);
            }
        }


 
        return ans;
    }
};