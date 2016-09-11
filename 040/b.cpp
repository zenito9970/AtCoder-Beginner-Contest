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
const long long INF = 1<<28;

int main() {
  int n; cin >> n;
  int ans = INF;
  FOR(H, 1, n) {
    int W = n / H;
    int value = abs(H-W) + (n - H*W);
    ans = min(ans, value);
  }
  cout << ans << endl;
  return 0;
}
