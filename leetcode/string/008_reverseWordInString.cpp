#include<bits/stdc++.h>
using namespace std;

string reverseWordString(string s){

 stringstream ss(s);
 string word;
 vector<string> arr;
 while(ss >> word){
    arr.push_back(ss);
 }
string ans;
int n = arr.size();
 for(int i=0; i<n/2; i++){
    swap(arr[i], arr[n-i-1]);
 }

 for(int i=0; i<n; i++){
    ans += arr[i];
    if(!i== n-1){
        ans += " ";
    }
 }

 return ans;







}