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
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
const int MOD = 1000000007;
int a[1002][1002];
int moveCount[1002][1002];
long long treeCount[1002][1002];

int mCount(int x, int y) {
    if(moveCount[x][y] >= 0) return moveCount[x][y];
    int sum = 0;
    rep(d, 4) {
        if(a[x][y] < a[x + dx[d]][y + dy[d]]) sum++;
    }
    moveCount[x][y] = sum;
    return sum;
}

long long tCount(int x, int y) {
    if(treeCount[x][y] >= 0) return treeCount[x][y];
    if(mCount(x, y) == 0) {treeCount[x][y] = 0; return 0;}
    long long sum = mCount(x, y);
    rep(d, 4) {
        if(a[x][y] < a[x + dx[d]][y + dy[d]]) {
            sum += tCount(x + dx[d], y + dy[d]);
            sum %= MOD;
        }
    }
    treeCount[x][y] = sum;
    return sum;
}

int main() {
    int h, w; cin >> h >> w;
    rep(i, 1002) rep(j, 1002) {
        a[i][j] = -1;
        moveCount[i][j] = -1;
        treeCount[i][j] = -1;
    }
    rep(y, h) {
        rep(x, w) {
            cin >> a[x+1][y+1];
        }
    }
    long long sum = 0;
    rep(y, h) {
        rep(x, w) {
            sum += tCount(x+1, y+1);
            sum %= MOD;
        }
    }
    // rep(y, h+2) {
    //     rep(x, w+2) {
    //         cout << " " << treeCount[x][y];
    //     }
    //     cout << endl;
    // }
    cout << sum + h * w << endl;
    return 0;
}
