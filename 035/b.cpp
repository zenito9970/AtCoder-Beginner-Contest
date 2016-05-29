// created: 2016/03/26 21:06:38
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
    string S; cin >> S;
    int T; cin >> T;
    int x = 0, y = 0;
    int unknown = 0;
    for(auto&& ch : S) {
        switch(ch) {
        case 'L': x--; break;
        case 'R': x++; break;
        case 'U': y--; break;
        case 'D': y++; break;
        default: unknown++; break;
        }
    }
    // DEBUG(x);
    // DEBUG(y);
    // DEBUG(unknown);
    int dx, dy;
    dx = abs(min(x, y));
    dy = abs(max(x, y));
    
    if(T == 1) {
        dx += unknown;
    } else {
        if(dy < unknown) {
            unknown -= dy;
            dy = 0;
            if(dx < unknown) {
                dx = (unknown - dx) % 2;
            } else {
                dx -= unknown;
            }
        } else {
            dy -= unknown;
        }
    }
    
    cout << dx + dy << endl;
    
    return 0;
}
