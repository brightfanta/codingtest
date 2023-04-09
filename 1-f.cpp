#include <bits/stdc++.h>
using namespace std;
string s;
int main() {
    getline(cin, s); //getline 함수 공부 필요
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 65 && s[i] < 91){
            if(s[i] + 13 > 90) s[i] = s[i] + 13 - 26;
            else s[i] = s[i] + 13;
        } else if(s[i] >= 97 && s[i] < 122){
            if(s[i] + 13 > 122) s[i] = s[i] + 13 - 26;
            else s[i] = s[i] + 13;
        }

        cout << s[i];
    }
    // cout << s << "\n";
    cout << "\n";
    return 0;
}

//https://www.acmicpc.net/problem/11655