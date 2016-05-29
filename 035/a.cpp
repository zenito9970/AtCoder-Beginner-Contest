// created: 2016/03/26 20:54:01
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
    int W, H; cin >> W >> H;
    if(int(H * 4 / 3.0) == W) {
        cout << "4:3" << endl;
    } else {
        cout << "16:9" << endl;
    }
    return 0;
}
