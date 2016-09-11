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

const int MOD = 1e9 + 7;

int graph[100005][100005];

void debugGraph(int W, int H) {
    cout << "---------" << endl;
    rep(y, H+1) {
        rep(x, W+1) {
            // cout << graph[x][y] << " ";
            printf(" %2d", graph[x][y]);
        }
        cout << endl;
    }
    cout << "---------" << endl;
}

int main() {
    int H, W, A, B; cin >> H >> W >> A >> B;
    // vector<vint> graph = vector<vint>(W+1, vint(H+1, -1));
    // debugGraph(W, H);
    // fill_n(graph, 100005*100005, -1);
    rep(y, H+1) rep(x, W+1) {
        graph[x][y] = -1;
        if(y == 1 || x == 1) graph[x][y] = 1;
        if(y == 0 || x == 0) graph[x][y] = 0;
        if(y > H-A && x <= B) graph[x][y] = 0;
    }
    // debugGraph(W, H);
    FOR(y, 1, H-A+1) {
        FOR(x, 1, B+1) {
            if(graph[x][y] == -1) graph[x][y] = (graph[x-1][y] + graph[x][y-1]) % MOD;
        }
    }
    FOR(y, 1, H+1) {
        FOR(x, B+1, W+1) {
            if(graph[x][y] == -1) graph[x][y] = (graph[x-1][y] + graph[x][y-1]) % MOD;
        }
    }
    cout << graph[W][H] << endl;
    // debugGraph(W, H);
    return 0;
}
