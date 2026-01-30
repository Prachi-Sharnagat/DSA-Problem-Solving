
#include <bits/stdc++.h>
using namespace std;

// anticlockwise : 
vector<vector<int>> rotateMatrixAntiClockwsie_brute(vector<vector<int>> &mat){
    int n = mat.size();
int m = mat[0].size();
vector<vector<int>> ans(n, vector<int> (m));
for(int i=0; i<n; i++){
    for(int j = 0; j<m; j++){
        ans[n-1-j][i] = mat[i][j] ;
    } 
}

 return ans;
}

vector<vector<int>> rotateMatrixAntiClockwise_optimal(vector<vector<int>> &nums){

    int n = nums.size();
int m = nums[0].size();

// transpose used 
for(int i=0; i<n; i++){
    for(int j = i+1; j<m; j++){
        // if(!(i==j)){
    swap(nums[i][j], nums[j][i]);
        // }
    }
}

for(int j=0; j<m; j++){
int top= 0;
int bottom = n-1;
    while(top<bottom){
    swap(nums[top][j],nums[bottom][j]);
    top++;
    bottom--;
}

}


return nums;

}
// ---------------------------------------------------------
// MAIN FUNCTION
// ---------------------------------------------------------
int main()
{
    int row, column;
    cin >> row >> column ;

    vector<vector<int>> arr(row, vector<int> (column));
    for (int i = 0; i < arr.size(); i++)
    {
        for(int j=0; j<arr[0].size(); j++){
        cin >> arr[i][j];
        }
    }
//    vector<vector<int>> ans = rotateMatrix_brute(arr);
   vector<vector<int>> ans = rotateMatrixAntiClockwise_optimal(arr);
     for (int i = 0; i < row; i++)
    {
        for(int j=0; j<column; j++){
        cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
