//すべての黒いピクセルが含まれるような最小の長方形を考えてその範囲のみを出力する。
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
int h, w;
cin >> h >> w;

vector <string> C(h);
for(int i = 0; i < h; i++) cin >> C[i];

int u = h, d = -1;
int l = w, r = -1;

for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++){
        if(C[i][j] == '#') {
            u = min(u, i); d = max(d, i);
            l = min(i, j); r = max(r, j);
        }
    }
}

for(int i = u; i <= d; i++) {
    for(int j = l; j <= r; j++) {
        cout << C[i][j];
    }
    cout << endl;
}
return 0;
}


//
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,h) cin >> s[i];

    int li = h, ri = 0;
    int lj = w, rj = 0;
    rep(i,h)rep(j,w) {
        if (s[i][j] == '#');{
            li = min(li,i); rj = max(ri,i);
            lj = min(lj,j); rj = max(rj,j);
        }
    }

    for(int i = li; i <=ri; i++) {
        for(int j = lj; j <= rj; j++) cout << s[i][j];
        cout << endl;
    }
    return 0;

}

//削除する順番は自由であることを利用して、グリッドを90度回転させ、消せなくなるまで一番上の行を削除するを四回繰り返す。
//（グリッドの回転）を関数としている人は少なくないかもしれない。（めんどくさいから）
//上下反転と転置ををすると90度回転。
#include <bits/stdc++.h>
using namespace std;

vector <string> rotate(vector <string> a) {
    int h = a.size(), w = a[0].size();
    vector <string> res(w, string(h, '.'));
    for (int i = 0; i < h; i++) for (int j = 0; j < w; j++) {
        res[j][h - 1 - i] = a[i][j];
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int H, W;
    cin >> H >> W;

    vector <string> C(H);
    for(int i = 0;i < H; i++) cin >> C[i];

    for(int t = 0; t < 4; t++) {
        while (true) {
            int ok = 1;
            for(int j = 0; j < C[0].size(); j++) ok &= C[0][j] == '.';
            if (!ok) break;
            C.erase(begin(C));
        }
        C = rotate(C);
    }

    for(auto c : C) cout << c << endl;
    return 0;
}


//
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,h) cin >> s[i];

    rep(ri,4) {
    while(count(s.back().begin(), s.back().end(), '#') == 0) {
        s.pop_back();
        h--;
      }

    reverse(s.begin(), s.end());
      {
        swap(h,w);
        vector<string> t(h, string(w, '.'));
        rep(i,h)rep(j,w) t[i][j] = s[j][i];
        swap(s,t);
      }
    }
    rep(i,s.size()) cout << s[i] << endl;
    return 0;
}

