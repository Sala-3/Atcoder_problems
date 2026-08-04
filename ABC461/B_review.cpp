#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n); i++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];

    rep(i,n) a[i]--,b[i]--;

    vector<int> ib(n);
    rep(i,n) ib[b[i]] = i;

    if(a == ib) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}