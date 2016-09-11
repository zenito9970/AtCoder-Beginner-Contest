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
    int a, b, c; cin >> a >> b >> c;
    vint s(11, 0);
    s[a]++; s[b]++; s[c]++;
    if(s[5] == 2 && s[7] == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
