// median of two sorted array 
class Solution {
public:

int median(vector<int> &arr1, vector<int> &arr2){
// merge two array 
int n1 = arr1.size();
int n2 =  arr2.size();
int n3 = n1 + n2;
int median;
// vector<int> arr3;

// for(int i=0; i<n1; i++){
//     arr3.push_back(arr1[i]);
// }

// for(int i=0; i<n2; i++){
//     arr3.push_back(arr2[i]);
// }
// sort(arr3.begin(),arr3.end());

int arr3 =  [];
int i = 0;
int j = 0;
while(i< n1 &&  j<n2){
    if(arr1[i]<arr2[j]){
        arr3.add(arr1[i++]);
    }
    else{
        arr3.add(arr2[j++]);
    }
}
while(i<n1){
    arr3.add(arr1[i++]);
}
while(j<n2){
    arr3.add(arr2[j++]);
}

if(n3%2!=0){
  int index = n3/2;
  median = arr3[index];
}
else{
    int index1 = n3/2;
    int index2 = (n3/2) - 1;
    median = (arr3[index1]+ arr3[index2])/2;
}
return median;
}
};


// median of two sorted array 
class Solution {
public:

int median(vector<int> &arr1, vector<int> &arr2){
// merge two array 
int n1 = arr1.size();
int n2 =  arr2.size();
int i = 0, j=0 ;
int n = (n1+n2);
int ind2 = n/2;
int cnt = 0;
int ind1 = ind2-1;
int ind1elm = -1, ind2elm = -1;
while(i<n1 && j<n2){
    if(arr1[i]<arr2[j]){
        if(cnt==ind1) ind1elm = arr1[i];
        if(cnt==ind2) ind2elm = arr1[i];
        cnt++;
        i++;
    }
    else{
         if(cnt==ind1) ind1elm = arr2[j];
        if(cnt==ind2) ind2elm = arr2[kj];
        cnt++;
        j++;
    }    

}

while(i<n1){
     if(cnt==ind1) ind1elm = arr1[i];
        if(cnt==ind2) ind2elm = arr1[i];
        cnt++;
        i++;
  
}
while(j<n2){
    if(cnt==ind1) ind1elm = arr2[j];
        if(cnt==ind2) ind2elm = arr2[kj];
        cnt++;
        j++;
    }    
}

if(n%2==1){
    return ind2el;
}

return (double){(double)(ind1elm+ind2elm)/2.0};

}
};
