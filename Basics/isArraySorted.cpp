#include<bits/stdc++.h>
using namespace std;

bool isArraySorted(int arr[], int size){

for(int i=0; i<size; i++){
    if(arr[i] <= arr[i+1]) {
        
    }
    else{
        return false;
    }
    
}
 return true;
}


int main(){
 int size;
 cin >> size;
 int arr[size];
 for(int i=0; i<size; i++){
    cin >> arr[i];
 }
//  SecondLargest(arr, size);
if(isArraySorted(arr,size)){
    cout <<  "the given array is sorted";
}
else{
    cout <<  "the given array is not sorted";

}
 
 return 0;
}