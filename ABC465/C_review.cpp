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






#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n); i++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    string s;
    cin >> n >> s;

    vector<int> x(n+1);
    int head = 1, tail = 1;
    for (int i = 2; i <= n; i++) {
        x[tail] ^= i; x[i] = tail; tail = i;
        if(s[i-1] == 'o') swap(head, tail);
    }
    for(int i = 0,j = head; i != tail; i^= x[j], swap(i,j)) {
        cout << j << ' ';
    }
    cout << endl;
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n); i++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    string s;
    cin >> n >> s;

    vector<int> a(n);
    int l = 0; r = n-1; bool rev = false;
    for(int i = n-1; i >= 0;i--) {
        if (s[i] == 'o') rev = !rev;
        if(!rev) a[r--] = i; else a[l++] = i;
    }
    rep(i,n) cout << a[i]+1 << ' ';
    cout << endl;
    return 0;
}