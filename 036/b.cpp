// created: 2016/04/09 21:04:40
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
    vector<vector<char>> board(n, vector<char>(n));
    rep(i, n) {
        rep(j, n) {
            cin >> board[i][j];
        }
    }
    
    rep(j, n) {
        rep(i, n) {
            cout << board[n-i-1][j];
        }
        cout << endl;
    }
    return 0;
}
