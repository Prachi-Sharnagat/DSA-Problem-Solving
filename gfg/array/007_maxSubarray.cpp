/*
Given an array of integers arr[], find the contiguous subarray with the maximum sum that contains only non-negative numbers. If multiple subarrays have the same sum, return the one with the smallest starting index. If the array contains only negative numbers, return -1.
*/

// not solved 



// #include <bits/stdc++.h>
// using namespace std;

// vector<int> maxSubarray_optimiseWithPrinting(vector<int> &arr){
// int sum = 0;
// int mx = INT_MIN;
// int start = 0;
// int startArray = 0;
// int endArray = 0;
// bool allNegative = true;

// for(int x:arr){
//     if(x>=0){
//         allNegative = false;
//         break;
//     }
// }

// if(allNegative){
//     return {-1};
// }

//  for(int i=0; i<arr.size(); i++){
//     if(sum == 0) start = i;

//     if(arr[i] <= 0){
//         sum = 0;
        
//     }
//     else{
//  sum += arr[i];
//     }
   
    
//     if (sum > mx ) {
//         mx = sum;
//       startArray = start;
//      endArray = i;
//     }
    
//     if(sum < 0){
//         sum = 0;
//     }
//  }  
//  cout << mx <<  endl;
//  vector<int> it;
//  for(int i = startArray; i<=endArray; i++){
//     it.push_back(arr[i]);
//  }

//  return it;


// }

// // ---------------------------------------------------------
// // MAIN FUNCTION
// // ---------------------------------------------------------
// int main() {
//     int size;
//     cin >> size;

//     vector<int> arr(size);
//     for(int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }

//     // Choose any function:
//     // int ans = maxSubarray_brute(arr);
//     // int ans = maxSubarray_better(arr);
   
//  vector<int> ans = maxSubarray_optimiseWithPrinting(arr);

//     for(auto it:ans){
//         cout << it << " ";
//     }

//     return 0;
// }
