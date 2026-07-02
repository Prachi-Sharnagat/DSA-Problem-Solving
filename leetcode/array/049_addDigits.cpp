class Solution {
public:
    int addDigits(int num) {
    int add = 0;
    int sum = num;
while(sum > 9){
 while(sum){
        int rem = sum%10;
        add += rem;
        sum /= 10;

    }
    sum = add;
    add = 0;
}


    return sum;

        
    }
};