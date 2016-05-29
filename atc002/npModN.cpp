// created: 2016/04/10 22:03:00
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cassert>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define rep(i,n) FOR(i,0,n)
#define DEBUG(x) cout<<#x<<": "<<x<<endl
#define vint vector<int>
#define vdouble vector<double>
#define vstring vector<string>
using namespace std;
using ll = long long;

ll pow_mod(ll N, ll P, ll M) {
    if(P == 0) return 1;
    if(P % 2 == 0) {
        ll half = pow_mod(N, P/2, M);
        return half * half % M;
    } else {
        return pow_mod(N, P-1, M) * N % M;
    }
}

int main() {
    ll N, M, P; cin >> N >> M >> P;
    ll ans = pow_mod(N, P, M);
    cout << ans << endl;
    return 0;
}
