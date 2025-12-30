#include<bits/stdc++.h>
using namespace std;

void largetsArray(vector <int> &arr, int size){
  int  largest = arr[0];
  for(int i=0; i<size; i++){
    if(largest < arr[i]){
        largest = arr[i];
    }
  } 
  cout << largest ;
}


int main(){
 int size;
 cin >> size;
 vector<int> arr(size);
 for(int i=0; i<size; i++){
    cin >> arr[i];
 }
 largetsArray(arr, size);
 
 return 0;
}