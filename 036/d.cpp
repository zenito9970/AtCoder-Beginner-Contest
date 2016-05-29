// created: 2016/04/09 21:33:27
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
#define int long long

const int MOD = 1000000007;
vector<vint> graph;
vint dp, dp2;

void dfs(int p, int x) {
    //
}

signed main() {
    int n; cin >> n;
    graph = vector<vint>(n, vint(0));
    dp = vint(n); dp2 = vint(n);
    rep(i, n - 1) {
        int a, b; cin >> a >> b;
        a--; b--;
        graph[a].push_buck(b);
        graph[b].push_buck(a);
    }
    
    dfs(-1, 0);
    cout << graph[0] << endl;
    
    return 0;
}
