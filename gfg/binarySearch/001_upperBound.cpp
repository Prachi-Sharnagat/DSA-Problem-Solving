// if no one then return n which is next index f the present rr
int upperBound_opttmal(vector<int> &arr, int target){
int low = 0;
int high = arr.size() -1;
int curreAns = arr.size();
    while(low<=high){
        
    int mid = low + (high-low)/2;
        if(arr[mid]>target){
            curreAns = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
     
return curreAns;
}



    // method 2 :


int lowerbound_better(vector<int> &arr, int target){
     int ul = upper_bound(arr.begin(),arr.end(),target) - arr.begin();
    return ul;
}