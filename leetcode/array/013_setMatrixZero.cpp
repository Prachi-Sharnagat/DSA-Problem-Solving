
#include <bits/stdc++.h>
using namespace std;

void markRow(int i, int m, vector<vector<int>> &arr){
    for(int j=0; j<m; j++){
        if(arr[i][j]!=0){
            arr[i][j] = -1;
        }
    }
}

void markColumn(int j, int n, vector<vector<int>>&arr){
    for(int i=0; i<n; i++){
        if(arr[i][j]!=0){
            arr[i][j] = -1;
        }
    }

}

void setMatrixZero_brute(vector<vector<int>> &arr){
    int n = arr.size(); // no of row
    int m = arr[0].size(); // no of columns
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]==0){
                markRow(i,m,arr);
                markColumn(j,n,arr);
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]==-1){
                arr[i][j] = 0;
            }
        }
    }
}


void setMatrixZero_better(vector<vector<int>> &arr){
    int n = arr.size(); // no of row
    int m = arr[0].size(); // no of columns
    int row[n] = {0}; // o(n)
    int column[m] = {0}; // o(m)
    // s.c -> o(n)+ o(m)
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]==0){
                row[i] = 1;
                column[i] = 1;
            }
        }
    }

      for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(row[i]==1 || column[j]==1){
                arr[i][j] = 0;                
            }
        }
    }
}

// ---------------------------------------------------------
// MAIN FUNCTION
// ---------------------------------------------------------
int main()
{
    int row, column;
    cin >> row >> column ;

    vector<vector<int>> arr(row, vector<int> (column));
    for (int i = 0; i < row; i++)
    {
        for(int j=0; j<column; j++){
        cin >> arr[i][j];
        }
    }

//    setMatrixZero_brute(arr);
   setMatrixZero_better(arr);
     for (int i = 0; i < row; i++)
    {
        for(int j=0; j<column; j++){
        cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
