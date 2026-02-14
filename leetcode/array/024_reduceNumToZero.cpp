#include<bits/stdc++.h>
using namespace std;

 int numberOfSteps(int num) {
        int count = 0;
        while(num>0){
            if(num%2==0){
            num = num/2;
        }
        else{
          num = num-1;

        }
          count ++;
        }   
    return count;        
    }


      int main(){
    int num
    cin >> num;
   int ans = numberOfSteps(num);
   cout << ans;
    return 0;
}