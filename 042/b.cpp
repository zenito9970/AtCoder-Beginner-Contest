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

int main() {
    int N, L; cin >> N >> L;
    vstring S(N);
    rep(i, N) cin >> S[i];
    sort(S.begin(), S.end());
    rep(i, N) cout << S[i];
    cout << endl;
    return 0;
}
