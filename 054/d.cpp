#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)
#define rep(i,n) FOR(i,0,n)
#define repr(i,n) for(int i=(n-1);0<=i;--i)
#define each(e,v) for(auto&& e:(v))
#define DUMP(x) cerr<<#x<<": "<<(x)<<endl
#define DEBUG(x) cerr<<#x<<": "<<(x)<< " (L"<<__LINE__<<")"<<endl;
using namespace std;
using vint = vector<int>;
using vdouble = vector<double>;
using vstring = vector<string>;
using ll = long long;

int main() {
    constexpr int N = 40, AB = 10, INF = 1e5;
    int n, ma, mb; cin >> n >> ma >> mb;
    vint a(n), b(n), c(n);
    rep(i, n) cin >> a[i] >> b[i] >> c[i];

    int dp[N+1][N*AB+1][N*AB+1];
    fill_n(dp, dp+((N+1)*(N*AB+1)*(N*AB+1)), INF);
    dp[0][0][0] = 0;

    rep(i, n) {
        rep(ca, N*AB+1) {
            rep(cb, N*AB+1) {
                if(dp[i][ca][cb] == INF) continue;
                dp[i+1][ca][cb] = min(dp[i+1][ca][cb], dp[i][ca][cb]);
                dp[i+1][ca+a[i]][cb+b[i]] = min(dp[i+1][ca+a[i]][cb+b[i]], dp[i][ca][cb]+c[i]);
            }
        }
    }
    int ans = INF, x = ma, y = mb;
    while(x < N*AB+1 && y < N*AB+1) {
        ans = min(ans, dp[n][x][y]);
        x += ma; y += mb;
    }
    
    if(ans == INF) ans = -1;
    cout << ans << endl;
    return 0;
}
