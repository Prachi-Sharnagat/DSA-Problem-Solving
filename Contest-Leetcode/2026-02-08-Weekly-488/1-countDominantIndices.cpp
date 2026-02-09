#include<bits/stdc++.h>
using namespace std;

  int dominantIndices_brute(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for(int i=0; i<n-1; i++){
            int sum = 0;
         for(int j=i+1; j<n; j++){
             sum += nums[j];
         }
            int avg = sum / (n-i-1);
            if(nums[i] > avg){
                count ++;
            }
        }
        return count ;
    }

    int dominantIndices_optimal(vector<int> & nums){
        int n = nums.size();
        int count =0, totalSum = 0;

        for(int i=0; i<n; i++){
            totalSum +=nums[i];           
        }

        for(int i=0; i<n-1; i++){
            totalSum -= nums[i];
            int avg = totalSum / (n-i-1);
            if(nums[i] > avg){
                count ++;
            }
        }
        return count;
    }

int main(){
    int size;
    cin >> size;

    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    // int ans = dominateIndices_brute(arr);
    int ans =dominantIndices_optimal(arr);

    cout << ans;
    return 0;


}