int climbingStair(int n){
    if(n<=2) return n;
    int a = 1 ;
    int b = 2;

    for(int i=3; i<=n; i++){
        int c = a + b;
        int a = b; 
        int b = c;
    }

    return b;
}


int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    Solution obj;
    cout << "climbing stairs: " << obj.climbingStair(n) << endl;

    return 0;
}