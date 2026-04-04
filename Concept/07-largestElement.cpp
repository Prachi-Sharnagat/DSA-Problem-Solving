#include <bits/stdc++.h>
using namespace std;

    int largest(vector<int> &arr) {
        int n = arr.size();
        int max = -1;

        if(n<2) return -1;
        for(int i = 0; i<n; i++){
            if(arr[i] > max){
                max = arr[i];
            }
        }
        return max;
        
    }


int main(){
    int size;
    cout << "enter size of array : ";
    cin >> size;
    cout << endl;
    vector<int> array(size);
    for(int i=0; i<size; i++){
        cin >> array[i] ;
    }

  int ans = largest(array);
  cout << ans;
    return 0;
}