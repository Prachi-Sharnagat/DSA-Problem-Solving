#include<bits/stdc++.h>
using namespace std;

    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
        if(n<2) return -1;
        int max = -1;
        int secondMax = -1;
        for(int i =0 ; i<n; i++){
          if(arr[i]>max){
              secondMax = max;
              max = arr[i];
          }
          else if(arr[i]>secondMax && arr[i]!=max){
              secondMax = arr[i];
          }
        }  return  secondMax;  
    }

int main(){
int size, target;
    cout << "enter size of array : ";
    cin >> size;
    cout << endl;
   vector<int> arr(size);
    cout << "enter array : ";
    for(int i=0 ; i<size; i++){
        cin >> arr[i];
    }

 int ans = getSecondLargest(arr);
 cout << "the second highest element in array is " << ans;
    return 0;
}