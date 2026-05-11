#include<bits/stdc++.h>
using namespace std;

int nthRoot(int n, int m){
    // n= 3 m = 27 then 1*1*1 = 1  2**3= 8 3**3 = 27  yes exist in 3 consider 28 then 4**3= 64 break 
    if(m==0) return 0;
    
    for(int i=1; i<=m; i++){
        long long check = 1;
        for(int j= 1; j<=n; j++){
            check *= i;
            if(check > m){
                break;
            }
        }
        if(check==m){
            return i;
        }
        if(check > m){
            break;
        }
    }

    return -1;
}
class Solution {
  public:
    int nthRoot_binarysearch_better(int n, int m){
    int low = 1, high = m;
    if(m==0) return 0;
    
    while(low<=high){
        int mid = low + (high-low)/2;
        int check = 1;
        for(int i=1; i<=n; i++){
            check *= mid;
            if(check > m) break;
    }
    if(check == m){
      return mid;
    }
    else if(check > m){
        high = mid - 1;
    }
    else{
        low = mid + 1;
    }
    
    }
    
    return -1;
}
};

class Solution {
public:

    long long power(long long base, int exp, int m) {

        long long ans = 1;

        while(exp > 0) {

            // odd power
            if(exp % 2 == 1) {
                ans *= base;

                // overflow check
                if(ans > m) return ans;
            }

            base *= base;

            // overflow check
            if(base > m) base = m + 1;

            exp /= 2;
        }

        return ans;
    }

    int nthRoot(int n, int m) {

        if(m == 0) return 0;
        if(m == 1) return 1;

        int low = 1;
        int high = m;

        while(low <= high) {

            int mid = low + (high - low) / 2;

            long long val = power(mid, n, m);

            if(val == m) {
                return mid;
            }

            else if(val < m) {
                low = mid + 1;
            }

            else {
                high = mid - 1;
            }
        }

        return -1;
    }
};



int main(){
    int n, m;
    cin >> n >> m;
    int ans = nthRoot(n,m);
    cout << ans;
    return 0;
}

