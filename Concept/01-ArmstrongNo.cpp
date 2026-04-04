//* You are given a 3-digit number n, Find whether it is an Armstrong number or not.
//* An Armstrong number of three digits is a number such that the sum of the cubes of its digits is equal to the number itself.

#include <bits/stdc++.h>
using namespace std;

int armstrongNumber(int n) {
	int duplicate = n;
    int sum = 0;
	while (n>0){
	int lastdigit = n%10;
	  n /= 10;
	  sum = sum + lastdigit*lastdigit*lastdigit;
	}
	if(sum==duplicate){
        cout << "true";
	}
    else{
         cout << "false";
    } 
	    return 0;
}

int main(){
    int n;
    cin >> n;
 armstrongNumber(n);
}