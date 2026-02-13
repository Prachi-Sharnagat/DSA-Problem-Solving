
#include<bits/stdc++.h>
using namespace std;

int maxProductSubarray_brute1(vector<int> &arr){

    int n = arr.size();
    int maxProduct = INT_MIN;

    for(int i=0; i<n ; i++){
        for(int j = i; j<n; j++){
            int prod = 1;
            for(int k = i ; k<=j; k++){
               prod *= arr[k];
            }
            maxProduct = max(maxProduct, prod);
        }
    }

    return maxProduct;
}

int maxProductSubarray_brute2(vector<int> &arr){

    int n = arr.size();
    int maxProduct = INT_MIN;

    for(int i=0; i<n ; i++){
        int prod = 1;
        for(int j = i; j<n; j++){
            product *= arr[j];
            
            
            maxProduct = max(maxProduct, prod);
        }
    }

    return maxProduct;
}





int main(){
    int size;
    cin >> size;
    vector<int> arr(size);
    for(int i=0; i<size; i++){
        cin >> arr[i]; 
    }

    int ans = maxProductSubarray_brute(arr);
    cout << ans;




    return 0;
}