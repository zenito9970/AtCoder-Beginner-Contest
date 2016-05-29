#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define rep(i,n) FOR(i,0,n)
#define DEBUG(x) cout<<#x<<": "<<x<<endl
using namespace std;
using vint = vector<int>;
using vdouble = vector<double>;
using vchar = vector<char>;
using vstring = vector<string>;

int main() {
    int n; cin >> n;
    vint a(n);
    rep(i, n) cin >> a[i];
    int count = 0, l = 0, r = 0;
    while(l < n) {
        if(r+1 < n && a[r] < a[r+1]) {
            r++;
        } else {
            rep(i, r-l+1) {
                count += i+1;
            }
            if(l == r || r == n-1) r++;
            l = r;
        }
        // cout << "(" << l << ", " << r << ")" << endl;
        // DEBUG(count);
    }
    cout << count << endl;
    return 0;
}
