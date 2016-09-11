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
    string S; cin >> S;
    const int n = S.length();
    rep(i, n-1) {
        if(S[i] == S[i+1]) {
            cout << i+1 << " " << i+2 << endl;
            return 0;
        }
    }
    rep(i, n-2) {
        if(S[i] == S[i+2]) {
            cout << i+1 << " " << i+3 << endl;
            return 0;
        }
    }
    cout << "-1 -1" << endl;
    return 0;
}
