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
  int N; cin >> N;
  vector<pair<int, int>> a(N);
  rep(i, N) {
    cin >> a[i].first;
    a[i].second = i + 1;
  }
  sort(a.begin(), a.end(), greater<pair<int, int>>());
  rep(i, N) cout << a[i].second << endl;
  return 0;
}
