#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    for(char c : s) {
        if(isdigit(c)) cout << c;
    }
    cout << endl;
    return 0;
}

//文字だけを考えたいならfor(char c : s)
/*何文字目かも考えたいなら  for(int i = 0; i < s.size(); i++) {
    　　　　　　　　　　　　   cout << i << " " << s[i] << '\n';
                              }*/