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
    string s; cin >> s;
    int w = 0, l = 0;
    rep(i, s.size()) {
        if(i % 2 == 0) {
            if(s[i] == 'p') l++;
        } else {
            if(s[i] == 'g') w++;
        }
    }
    cout << w - l << endl;
    return 0;
}
