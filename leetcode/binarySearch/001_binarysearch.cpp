#include <bits/stdc++.h>
using namespace std;

    int search_iterative(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;    // safer mid

            if (nums[mid] < target) {
                low = mid + 1;
            }
            else if (nums[mid] > target) {
                high = mid - 1;
            }
            else {
                return mid;    // found
            }
        }
        return -1;   // not found
    }

      int search_recursive(vector<int>& nums, int target, int low , int high) {
        if(low>high) return -1;
        int n = nums.size();
       int mid = (low+high)/2;

       if(nums[mid]<target){
           return search_recursive(nums,target,mid+1,high);
       }
       else if(nums[mid]> target){
           return  search_recursive(nums,target,low,mid-1);
       }
        return mid;
       
    }




int main() {

    vector<int> nums = { -1, 0, 3, 5, 9, 12 };
    int target = 9;
    int low = 0;
    int high = nums.size()-1;
    // int index = search_iterative(nums, target); 
    int index = search_recursive(nums, target,low,high); 

    cout << "Index = " << index << endl;

    return 0;
}