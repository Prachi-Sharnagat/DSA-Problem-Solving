
#include <bits/stdc++.h>
using namespace std;

    vector<int> rearrangeArray_brute(vector<int>& nums) {
       
        int n = nums.size();
        vector<int> pos;
        vector<int> neg;

        // o(n) + o(n/2)-> tc and o(n)-> sc

        for(int i=0; i<n; i++ ){
            if(nums[i]>=0){
                pos.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }

        for(int i=0; i<n/2; i++){
            nums[2*i] = pos[i]; 
              nums[2*i+1] = neg[i];
        }
        return nums;
    }

    vector<int> rearrangeArray_better(vector<int> &nums){
        int n = nums.size();
        vector<int> ans(n,0);
        int posIndex = 0, negIndex = 1;
// o(n)--> tc and o(n)-> sc
        for(int i=0; i<n; i++){
            if(nums[i]<0){
                ans[negIndex] = nums[i];
                negIndex +=2;
            }
            else{
                ans[posIndex] = nums[i];
                posIndex +=2;
            }
        }
        return ans;

    }
    
    // type 2 positive != negative 
    // put extra in last 
    // tc --> o(N) + o(min(pos, neg))+ o(leftover);
   // tc -> worst -> o(2n)
    // sc -> o(n);
    vector<int> rearrangeArray_brute2(vector<int> &nums){
        int n = nums.size();
        vector<int> pos;
        vector<int> neg;


        for(int i=0; i<n; i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }
            else{
                pos.push_back(nums[i]);
            }
        }
        int leng = min(pos.size(),neg.size());

        for(int i=0; i<leng; i++){
            nums[2*i] = pos[i]; 
              nums[2*i+1] = neg[i];
        } 
        
        int index = leng;

//  extra element start from 2* leng since post + neg = 2leng

        for(int i= 2*leng; i<n; i++){
            if(pos.size()>neg.size()){
                nums[i]  = pos[index];
            }
            else{
                nums[i] = neg[index];
            }
            index++;
        }
        return nums;

    }
    

// ---------------------------------------------------------
// MAIN FUNCTION
// ---------------------------------------------------------
int main() {
    int size;
    cin >> size;

    vector<int> arr(size);
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
   
//  vector<int> ans = rearrangeArray_brute(arr);
//  vector<int> ans = rearrangeArray_optimise(arr);
 vector<int> ans = rearrangeArray_brute2(arr);

    for(auto it:ans){
        cout << it << "  ";
    }

    return 0;
}
