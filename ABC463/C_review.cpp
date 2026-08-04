//削除クエリは難しいガチだが、追加クエリは簡単ガチなので逆順に見ると簡単なことがある。
//時系列の処理はクエリの先読み(めんどくさいこともある)or前計算＋二分探索

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<tuple<ll,int,int>> event;
    mutiset<ll> st;

    int n; cin >> n;
    vector<ll> h(n), l(n);

    for(int i = 0; i < n; i++) {
        cin >> h[i] >> l[i];
        st.insert(h[i]);
        event.emplace_back(l[i] * 2, 0, i);
    }

    int q; cin >> q;
    vector<ll> t(q);

    for (int i = 0;i < q; i++) {
        cin >> t[i];
        event.emplace_back(t[i] * 2 +1, 1, i);
    }

    sort(event.begin(), event.end());

    vector<ll> ans(q);
    for (auto [tim, typ, i]: event) {
        if (typ == 0) {
            st.erase(st.find(h[i]));
        } else {
            ans[i] = *st.rbegin();
        }
    }

    for (int i = 0; i < q; i++) {
        cout << ans[i] << '\n';
    }
}

//
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unsingned N;
    cin >> N;

    vector<pair<unsigned, unsigned>> takahashi;
    for (unsigned i = 0; i < N; ++i) {
        unsigned H, L;
        cin >> H >> L;
        while(!empty(takahashi) && takahashi.back().first <= H)
           takahashi.pop_back();
           takahashi.emplace_back(H, L);
    }

    unsigned Q;
    cin >> Q;

    for (unsigned i = 0; i < Q; ++i) {
        unsigned T;
        cin >> T;
        cout << ranges::upper_bound(takahashi, T, {} &pair<unsigned, unsigned>::second) ->first << endl;
    }
    return 0;
}


//
#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n); ++i)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> h(n), l(n);
    rep(i,n) {
        cin >> h[i] >> l[i];
    }
    vector<int>;
    d[n-1] = h[n-1];
    for (int i = n-2; i >= 0; i--) {
        d[i] = max(d[i+1],h[i]);
    }

    int q;
    cin >> q;
    rep(qi,q) {
        int t;
        cin >> t;
        int li = upper_bound(l.begin(), l.end(),t) -l.begin();
        cout << d[li] << '\n';
    }
    return 0;

}