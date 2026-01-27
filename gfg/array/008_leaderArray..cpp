
#include <bits/stdc++.h>
using namespace std;

    vector<int> leaders_brute(vector<int>& arr) {
        int n = arr.size();
        vector<int> result;
        for(int i=0; i<n; i++){
            int leader = arr[i];
            bool isLeader = true;
            for(int j=i+1; j<n; j++){
                if(leader < arr[j]){
                    isLeader = false;
                    break;
                }
            }
            if(isLeader){
                result.push_back(arr[i]);
            }
        }
        
        return result;
        
    }

// just greater than situation :
    vector<int> leader_optimal(vector<int> &arr){
     
        int n = arr.size();
        int maxi = INT_MIN;
        vector<int> result;
        for(int i=n-1; i>=0; i--){
            if(maxi < arr[i]){
                result.push_back(arr[i]);
                maxi = max(arr[i],maxi);
            }
        }
        reverse(result.begin(), result.end());
        return result;
        
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
//  vector<int> ans = leaderArray_brute(arr);
 vector<int> ans = leader_optimal(arr);

    for(auto it:ans){
        cout << it << "  ";
    }

    return 0;
}
