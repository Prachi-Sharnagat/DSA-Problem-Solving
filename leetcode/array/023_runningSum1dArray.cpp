#include<bits/stdc++.h>
using namespace std;


vector<int> runningSum(vector<int>& nums) {
        vector<int> arr;
        int n = nums.size();

        for(int i=0; i<n; i++){
            int curr = nums[i];
            long long sum = 0;
            for(int j=0; j<=i; j++){
                sum += nums[j];
            }
            arr.push_back(sum);
        }
        

        return arr;
    }

    int main(){
    int size;
    cin >> size;
    vector<int> arr(size);
    for(int i=0; i<size; i++){
        cin >> arr[i]; 
    }

    vector<int> ans = runningSum(arr);
        for(int i=0; i<size; i++){
        cout <<  ans[i]; 
    }
    return 0;
}