// created: 2016/03/26 21:49:38
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

int main() {
    int N, Q; cin >> N >> Q;
    vint ps(N, 0);
    vint ns(N + 1, 0);
    rep(i, Q) {
        int l, r; cin >> l >> r;
        ns[l - 1]++;
        ns[r]--;
    }
    int n = 0;
    rep(i, N) {
        n += ns[i];
        ps[i] = n;
    }
    for(int p : ps) {
        cout << (p % 2);
    }
    cout << endl;
    return 0;
}
