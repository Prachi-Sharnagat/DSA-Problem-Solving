#include<bits/stdc++.h>
using namespace std;

  vector<long long> mergeAdjacentEqual_optimal(vector<long long> &nums){
    int n = nums.size();
    vector<long long> res;

    for(int i=0; i<n; i++){
      long long curr = nums[i];
      while(res.size() &&  res.back()== curr){
        res.pop_back();
        curr = 2*curr;
      }
      res.push_back(curr);
    }
    return res;
  }

  // using stack we can do it --> push and pop opertion 



                  
int main(){
    int size;
    cin >> size;

    vector<long long> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

vector<long long> ans = mergeAdjacentEqual_optimal(arr);
    
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;


}