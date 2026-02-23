#include<bits/stdc++.h>
using namespace std;
// 2588 que in leertcode : count the no of beautiful subarray 
long long countSubarrayXorK_brute(vector<int> &nums, int target){
int n = nums.size();
long long count = 0;
for(int i=0; i<n; i++){
    for(int j = 0; j<n; j++){
        int xr = 0;
        for(int k = i; k<=j; k++){
            xr ^= nums[k];
        }
          if(xr == target){
           count++;
        }
        }   
    }
    return count;
}

long long countSubarrayXorK_better(vector<int> &nums, int target){
    int n = nums.size();
    long long count = 0;
    for(int i=0; i<n; i++){
        int xr = 0;
        for(int j= i; j<n; j++){
            xr ^= nums[j];
             
           
            if(xr == target){
                count++;
            }
            
        }
    }

    return count;

}



int main(){
    int size;
    cin >> size;
    vector<int> arr(size);
    for(int i=0; i<size; i++){
        cin >> arr[i]; 
    }
    int target; 
    cin >> target ;
//    int ans  = countSubarrayXorK_brute(arr, target);
   int ans  = countSubarrayXorK_better(arr, target);
   cout << ans;

    return 0;
}