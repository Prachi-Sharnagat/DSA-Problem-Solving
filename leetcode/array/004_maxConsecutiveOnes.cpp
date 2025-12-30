// 485. Max Consecutive Ones
#include<bits/stdc++.h>
using namespace std;
int maxConsecutiveOnes(vector<int> &arr){

int maxi = 0;
        int count = 0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]==1){
                count++;
                maxi = max(count, maxi);
            }
            else{
                count = 0;
            }
        }
        
        
        return maxi;
}
 

int main(){
 int size;
 cin >> size;
 vector<int> arr(size);
 for(int i=0; i<size; i++){
    cin >> arr[i];
 }
 int count = maxConsecutiveOnes(arr);
 cout << count;
 return 0;
}