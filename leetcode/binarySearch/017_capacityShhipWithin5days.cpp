
class Solution {
public:
    int calculate(vector<int> &weight, int capacity){
        int totalDay = 0;
        int left = capacity;
        for(int n:weight){
        if(left>=n){
            left -= n;
        }
        else{
            totalDay++;
            left = capacity;
            left -= n;
        }
        }
        totalDay++;
        return totalDay;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        // capacity should be >= maxElement
        int maxElement = *max_element(weights.begin(),weights.end());
        int totalSum = 0;
        for(auto n:weights){
            totalSum += n;
        }
        int low = maxElement , high = totalSum;     
        while(low<=high){
            // capacity
            int mid = low + (high-low)/2;
            int calDays = calculate(weights,mid);
            if(calDays <= days){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }  
        return low;
    }
};