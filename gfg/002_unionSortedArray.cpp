/*
Platform: gfg
Problem: union sorted array
Difficulty: Easy
Link: https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1

Approach 1: Brute Force (set insertion)
Time Complexity: O(n1logn + n2logn)
Space Complexity: O(n1+n2)

Approach 2: Optimal (two pointer)
Time Complexity: 0(n)
Space Complexity: 0(n)

*/
#include<bits/stdc++.h>
using namespace std;

void unionSorted_optimise(vector<int> &arr1, vector<int> &arr2){
int n1 = arr1.size();
int n2 = arr2.size();
int i = 0;
int j = 0;
vector<int> unionLoop;
while(i<n1 && j<n2){
    if(arr1[i]<=arr2[j]){
        if(unionLoop.size()==0 || unionLoop.back()!=arr1[i]){
            unionLoop.push_back(arr1[i]);
        }
        i++;
    }
    else{
        if(unionLoop.size()==0 || unionLoop.back()!=arr2[j]){
            unionLoop.push_back(arr2[j]);
            
        }
        j++;
    }
}

while(j<n2){
  if( unionLoop.empty() || unionLoop.back()!=arr2[j]){
            unionLoop.push_back(arr2[j]);
        }
        j++;
}

while(i<n1){
      if(unionLoop.empty() || unionLoop.back()!=arr1[i]){
            unionLoop.push_back(arr1[i]);
        }
        i++;

}

for(auto loop:unionLoop){
    cout << loop << " ";
}
}

// Time Complexity: O(n1logn + n2logn)
// Space Complexity: O(n1+n2)
void unionSorted_brute(vector<int> &arr1, vector<int> &arr2){
int n1 = arr1.size();
int n2 = arr2.size();
set<int> st;

    for(int i=0; i<n1; i++){
                st.insert(arr1[i]);
    }

    for(int i =0; i<n2; i++){
        st.insert(arr2[i]);
    }

    for(int x:st){
        cout << x << " ";
    }


}

int main(){
 int size1, size2;
 cin >> size1 >> size2;
 vector<int> arr1(size1);
 vector<int> arr2(size2);
 for(int i=0; i<size1; i++){
    cin >> arr1[i];
 }
  for(int i=0; i<size2; i++){
    cin >> arr2[i];
 }
 unionSorted_optimise(arr1, arr2);
 
 return 0;
}