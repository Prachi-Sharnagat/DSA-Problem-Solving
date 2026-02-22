#include <bits/stdc++.h>
using namespace std;

int scoreDifference(vector<int>& nums) {
    int n = nums.size();
    int first = 0, second = 0;
    bool firstCheck = true;

    for(int i = 0; i < n; i++) {

        if(nums[i] % 2 != 0) {
            firstCheck = !firstCheck;
        }

        if((i + 1) % 6 == 0) {
            firstCheck = !firstCheck;
        }

        if(firstCheck) {
            first += nums[i];
        } else {
            second += nums[i];
        }
    }

    return first - second;
}

int main() {
     int size;
    cin >> size;
    vector<int> arr(size);
    for(int i=0; i<size; i++){
        cin >> arr[i]; 
    }
    cout << scoreDifference(nums);

    return 0;
}