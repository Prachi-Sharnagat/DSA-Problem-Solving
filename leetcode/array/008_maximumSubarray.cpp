
#include <bits/stdc++.h>
using namespace std;

int maxSubarray_brute(vector<int> &arr){
    int mx = INT_MIN;
    for(int i=0; i<arr.size(); i++){
        
        for(int j= i; j<arr.size(); j++){
            int sum =0;
            for(int k = i; k<=j; k++){
                sum += arr[k];
            }
            mx = max(mx, sum);
        } 
    } return mx;
} 

int maxSubarray_better(vector<int> &arr){

    int mx = INT_MIN;
    for(int i=0; i<arr.size(); i++){
      int sum = 0; 
        for(int j=i; j<arr.size(); j++){
            sum +=arr[j]; 
            mx = max(mx, sum);
        }        
    }
    return mx;
}

int maxSubarray(vector<int> &arr){

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

    // Choose any function:
    // int ans = maxSubarray_brute(arr);
    int ans = maxSubarray_better(arr);

    cout << ans;

    return 0;
}
