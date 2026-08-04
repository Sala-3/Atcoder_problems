#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> y(n);
    rep(i,n) {
        int nx, ny;
        cin >> nx >> ny;
        nx--;
        y[nx] = ny;    //yをx座標に対応するyを記録した配列を作る
    }
    int ymin = n+1;    //最初は十分大きい数
    rep(x, n) {
        if (ymin > y[x]) ans++;
        ymin = min(ymin, y[x]);
    }
    cout << ans << endl;
    return 0;
}