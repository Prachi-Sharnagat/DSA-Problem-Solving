#include<bits/stdc++.h>
using namespace std;
// 20 20 10 30 
// first unique count return 
int firstUniqueFreq(vector<int>& nums) {
   unordered_map<int,int> mpp;
   unordered_mpp<int,int> frequencyCount;

   for(int x:nums){
    mpp[x]++;
   }

   for(int x:mpp){
        frequencyCount[x.second]++;
   }

   for(int x:nums){
    if(frequencyCount[mpp[x]]==1){
        return x;
    }
   }
   return -1;



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
    int ans = firstUniqueFreq(arr);
 cout << ans;

    return 0;


}
