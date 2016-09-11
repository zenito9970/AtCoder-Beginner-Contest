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
    int n, k, x, y; cin >> n >> k >> x >> y;
    int sum = 0;
    rep(i, n) {
        if(i < k) sum += x;
        else sum += y;
    }
    cout << sum << endl;
    return 0;
}
