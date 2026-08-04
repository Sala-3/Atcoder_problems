#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int X,Y,L,R,A,B;
    cin >> X >> Y >> L >> R >> A >> B;
    if(B <= L)
    cout << (B - A) * Y;
    else if(R <= A)
    cout << (B - A) * Y;
    else if(L <= A && A <= B && B <= R)
    cout << (B - A) * X;
    else if(A < L && L < R && R < B)
    cout << (R - L) * X + (B - R + L - A) * Y;
    else if(A < L && L < B && B <= R)
    cout << (B - L) * X + (L - A) * Y;
    else if(L <= A && A < R && R < B)
    cout << (B - R) * Y + (R - A) * X;
}