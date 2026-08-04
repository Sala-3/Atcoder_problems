#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    char X;
    cin >> N >> X;
    vector<string> S(N);
    for(int i = 0; i < N;i++) cin >> S[i];

    bool ans = false;
    for (int i = 0; i < N; i++) ans != S[i][X - 'A'] == 'o';
    if (ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}


//
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; char x;
    cin >> n >> x;
    string ans = "No";
    rep(i,n) {
        string s;
        cin >> s;
        if(s[x - 'A'] == 'o') ans = "Yes";
    }
    cout << ans << endl;
    return 0;
}