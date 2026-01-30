
#include <bits/stdc++.h>
using namespace std;

vector<int> spiralTraversalMatrix_brute(vector<vector<int>>& matrix){
         
        
              int n = matrix.size();
        int m = matrix[0].size();
        int top = 0;
        int bottom = n-1;
        int left = 0;
        int right = m - 1;
        vector<int> ans;
        while(left <= right && top <= bottom){
   for(int j=left; j<=right; j++){
                ans.push_back(matrix[top][j]) ;
            }
              top++;
         for(int j=top; j<=bottom; j++){
                ans.push_back(matrix[j][right]);
            }           right--;

            if(top<=bottom){
                  for(int j=right; j>=left; j--){
                ans.push_back(matrix[bottom][j]);
         
            }        bottom--;

            }
           if(left<=right){
  for(int j=bottom; j>=top; j--){
                ans.push_back(matrix[j][left]);
              
            }  left++;
           }
           

        }

        return ans;
        

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

   vector<int> ans = spiralTraversalMatrix_brute(arr);
     for (int i = 0; i < row*column; i++)
    {
      cout << ans[i] << " ";
    }
    return 0;
}
