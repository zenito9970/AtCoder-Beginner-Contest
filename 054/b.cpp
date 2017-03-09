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
    int n, m; cin >> n >> m;
    vector<vint> A(n, vint(n)), B(m, vint(m));
    rep(y, n) {
        string line; cin >> line;
        rep(x, n) A[x][y] = line[x] == '#' ? 1 : 0;
    }
    rep(y, m) {
        string line; cin >> line;
        rep(x, m) B[x][y] = line[x] == '#' ? 1 : 0;
    }
    rep(y0, n-m+1) {
        rep(x0, n-m+1) {
            if([&]() {
            rep(y, m) {
                rep(x, m) {
                    if(B[x][y] != A[x+x0][y+y0]) {
                        return false;
                    }
                }
            }
            return true;
            }()) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}
