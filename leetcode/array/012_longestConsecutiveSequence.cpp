
#include <bits/stdc++.h>
using namespace std;

bool linearSearch(vector<int> &arr, int num) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            return true;
        }
    }
    return false;
}

int longestConsectiveNum_brute(vector<int> &nums){

    int n = nums.size();
    int longest = 1;
   // tc -> o(n);
    for(int i=0; i<n; i++){
         int cnt = 1;
       int x = nums[i];
        while(linearSearch(nums,x+1) == true){
          cnt++;
            x = x+1;
        }
        longest = max(longest,cnt);
      
    }
      return longest;
}


int longestConsectiveNum_better(vector<int> &nums){

    int n = nums.size();
    int longest = 1;
    sort(nums.begin(), nums.end());
    



    return longest;
   
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
//  int ans = longestConsectiveNum_brute(arr);
 int ans = longestConsectiveNum_better(arr);
cout << ans;
    return 0;
}
