#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        vector<int> ans;

        // Count frequency of nums1
        for(int x : nums1)
            mp[x]++;

        // Match with nums2
        for(int x : nums2){
            if(mp[x] > 0){
                ans.push_back(x);
                mp[x]--;
            }
        }
        return ans;
    }
};

int main() {
    int n1, n2;

    cout << "Enter size of nums1: ";
    cin >> n1;
    vector<int> nums1(n1);

    cout << "Enter elements of nums1: ";
    for(int i = 0; i < n1; i++)
        cin >> nums1[i];

    cout << "Enter size of nums2: ";
    cin >> n2;
    vector<int> nums2(n2);

    cout << "Enter elements of nums2: ";
    for(int i = 0; i < n2; i++)
        cin >> nums2[i];

    Solution obj;
    vector<int> result = obj.intersect(nums1, nums2);

    cout << "Intersection result: [ ";
    for(int x : result)
        cout << x << " ";
    cout << "]" << endl;

    return 0;
}