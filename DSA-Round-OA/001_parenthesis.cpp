#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string s) {
    stack<char> st;

    for (char ch : s) {
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        } else {
            if (st.empty()) return false;

            char top = st.top();
            st.pop();

            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')) {
                return false;
            }
        }
    }

    return st.empty();
}

int main() {
    string s;
    cin >> s;

    if (isBalanced(s))
        cout << "Balanced";
    else
        cout << "Not Balanced";

    return 0;
}



#include<bits/stdc++.h>
using namespace std;

bool isBalance(string s){
    stack<char> st;
    for(char ch:st){

        if(ch=='{' || ch == '(' || ch  == '['){
            st.push(ch);
        }
        else{
            if(st.empty()) return false;
            
            char top = st.top();
            st.pop();

            if((ch == '}' && top != '{') 
            || ch == )
            {
                return false;
            }
        }

        return st.empty();
    }
}


int main(){
    string st;
    cin >>  st;

    if(isBalance(st)){
        cout << "string is balance ";
    }

    else{
        cout << "string is not balance"
    }
    return 0;
}