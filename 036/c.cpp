// created: 2016/04/09 21:15:19
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
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
    vint a(n);
    rep(i, n)
        cin >> a[i];
    vint b(n, 0), buf = a;
    sort(buf.begin(), buf.end());
    FOR(i, 1, n) {
        if(buf[i - 1] < buf[i]) b[i] = b[i - 1] + 1;
        else b[i] = b[i - 1];
    }
    
    unordered_map<int, int> bs;
    rep(i, n) {
        bs[buf[i]] = b[i];
    }
    rep(i, n) {
        cout << bs[a[i]] << endl;
    }
    return 0;
}
