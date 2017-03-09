#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n) FOR(i,0,n)
#define repr(i,n) for(int i=(n)-1;0<=i;--i)
#define each(e,v) for(auto&& e:(v))
#define DUMP(x) cerr<<#x<<": "<<(x)<<endl
#define DEBUG(x) cerr<<#x<<": "<<(x)<<" (L"<<__LINE__<<")"<<endl
using namespace std;
using vint = vector<int>;
using vdouble = vector<double>;
using vstring = vector<string>;
using ll = long long;
template <class T> void chmin(T& a, const T& b) { a = min(a, b); }
template <class T> void chmax(T& a, const T& b) { a = max(a, b); }

constexpr int INF = 1 << 28;

int main() {
    int n, m; cin >> n >> m;
    vector<vint> d(n, vint(n, INF));
    rep(i, n) d[i][i] = 0;
    rep(i, m) {
        int a, b, t; cin >> a >> b >> t;
        a--; b--;
        d[a][b] = d[b][a] = t;
    }
    rep(k, n) rep(i, n) rep(j, n) chmin(d[i][j], d[i][k] + d[k][j]); // warshall-floyd
    vint maxes(n, 0);
    rep(i, n) rep(j, n) chmax(maxes[i], d[i][j]);
    int mini = INF;
    rep(i, n) chmin(mini, maxes[i]);
    cout << mini << endl;
    return 0;
}
