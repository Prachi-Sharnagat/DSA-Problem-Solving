#include<bits/stdc++.h>
using namespace std;
// fizzbuzz 
// Input: n = 15
// Output: ["1","2","Fizz","4","Buzz","Fizz","7","8","Fizz","Buzz","11","Fizz","13","14","FizzBuzz"]
vector<string> fizzBuzz(int n) {

        vector<string> arr;

        for(int i=1; i<=n; i++){
            if(i%3==0 && i%5==0){
                arr.push_back("FizzBuzz");
            }
            else if(i%3==0){
                   arr.push_back("Fizz");
            }
            else if(i%5==0){
                arr.push_back("Buzz");
            }
          
            else{
                arr.push_back(to_string(i));
            }
        }

        return arr;
        
    }


     int main(){
    int n;
    cin >> n;

    vector<string> ans = fizzBuzz(n);
        for(int i=0; i<ans.size(); i++){
       cout << ans[i] << " ";
    }
    return 0;
}