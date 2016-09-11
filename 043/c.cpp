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
const long long INF = 1e9;

int main() {
    int n; cin >> n;
    vint a(n);
    rep(i, n) cin >> a[i];
    sort(a.begin(), a.end());
    long long mini = INF;
    FOR(i, a.front(), a.back()+1) {
        long long sum = 0;
        rep(j, n) {
            sum += pow(a[j] - i, 2);
        }
        mini = min(mini, sum);
    }
    cout << mini << endl;
    return 0;
}
