//配列の配列を作って問題を解いてみる
//逆方向からの入力を保存する
#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n);i++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<vector<int>> b(n);

    rep(i,n) {
        int k;
        cin >> k;
        rep(j,k) {
            int a;
            cin >> a;
            a--;
            b[a].push_back(i);
        }
    }

    rep(i,n) {
        cout << b[i].size();
        for(int j : b[i]) {
            cout << ' ' << j+1;
        }
        cout << endl;
    }
    return 0;
}