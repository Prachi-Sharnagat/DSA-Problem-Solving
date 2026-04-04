#include<bits/stdc++.h>
using namespace std;

 void calculateMultiples(int n) {
        int num = 10*n;
        int diff = n;
        while(num >= n){
            cout << num << " ";
            num = num - diff;
        }
        return ;
    }

int main(){
    int n;
    cin >> n;
    cout << endl;
   calculateMultiples(n);
    return 0;
}