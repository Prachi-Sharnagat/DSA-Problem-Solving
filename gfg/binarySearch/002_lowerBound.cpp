int lowerBound_brute(vectorint> &nums, int target){
    int n = nums.size();
    for(int i=0;i<n; i++){
        if(nums[i]>= target){
            return i;
        }
    }
    return -1;
} // linear approach

// sorted then use binary search 

// if no one then return n which is next index f the present rr
int lowerBound_opttmal(vector<int> &arr, int target){
int low = 0;
int high = arr.size() -1;
int curreAns = arr.size();
    while(low<=high){
        
    int mid = low + (high-low)/2;
        if(arr[mid]>=target){
            curreAns = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
     
return curreAns;
}

int lowerbound_better(vector<int> &arr, int target){
   int  lb = lower_bound(arr.begin(),arr.end(),target)- arr.begin();
    return lb;
}

