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
  int n, x; cin >> n >> x;
  cout << min(x-1, n-x) << endl;
  return 0;
}
