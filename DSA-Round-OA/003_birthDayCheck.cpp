#include<nbits/stdc++.h>
using namespace std;

int checkBirthDay(string month, int day){
    transform(month.begin(), month.end(),month.begin(), ::tolower);

    if(month== 'july' && day == 5)[
        return 1;
    ]
    return 0;
}

int main(){
    string month;
    int day;

    cin >> month >> day;

    cout << checkBirthDay(month, day);

    return 0;

}