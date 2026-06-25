class Solution {
  public:
  
  int xorN(int n){
       if(n%4==1){
          return 1;
      }
      else if(n%4== 2){
          return n+1;
      }
      else if(n%4==3){
          return 0;
      }
      
      else{
          return n;
      }
      
      return -1;
  }
  
    int findXOR(int l, int r) {
        int prev = xorN(l-1);
        int total = xorN(r);
        
        int final = prev ^ total;
        
        return final;
        
     
    }
};