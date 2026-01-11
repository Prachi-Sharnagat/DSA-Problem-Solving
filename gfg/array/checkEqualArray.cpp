// array check are equal or noot

#include<bits/stdc++.h>
using namespace std;

bool checkEqualArray(vector<int> &a, vector<int> &b){
//    int xor1 = 0;
//    int xor2 = 0;
//    if(a.size()!=b.size()) return false;
//    for(int i=0; i<a.size(); i++){
//       xor1 ^= a[i];
//    }
//    for(int i=0; i<b.size(); i++){
//     xor2 ^= b[i];
//    }

//    int result = xor1 ^ xor2;
//    if(result==0) return true;
//    else return false;
}


int main(){
 int size1, size2;
 cin >> size1 >> size2;
vector<int> arr1(size1);
vector<int> arr2(size2);
 for(int i=0; i<size1; i++){
    cin >> arr1[i];
 }
 for(int i=0; i<size2; i++){
    cin>> arr2[i];
 }

 if(checkEqualArray(arr1, arr2)){
    cout << "true";
 }
 else{
    cout << "false";
 }

 
 return 0;
}