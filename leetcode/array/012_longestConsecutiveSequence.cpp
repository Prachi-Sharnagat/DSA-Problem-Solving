
#include <bits/stdc++.h>
using namespace std;

bool linearSearch(vector<int> &arr, int num)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            return true;
        }
    }
    return false;
}

int longestConsectiveNum_brute(vector<int> &nums)
{

    int n = nums.size();
    int longest = 1;
    // tc -> o(n);
    for (int i = 0; i < n; i++)
    {
        int cnt = 1;
        int x = nums[i];
        while (linearSearch(nums, x + 1) == true)
        {
            cnt++;
            x = x + 1;
        }
        longest = max(longest, cnt);
    }
    return longest;
}

int longestConsectiveNum_better(vector<int> &nums)
{
    if (nums.size() == 0)
        return 0;
    int longest = 1;
    int cntCurr = 0;
  
    int n = nums.size();
    sort(nums.begin(), nums.end());
  int lastSmaller = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] - 1 == lastSmaller)
        {
            lastSmaller = nums[i];
            cntCurr++;
        }
        else if (nums[i] != lastSmaller)
        {
            cntCurr = 1;
            lastSmaller = nums[i];
        }
        longest = max(longest, cntCurr);
    }

    return longest;
}

int longestConsectiveNum_optimal(vector<int> &nums)
{
    if (nums.size() == 0)
        return 0;
   int n = nums.size();
   set<int> st;
   int longest = 1;
  for(int i=0; i<n; i++){
    st.insert(nums[i]);
  }

  for(auto it:st){
    if(st.find(it-1)==st.end()){
        int cnt = 1;
        int x = it;
        while(st.find(x+1)!=st.end()){
            x = x+1;
            cnt++;
        }
        longest = max(longest,cnt);
    }
  }
return longest;


}
// ---------------------------------------------------------
// MAIN FUNCTION
// ---------------------------------------------------------
int main()
{
    int size;
    cin >> size;

    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    //  int ans = longestConsectiveNum_brute(arr);
    // int ans = longestConsectiveNum_better(arr);
    int ans = longestConsectiveNum_optimal(arr);
    cout << ans;
    return 0;
}
