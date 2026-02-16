
#include <bits/stdc++.h>
using namespace std;
int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        int maxCount = INT_MIN;

        for(int i=0; i<n; i++){
            int count = 0;
            string s = sentences[i];
        for(int j=0; j<s.length(); j++){
            if(s[j]==' ') count++;
        }
        maxCount = max(count, maxCount);
        }
        return maxCount+1;
    }

    int main(){
        int size;
        cin>> size;


         vector<string> arr;
    for(int i=0; i<size; i++){
        cin >> arr[i]; 
    }
int ans = mostWordsFound(arr);
cout << ans;

        return 0;
    }
