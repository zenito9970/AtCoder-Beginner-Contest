// created: 2016/01/09 22:56:42
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cassert>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n)  FOR(i,0,n)
#define DEBUG(x) cout<<#x<<": "<<x<<endl
using namespace std;

int main() {
    int n, W; cin >> n >> W;
    vector<int> v(n), w(n);
    int vmax = 0, wmax = 0;
    REP(i, n) {
        cin >> v[i] >> w[i];
        wmax = max(wmax, w[i]);
        vmax = max(vmax, v[i]);
    }
    int ans = 0;
    vector<vector<int>> dp(n + 1, vector<int>(n + 1));
    if(n <= 30) {
       //
    } else if(wmax <= 1000) {
       //
    } else {
       //
    }
    cout << ans << endl;
    return 0;
}
