#include<bits/stdc++.h>
using namespace std;

int firstUniqueFreq(vector<int>& nums) {




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
    int ans = firstUniqueFreq(arr);
 cout << ans;

    return 0;


}
