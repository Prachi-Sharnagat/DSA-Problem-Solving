#include<bits/stdc++.h>
using namespace std;

void rotateLeftByOne(int arr[], int size){
    int temp = arr[0];
    for(int i=1; i<size; i++){
        arr[i-1] = arr[i];
    }
    arr[size-1] = temp;
}

int main(){
 int size;
 cin >> size;
 int arr[size];
 for(int i=0; i<size; i++){
    cin >> arr[i];
 }
rotateLeftByOne(arr,size);
for(int i=0; i<size; i++){
    cout << arr[i] << " ";
}

 return 0;
}