#include <bits/stdc++.h>
using namespace std;

void reverseString(vector<char> &s)
{
    int i = 0;
    int n = s.size();
    while (i < n / 2)
    {
        swap(*(s.begin() + i), *(s.end() - i - 1));
        i++;
    }
    return;
}

int main()
{
    vector<char> s;
    int size;
    cin >> size;
    char ch;
    for (int i = 0; i < size; i++)
    {
        cin >> ch;
        s.push_back(ch);
    }

for(auto it:s){
    cout << it << " ";
   }
   cout << endl;
   reverseString(s);
   for(auto it:s){
    cout << it << " ";
   } 
    return 0;
}