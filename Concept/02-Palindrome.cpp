
#include <bits/stdc++.h>
using namespace std;

int isPalindrome(int x) {
              if ( x < 0 || (x%10 == 0 && x!=0)){
            return false;
        }
	int duplicate = x;
 int reverse = 0;
 
	while (x>0){
	int  lastdigit = x % 10;
	  x /= 10;
	  reverse = reverse*10 + lastdigit ;
	}
	if(reverse==duplicate){
        cout << "true";
	}
	else {
        cout << "false";
	}
    return 0;
}

int main(){
    int n;
    cin >> n;
    cout << isPalindrome(n);
}