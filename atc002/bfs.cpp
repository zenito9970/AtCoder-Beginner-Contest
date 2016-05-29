// created: 2016/04/10 21:02:02
#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <queue>
#include <utility>
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
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
vector<vector<int>> visited;

void bfs(int sx, int sy, int gx, int gy, int R, int C) {
    queue<pair<int, int>> Q;
    Q.push(make_pair(sx, sy));
    int ans = 1;
    
    while(true) {
        auto now = Q.front(); Q.pop();
        int x = now.first, y = now.second;
        if(x == gx && y == gy) return;
        rep(d, 4) {
            int px = x + dx[d], py = y + dy[d];
            int bbox = visited[x][y];
            int& box = visited[px][py];
            if(box == 0 && !(px == sx && py == sy)) {
                Q.push(make_pair(px, py));
                box = bbox + 1;
            }
        }
    }
}

int main() {
    int R, C; cin >> R >> C;
    int sx, sy; cin >> sy >> sx; sx--; sy--;
    int gx, gy; cin >> gy >> gx; gx--; gy--;
    visited = vector<vector<int>>(C, vector<int>(R, 0));
    rep(y, R) {
        rep(x, C) {
            char c; cin >> c;
            if(c == '#') visited[x][y] = -1;
        }
    }
    
    bfs(sx, sy, gx, gy, R, C);
    cout << visited[gx][gy] << endl;
    
    return 0;
}
