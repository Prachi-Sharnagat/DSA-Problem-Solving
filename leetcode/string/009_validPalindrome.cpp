class solution{
public: 
bool isPalindrome(string s){
int left = 0;
int right = s.length()-1;

while(left<right){

    while(left<right && !isalnum(s[left])){
        left++; // space , @ ye sab ko skip kare and next left se compare kare jo alphabet ya numerical value contain karta ho
    }
    while(left<right && !isalnum(s[right])){
        right--;
    }

if(tolower(s[left])!=tolower(s[right])){
    return false;
}
left++;
right--;

}

return true;



}

};