#include<cmath>
class Solution {
public:

    int calculate(vector<int> &nums, int divisor){
        int sum = 0;
        for(int n : nums){
            int value = ceil(double(n)/divisor);
            sum += value;
        }
        return sum;

    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int maxElement = *max_element(nums.begin(),nums.end());
        int low = 1, high = maxElement;
        while(low<=high){
            // divisor
            int mid = low + (high-low)/2;
            int total = calculate(nums,mid);
            if(total<=threshold){
                high = mid - 1;
            } 
            else{
                low = mid + 1;
            }
        }
    return low;
        
    }
};


// brute force 

class Solution {
  public:
    int calculate(vector<int> &arr, int divisor){
        int totalSum = 0;
        for(int n:arr){
            int value = ceil(double(n)/divisor);
            totalSum += value;
        }
        
        return totalSum;
    }
    int smallestDivisor(vector<int>& arr, int k) {
        // Code here
        int n = arr.size();
        int maxElement = *max_element(arr.begin(),arr.end());
        for(int i=1; i<=maxElement; i++){
            int total = calculate(arr,i);
            if(total <= k){
                return i;
            }
        }
        
        return -1;
    }
};