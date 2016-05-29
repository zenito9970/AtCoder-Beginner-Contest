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
    int n, k; cin >> n >> k;
    vint a(n);
    rep(i, n) cin >> a[i];
    long long sumA = 0;
    long long sum = 0;
    rep(i, k) sum += a[i];
    sumA += sum;
    rep(i, n - k) {
        sum -= a[i];
        sum += a[i + k];
        
        sumA += sum;
    }
    cout << sumA << endl;
    return 0;
}
