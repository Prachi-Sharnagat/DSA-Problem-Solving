#include <iostream>
#include <vector>
using namespace std;

vector<int> searchRangeBrute(vector<int>& nums, int target) {
    int first = -1, last = -1;

    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == target){
            if(first == -1) first = i;
            last = i;
        }
    }

    return {first, last};
}

vector<int> searchRangeOptimal(vector<int>& nums, int target) {

    int first = -1, last = -1;
    int low = 0, high = nums.size() - 1;

    while(low <= high){
        int mid = low + (high - low)/2;

        if(nums[mid] == target){
            first = mid;
            high = mid - 1;
        }
        else if(nums[mid] > target) high = mid - 1;
        else low = mid + 1;
    }

    low = 0;
    high = nums.size() - 1;

    while(low <= high){
        int mid = low + (high - low)/2;

        if(nums[mid] == target){
            last = mid;
            low = mid + 1;
        }
        else if(nums[mid] > target) high = mid - 1;
        else low = mid + 1;
    }

    return {first, last};
}

int main() {

    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;

    vector<int> ans1 = searchRangeBrute(nums, target);
    vector<int> ans2 = searchRangeOptimal(nums, target);

    cout << "Brute: " << ans1[0] << " " << ans1[1] << endl;
    cout << "Optimal: " << ans2[0] << " " << ans2[1] << endl;
}