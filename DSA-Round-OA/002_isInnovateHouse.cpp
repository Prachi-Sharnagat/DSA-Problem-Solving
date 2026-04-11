#include<bits/stdc++.h>
using namespace std;

bool isVowel(ch house){
    ch = tolower(Ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}


int main(){
    string house;
    cin >> house

    for(int i=0; i<house.length(); i++){
        if(!isVowel(house[i])){
            cout << house[i];
        }

    }
    return 0;
}