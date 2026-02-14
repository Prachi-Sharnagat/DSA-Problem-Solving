#include<bits/stdc++.h>
using namespace std;

int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        
        for(int i=0; i<n; i++){
            int curr = nums[i];
            int isEven = 0;
            int digit = curr;
            while(digit>0){
                digit = digit/10;
                isEven++;
            }
            if(isEven%2==0){
                count ++;
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

    int ans = findNumbers(arr);
    cout << ans;
    return 0;
}