
#include <bits/stdc++.h>
using namespace std;


int countSumArraySumOfK_brute(vector<int> &arr, int sumOfSubarray){
    int count = 0;
    // o(n**3)
    int n = arr.size();
    
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int sum = 0;
            for(int k=i ; k<=j; k++){
                sum +=arr[k];
            }
            if(sum==sumOfSubarray){
                count ++;
            }
        }
    }

    return count;
}

int countSumArraySumOfK_better(vector<int> &arr, int sumOfSubarray){
    int count = 0;
    // o(n**2)
    int n = arr.size();
       for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
            sum += arr[j];
            if(sum==sumOfSubarray){
                count ++;
            }
        }
    }

    return count ;
}

int countSumArraySumOfK_optimal(vector<int> &arr, int sumOfSubarray){
    
    

}




// ---------------------------------------------------------
// MAIN FUNCTION
// ---------------------------------------------------------
int main()
{
    int size;
    cin >> size;

    vector<int> arr(size);
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int sum ;
    cin >> sum;
   
 int Total_Subarray = countSumArraySumOfK_better(arr,sum);

   cout << Total_Subarray;
    return 0;
}
