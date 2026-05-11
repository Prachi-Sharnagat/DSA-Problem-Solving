class Solution {
public:
    // long long ceil(int n , int i){
    //    return (n+i-1)/i;
    // }

    long long ceil(int n , int i){
        long long hour = 0;
        long long value = n;
        while(value>0){
            value -= i;
            hour++;
        }
        return hour;
    }
     
   long long func(int bananasPerHour , vector<int> &piles){
        long long totalHour = 0;
        for(int n:piles){
            totalHour += ceil(n,bananasPerHour);
        }

        return totalHour;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        //  int maxElement = INT_MIN;
        //  int n = piles.size();
        // for(int i=0; i<n; i++){
        //    maxElement = max(maxElement, piles[i]);
        // }
        int maxElement = *max_element(piles.begin(),piles.end());
// use to find large elemnt in an array
// i shows 1 banana at 1hr
        for(int i=1; i<= maxElement; i++){
        long long requiredTime = func(i,piles);
            if(requiredTime <= h){
                return i;
            }
        }
        return -1;
     
    }
};

// brute foorce doest work on large data 


class Solution {
public:
    long long ceil(int n , int i){
       return (n+i-1)/i;
    }
     
   long long func(int bananasPerHour , vector<int> &piles){
        long long totalHour = 0;
        for(int n:piles){
            totalHour += ceil(n,bananasPerHour);
        }

        return totalHour;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int maxElement = *max_element(piles.begin(),piles.end());
        int low = 1, high = maxElement;
        while(low<=high){
            int mid = low + (high-low)/2;
              long long requiredTime = func(mid,piles);
            if(requiredTime <= h){
               high = mid - 1;
            }
           else{
                low = mid + 1;
            }
            

        }
        return low;
     
    }
};