#include<bits/stdc++.h>
using namespace std;

// considering arr containg non-negative values 
// otherwise i will take int secondLargest = INT_MIN;

void SecondLargest(int arr[], int size){
int largest = arr[0];
int secondLargest = -1;
for(int i=0; i<size; i++){
    if(largest < arr[i]) {
        largest = arr[i];
    }
}
for(int i=0; i<size; i++){
    if(arr[i]>secondLargest && arr[i]!=largest){
        secondLargest = arr[i];
    }
}
cout << "second largest element is " << secondLargest;

}

// approach 2:
void SecondLargestApproach2(int arr[], int size){
int largest = arr[0];
int secondLargest = -1;
for(int i=0; i<size; i++){
    if(largest < arr[i]) {
        secondLargest = largest;
        largest = arr[i];
    }
    else if(largest>arr[i] && secondLargest < arr[i]){
        secondLargest = arr[i];
    }
}
cout << "second largest element : " << secondLargest;
}

int main(){
 int size;
 cin >> size;
 int arr[size];
 for(int i=0; i<size; i++){
    cin >> arr[i];
 }
//  SecondLargest(arr, size);
SecondLargestApproach2(arr,size);
 
 return 0;
}