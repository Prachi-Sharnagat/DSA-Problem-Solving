#include<bits/stdc++.h>
using namespace std;

// considering arr containg non-negative values 
// otherwise i will take int secondLargest = INT_MAX;

void smallestElement(int arr[], int size){
int smallest = arr[0];
int secondSmallest = INT_MAX;
for(int i=0; i<size; i++){
    if(smallest > arr[i]) {
        secondSmallest = smallest;
        smallest = arr[i];
    }
    else if(smallest != arr[i] && secondSmallest > arr[i] ){
        secondSmallest = arr[i];
    }
}
cout << "smallest element is " << smallest << endl;
cout << "second smallest is " << secondSmallest;


}


int main(){
 int size;
 cin >> size;
 int arr[size];
 for(int i=0; i<size; i++){
    cin >> arr[i];
 }
//  SecondLargest(arr, size);
smallestElement(arr,size);
 
 return 0;
}