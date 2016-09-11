#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define rep(i,n) FOR(i,0,n)
#define each(e,v) for(auto&& e:(v))
#define DEBUG(x) cout<<#x<<": "<<x<<endl
#define val const auto
using namespace std;
using vint = vector<int>;
using vdouble = vector<double>;
using vstring = vector<string>;

using LL = long long;
const int INF = 1<<28;
int a[100005];
int dp[100005];

int main() {
  int n; cin >> n;
  fill_n(dp, n+5, INF);
  rep(i, n) {
    cin >> a[i];
  }
  dp[0] = 0;
  rep(i, n) {
    dp[i+1] = min(dp[i+1], dp[i] + abs(a[i] - a[i+1]));
    dp[i+2] = min(dp[i+2], dp[i] + abs(a[i] - a[i+2]));
  }
  int ans = dp[n-1];
  cout << ans << endl;
  return 0;
}
