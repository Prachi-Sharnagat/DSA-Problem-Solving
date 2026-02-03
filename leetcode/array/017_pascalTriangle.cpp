#include<bits/stdc++.h>
using namespace std;

long long nCr(int n,int c){
    long long res = 1;
    for(int i=0; i<c; i++){
        res = res*(n-i);
        res = res/(i+1);
    }
    return res;
}

// type o1 : find the value of particular row and column 
void valueInPascalTriangle(int row, int column){
    
    cout << nCr(row-1,column-1);
}

void printRowNOfPascalTriangle(int row){
    // row = no of element in that row
    for(int c=1; c<=row; c++){
        cout << nCr(row-1, c-1) << " ";
    } cout << endl;
}

// print pascal table :

void  pascalTriangle_brute(int row){
// row pata hai suppose 3 

for(int i=1; i<=row; i++){
    for(int c=1;c<=i; c++){
        cout << nCr(i-1,c-1) << " ";
    } cout << endl;
}
}

void pascalTriangleRowNPrint_OPtimial(int row){
// o(n) for print particular row
       long long ans = 1;
        cout << ans << " ";
        for(int c=1; c<n; c++){
            ans *= (numRows-c);
            ans = ans/c;    
            cout << ans << " ";
        }
}

vector<int> generateRow(int n){
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(ans);

    for(int c=1; c<n; c++){
ans *= (n-c);
ans /= c;
ansRow.push_back(ans);
    }
    return ansRow;
}

    vector<vector<int>> generate(int numRows) {
vector<vector<int>> res;

for(int i=1; i<=numRows; i++){
 res.push_back(generateRow(i));
}
          return res;
        
    }




int main()
{
    int row, column;
    cin >> row >> column ;

    // pascalTriangle_brute(row);
    // valueInPascalTriangle(5,3);
    // printRowNOfPascalTriangle(5);
    return 0;
}
