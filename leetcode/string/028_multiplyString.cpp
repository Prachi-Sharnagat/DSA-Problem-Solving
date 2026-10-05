class Solution {
public:
    string multiply(string num1, string num2) {
       int i =0;
       int n = num1.size();
       int m = num2.size();
       reverse(num1.begin(), num1.end());
       reverse(num2.begin(), num2.end());
       vector<int> arr(n+m+1,0);
       for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int digit1 = num1[i] - '0';
            int digit2 = num2[j] - '0';
            arr[i+j] += (digit1*digit2);
        }
       }
       reverse(arr.begin(), arr.end());
       for(int i=n+m; i>=1; i--){
        arr[i-1] += arr[i]/10; 
        arr[i] = arr[i]%10;
       }
      int ind = 0 ;
       while(ind < arr.size()  && arr[ind]==0){
        ind++;
       }
       if(ind==arr.size()){
        return "0";
       }
       string s = "";
       
       for(int i=ind; i<arr.size(); i++){
        s += to_string(arr[i]);
       }
        return s;
    }
};