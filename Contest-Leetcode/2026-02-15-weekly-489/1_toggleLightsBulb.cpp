#include<bits/stdc++.h>
using namespace std;

vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<int> ans;
        int n = bulbs.size();
        set<int> st;
        for(int i=0; i<n; i++){
            int count = 0;
            int curr = bulbs[i];
            for(int j=0; j<n; j++){
             if(st.find(curr)== st.end() && curr==bulbs[j]){
                 count++;
             }
            }
            if(count%2!=0){
               st.insert(curr);
               ans.push_back(curr);
            }
          
        }
        sort(ans.begin(), ans.end());
        return ans;
    }


    
int main(){
    int size;
    cin >> size;

    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    // int ans = dominateIndices_brute(arr);
    vector<int> ans =toggleLightBulbs(arr);
for (int i = 0; i < ans.size(); i++)
    {
       cout << ans[i] << " ";
    }

    return 0;


}


