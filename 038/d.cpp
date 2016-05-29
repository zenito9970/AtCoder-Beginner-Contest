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

const int INF = 1e9;
vint boxes[100001];

int main() {
    int n; cin >> n;
    set<int> hs;
    rep(i, n) {
        int h, w; cin >> w >> h;
        hs.insert(h);
        boxes[h].push_back(w);
    }
    int bmw = -INF;
    int count = 0;
    for(int h : hs) {
    // for(auto&& it = hs.rbegin(); it != hs.rend(); it++) {
        // const int h = *it;
        vint& w = boxes[h];
        sort(w.begin(), w.end());
        const int m = w.size();
        rep(i, m) {
            // cout << h << " " << w[i] << endl;
            if(w[i] <= bmw) continue;
            bmw = w[i];
            count++;
            break;
        }
    }
    cout << count << endl;
    return 0;
}
