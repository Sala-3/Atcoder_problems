#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n); i++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    string s;
    cin >> n >> s;

    deque<int> a;
    bool rev = false;
    rep(i,n) {
        if (rev) a.push_front(i+1);
        else a.push_back(i+1);
        if(s[i] == 'o') rev = !rev;
    }
    if(rev) reverse(a.begin(),a.end());
    rep(i,n) cout << a[i] << ' ';
    cout << endl;
    return 0;    
}