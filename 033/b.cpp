// created: 2016/02/06 21:05:07
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
    int n; cin >> n;
    vstring s(n);
    vint p(n);
    int sum = 0;
    rep(i, n) {
        cin >> s[i] >> p[i];
        sum += p[i];
    }
    rep(i, n) {
        if(sum / 2.0 < p[i]) {
            cout << s[i] << endl;
            return 0;
        }
    }
    cout << "atcoder" << endl;
    return 0;
}
