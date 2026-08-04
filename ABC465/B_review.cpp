//h時台の料金は、L<=h<=R-1であればX,そうでなければY
//整数hについてA<=h<=B-1の範囲でループを回し、h時台の料金を足していく。
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y, l, r, a, b;
    cin >> x >> y >> l >> r >> a >> b;

    int sum = 0;
    for(int i = a; i <= b-1;i++) {
        if(l <= i && i <= r-1) {
            sum += x;
        } else {
            sum += y;
        }
    }
    cout << sum << "\n";
    return 0;
}