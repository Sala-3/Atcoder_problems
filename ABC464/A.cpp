#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    int count_E = 0;
    int count_W = 0;
    cin >> s;
    for(int i = 0;i < s.size();i++) {
        if(s[i] == 'E') {
        count_E++;
        } else {
        count_W++;
        }
    }
    if(count_E > count_W)
    cout << "East";
    else
    cout << "West";
}