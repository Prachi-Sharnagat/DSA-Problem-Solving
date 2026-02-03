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

    sort(arr.begin(),arr.end());
    return list;
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

    vector<int> ans = majorityElement_better(arr);
     for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}