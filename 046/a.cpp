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
    set<int> s;
    rep(i, 3) {
        int a; cin >> a;
        s.insert(a);
    }
    cout << s.size() << endl;
    return 0;
}
