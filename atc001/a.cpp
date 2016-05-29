// created: 2016/03/04 0:09:01
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

vector<vector<char>> maps;
vector<vint> isVisit;
int h, w;

bool dfs(int x, int y) {
    if(x < 0 || y < 0 || w <= x || h <= y) return false;
    if(isVisit[x][y] != 2) return isVisit[x][y] == 1 ? true : false;
    if(maps[x][y] == '#') {
        isVisit[x][y] = 0;
        return false;
    }
    if(maps[x][y] == 'g') {
        isVisit[x][y] = 1;
        return true;
    }
    bool res = dfs(x - 1, y) | dfs(x, y - 1) | dfs(x + 1, y) | dfs(x, y + 1);
    isVisit[x][y] = res ? 1 : 0;
    return res;
}

int main() {
    cin >> h >> w;
    int startx, starty;
    maps = vector<vector<char>>(h, vector<char>(w));
    isVisit = vector<vint>(h, vint(w, 2));
    int x = 0, y = 0;
    for(auto&& col : maps) {
        for(auto&& c : col) {
            cin >> c;
            if(c == 's') {
                startx = x;
                starty = y;
            }
            x++;
        }
        y++;
    }
    if(dfs(startx, starty)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    for(auto&& col : maps) {
        for(auto&& c : col) {
            cout << c;
        }
        cout << endl;
    }
    cout << flush;
    return 0;
}
