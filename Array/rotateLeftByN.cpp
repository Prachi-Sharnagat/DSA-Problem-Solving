#include<bits/stdc++.h>
using namespace std;

void rotateLeftByN(int arr[], int n, int d){
    d = d%n;
    int temp[d];
    for(int i=0; i<d; i++){
        temp[i] = arr[i];
    }
    for(int i = d; i<n; i++){
        arr[i-d] = arr[i];
    }
    for(int i = n-d; i<n; i++){
        arr[i] = temp[i-(n-d)];
    }
}




int main(){
 int size;
 cin >> size;
 int arr[size];
 for(int i=0; i<size; i++){
    cin >> arr[i];
 }

 int n;
 cout << "rotate array by : ";
 cin >> n;
 rotateLeftByN(arr,size,n);

for(int i=0; i<size; i++){
    cout << arr[i] << " ";
 }

 return 0;
}