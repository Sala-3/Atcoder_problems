#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); i++)
using ll = long long;

void solve(){
    ll x,y,kl
    cin >> x >> y >> k;
    int ans = 0;
    while(x != y){
        if (x > y) x /= k; else y /= k;
        ans++;
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    rep(ti,T) solve();
    return 0;
}



#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(ll i = 0; i < (n); i++)
#define all (x) (x).begin(), (x).end()

//xをbase進法で表した桁列を返す
vector<ll> to_digits(ll x, ll base) {
    assert(base > 1);
    vector<ll> result;
    while (x > 0) {
        result.emplace_back(x % base);
        x /= base;
    }
    reverse(all(result));
    return result;
}

void solve(){
    ll x,y,k; cin >> x >> y >> k;
    vector<ll> a = to_digits(x,k);
    vector<ll> b = to_digits(y,k);
    ll pre = 0;
    rep(i,min(a.size(), b.size())){
        if (a[i] != b[i]) break;
        pre++;
    }
    ll ans = (a.size() - pre) + (b.size() - pre);
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    rep(i,t) solve();
}