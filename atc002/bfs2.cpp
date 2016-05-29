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

const int INF = 2e9;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
int R, C;
int sx, sy;
int gx, gy;
vector<vint> board;

int bfs() {
    queue<pair<int, int>> Q;
    Q.push(make_pair(sx, sy));
    while(!Q.empty()) {
        int x = Q.front().first;
        int y = Q.front().second;
        Q.pop();
        rep(d, 4) {
            int now = board[x][y];
            int& next = board[x + dx[d]][y + dy[d]];
            if(now + 1 < next) {
                next = now + 1;
                Q.push(make_pair(x + dx[d], y + dy[d]));
            }
        }
    }
    return board[gx][gy];
}

int main() {
    cin >> R >> C;
    cin >> sy >> sx;
    sx--; sy--;
    cin >> gy >> gx;
    gx--; gy--;
    board = vector<vint>(C, vint(R, INF));
    rep(y, R) {
        rep(x, C) {
            char ch;
            cin >> ch;
            if(ch == '#') board[x][y] = -1;
        }
    }
    board[sx][sy] = 0;
    int ans = bfs();
    cout << ans << endl;
    // DEBUG(gx); DEBUG(gy);
    
    // rep(y, R) {
    //     rep(x, C) {
    //         printf(" %2d", board[x][y]);
    //     }
    //     cout << endl;
    // }
    
    return 0;
}
