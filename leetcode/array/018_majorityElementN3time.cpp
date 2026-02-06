#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement_brute(vector<int> &arr)
{
    // o(n**2)
    int n = arr.size();
    int check = n / 3;

    set<int> st;           // final answers
    set<int> processed;    // tracks visited elements

    for (int i = 0; i < n; i++)
    {
        int element = arr[i];

        // skip if already processed
        if (processed.find(element) != processed.end())
            continue;

        processed.insert(element);

        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if (arr[j] == element)
                count++;
        }

        if (count > check)
            st.insert(element);

         if(st.size()==2){
                break;
            }
    }

    return vector<int>(st.begin(), st.end());
}
// tc -> o(n)
// sc -> o(n)
vector<int> majorityElement_better(vector<int> &arr){
    map<int,int> mpp;
    vector<int> list;
    int n = arr.size();
    int mini = (n/3)+1;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
        if(mpp[arr[i]] == mini)
{
            list.push_back(arr[i]);
        }
        if(list.size()==2) break;
    }
// 2 array sort 2log2 
    sort(arr.begin(),arr.end());
    return list;
}

// tc -> o(2n)
// sc -> o(2) // for storing 2 element 
vector<int> majorityElement_optimal(vector<int> &nums){
    vector<int> ans;
    int n = nums.size();
    int cnt1 = 0, cnt2 =0;
    int elm1 = INT_MIN, elm2 = INT_MIN;
    // int previous1 = elem1;

    for(int i=0; i<n; i++){
        if(cnt1 == 0 && nums[i]!= elm2){
            cnt1 = 1;
            elm1 = nums[i];
        }
        else if(cnt2==0 && nums[i]!=elm1){
            cnt2 = 1;
            elm2 = nums[i];
        }
        else if(elm1 == nums[i]) cnt1++;
         else if(elm2 == nums[i]) cnt2++;
         else{
            cnt1--;
            cnt2--;
         }
    }

    int checkCount1 = 0, checkCount2 = 0;
    for(int i=0; i<n; i++){
        if(nums[i] == elm1)  checkCount1++;
        else if(nums[i]==elm2) checkCount2++;
    }
    int mini = (n/3) + 1;
    if(checkCount1 >= mini) {
        ans.push_back(elm1);
    }
    if(checkCount2 >= mini){
        ans.push_back(elm2);
    }

    if(ans.size()==0){
        return {0};
    }
    // sort 2log2
    sort(ans.begin(),ans.end());
    return ans;
}


int main()
{
    int size;
    cin >> size;

    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // vector<int> ans = majorityElement_better(arr);
    // vector<int> ans = majorityElement_optimal(arr);
    //  for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }

    int ans = majorityElement_better2(arr);
    cout << ans;
    return 0;
}