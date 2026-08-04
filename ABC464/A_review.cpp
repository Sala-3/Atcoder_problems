//変数h==0を用意。Sを調べ、Eならｈを１加算、Ｗならｈを１減算。最後にｈの正負を調べる。
#include <stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int h = 0;
    for(auto &nx : s) {
        if(nx == 'E') {h++;}
        else {h--;}
    }
    if(h > 0) {cout << "East\n"}
    else{cout << "West\n"}
    return 0;
}

//
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int e = count(s.begin(), s.end(), 'E');
    int w = count(s.begin(), s.end(), 'N');
    if (e > w) cout << "East\n";
    else cout << "West\n";
    return 0;
}