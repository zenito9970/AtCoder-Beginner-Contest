#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define rep(i,n) FOR(i,0,n)
#define each(e,v) for(auto&& e:(v))
#define DEBUG(x) cout<<#x<<": "<<x<<endl
using namespace std;
using vint = vector<int>;
using vdouble = vector<double>;
using vstring = vector<string>;
using ll = long long;

int main() {
    int n; cin >> n;
    vint t(n), a(n);
    rep(i, n) {
        cin >> t[i] >> a[i];
    }
    ll A = 1, B = 1;
    rep(i, n) {
        ll c1 = (A-1+t[i]) / t[i];
        ll c2 = (B-1+a[i]) / a[i];
        ll c = max(c1, c2);
        A = c * t[i];
        B = c * a[i];
    }
    cout << A + B << endl;
    return 0;
}
