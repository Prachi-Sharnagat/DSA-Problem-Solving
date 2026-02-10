#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> Threesum_brute(vector<int> &arr){
    int n = arr.size();
    set<vector<int>> st;
// to make it zero
// sum of all 3 element = 0 
    for(int i=0; i<n; i++){
      
         for(int j = i+1; j<n; j++){
           
            for(int k = j+1; k<n; k++){
              if(arr[i]+arr[j]+arr[k] == 0){
               // sort the triplet 
               vector<int> temp = {arr[i], arr[j], arr[k]};
               sort(temp.begin(), temp.end());
               st.insert(temp);
              } 

            }

         }

    }

    return vector<vector<int>> (st.begin(), st.end());
}

vector<vector<int>> ThreeSum_better(vector<int> &arr){

    int  n = arr.size();
    set<vector<int>> ans;
    for(int i=0; i<n; i++){
        set<int> hashset;
        for(int j=i+1; j<n; j++){

            for(int k=j+1; k<n;  k++){
                long long fourth = target - (arr[i]+arr[j]+arr[k]);
                if(hashset.find(fourth)!=hashset.end()){
                    vector<int> temp = {arr[i], arr[j], arr[k], fourth};
                    sort(temp.begin(), temp.end());
                    ans.insert(temp);
                }
                hashset.insert(arr[k]);
            }
            

        }

    }

    vector<vector<int>> result(ans.begin(), ans.end());
    return result;
}

vector<vector<int>> ThreeSum_optimal(vector<int> &nums){

     int  n = nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end()); // already sorted 
    for(int i=0; i<n; i++){
        if(i>0 && nums[i] == nums[i-1]){
            continue; // next pass 
        }
        int j = i + 1;
        int k = n-1;  
       while(j<k){
            int sum = nums[i] +  nums[j] + nums[k];
            if(sum < 0){ 
                j++;
            }
            else if (sum > 0){
                k--;
            }
            else{
                vector<int> temp = {nums[i], nums[j], nums[k]};
                ans.push_back(temp);
                j++;
                k--;
               while(j< k && nums[j]== nums[j-1]) j++;
               while(j < k && nums[k] == nums[k+1]) k--;
            }
        }
    }
    return ans;

}







int main(){
    int size;
    cin >> size;
    vector<int> arr(size);
    for(int i=0; i<size; i++){
        cin >> arr[i]; 
    }
// vector<vector<int>> ans = Threesum_brute(arr);
// vector<vector<int>> ans = ThreeSum_better(arr);
vector<vector<int>> ans = ThreeSum_optimal(arr);

for (int i = 0; i < ans.size(); i++) {
    for (int j = 0; j < ans[i].size(); j++) {
        cout << ans[i][j] << " ";
    }
    cout << endl; // for next triplet
}

    return 0;
}