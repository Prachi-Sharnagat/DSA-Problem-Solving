#include<bits/stdc++.h>
using namespace std;

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        int temp[k];
        for(int i=n-k; i<n; i++){
           temp[i-(n-k)] = nums[i];
        }

        for(int i = n-k-1 ; i>=0; i--){
           nums[i+k] = nums[i];
        }
        cout << endl;
        for(int i = 0 ; i<k; i++){
            nums[i] = temp[i];
        }
        cout << endl;
    }

int main(){
 int size;
 cin >> size;
 vector<int> arr(size);
 for(int i=0; i<size; i++){
    cin >> arr[i];
 }

 int n;
//  cout << "rotate array by : ";
 cin >> n;
 rotate(arr,n);

// for(int i=0; i<size; i++){
//     cout << arr[i] << " ";
//  }

 return 0;
}