#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};

int main() {

    vector<char> s = {'h','e','l','l','o'};

    Solution obj;
    obj.reverseString(s);
    cout << "[ ";
    for(char c : s){
        cout << "'" << c << "'" << " ";
    }
    cout << "]" << endl;

    return 0;
}