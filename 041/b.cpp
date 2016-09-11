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

int main() {
  const long long MOD = 1e9 + 7;
  long long a, b, c; cin >> a >> b >> c;
  a %= MOD; b %= MOD; c %= MOD;
  cout << (a * b % MOD) * c % MOD << endl;
  return 0;
}
