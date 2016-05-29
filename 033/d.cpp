// created: 2016/02/06 21:48:10
#include <iostream>
#include <string>
#include <vector>
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

#define tyokkaku 0
#define eikaku 1
#define donkaku 2

typedef pair<int, int> P;

int kaku(P pa, P pb, P pc) {
    int xab = abs(pa.first - pb.first), yab = abs(pa.second - pb.second),
        xbc = abs(pb.first - pc.first), ybc = abs(pb.second - pc.second),
        xca = abs(pc.first - pa.first), yca = abs(pc.second - pa.second);
    int dab = xab * xab + yab * yab,
        dbc = xbc * xbc + ybc * ybc,
        dca = xca * xca + yca * yca;
    if(dab < dbc) swap(dab, dbc);
    if(dab < dca) swap(sab, dca);
    int k = dbc + dca - dab;
    if(k == 0) return tyokkaku;
    if(k > 0)  return eikaku;
    return donkaku;
}

int main() {
    int n; cin >> n;
    vector<P> ps(n);
    for(auto&& p : ps) {
        int x, y; cin >> x >> y;
        p = make_pair(x + 10000, y + 10000)
    }
    
    int tyokkakuCount = 0, eikakuCount = 0, donkakuCount = 0;
    
    rep(i, n) {
        FOR(j, i + 1, n) {
            FOR(k, j + 1, n) {
                switch(kaku(ps[i], ps[j], ps[k])) {
                case tyokkaku:
                    tyokkakuCount++;
                    break;
                case eikaku:
                    eikakuCount++;
                    break;
                case donkaku:
                    donkakuCount++;
                    break;
                }
            }
        }
    }
    
    cout << eikakuCount << " " << tyokkakuCount << " " << donkakuCount << endl;
    
    return 0;
}
