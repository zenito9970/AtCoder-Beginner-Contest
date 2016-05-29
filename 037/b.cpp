#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define rep(i,n) FOR(i,0,n)
#define DEBUG(x) cout<<#x<<": "<<x<<endl
using namespace std;
using vint = vector<int>;
using vdouble = vector<double>;
using vchar = vector<char>;
using vstring = vector<string>;

int main() {
    int n, q; cin >> n >> q;
    vint a(n);
    rep(i, q) {
        int l, r, t; cin >> l >> r >> t;
        l--;
        FOR(j, l, r) {
            a[j] = t;
        }
    }
    rep(i, n) {
        cout << a[i] << endl;
    }
    return 0;
}
