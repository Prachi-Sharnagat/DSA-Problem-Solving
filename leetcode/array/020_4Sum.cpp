#include<bits/stdc++.h>
using  namespace std;

vector<vector<int>> FourSum_brute(vector<int> &nums, int target){
    int n = nums.size();
    set<vector<int>> ans;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k= j+1; k<n; k++){

                for(int l= k+1; l<n; l++){
                 long long sum = long long(nums[i]) + nums[j] + nums[k] + nums[l];
                    if(sum == target){
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                        sort(temp.begin(), temp.end());
                        ans.insert(temp);
                    }

                }
            }
        }
    }
    return vector<vector<int>> (ans.begin(), ans.end());
}

vector<vector<int>> FourSum_better(vector<int> &nums, int target){
    int n = nums.size();
    set<vector<int>> ans;

    for(int i=0; i<n; i++){

        for(int j=i+1; j<n; j++){

            for(int k= j+1; k<n; k++){

                
            }
        }
    }



    return vector<vector<int>> (ans.begin(), ans.end());
}



int main(){
    int size;
    cin >> size;
    vector<int> arr(size);
    for(int i=0; i<size; i++){
        cin >> arr[i]; 
    }
    int target; 
    cin >> target ;
    vector<vector<int>> ans = FourSum_brute(arr, target);
    // vector<vector<int>> ans = FourSum_better(arr);
    // vector<vector<int>> ans = FourSum_optimal(arr, target);


for (int i = 0; i < ans.size(); i++) {
    for (int j = 0; j < ans[i].size(); j++) {
        cout << ans[i][j] << " ";
    }
    cout << endl; // for next triplet
}

    return 0;
}