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
using P = pair<int, int>;

struct segtree {
    int n;
    vint d;
    segtree(int mx) {
        n = 1;
        while(n < mx) n *= 2;
        d = vint(n * 2);
    }
    
    int getMax(int a, int b, int i = 1, int l = 0, int r = -1) {
        if(r == -1) r = n;
        if(a <= l && r <= b) return d[i];
        int res = 0;
        int c = (l + r) / 2;
        if(a < c) res = max(res, getMax(a, b, i * 2, l, c));
        if(c < b) res = max(res, getMax(a, b, i * 2 + 1, c, r));
        return res;
    }
    
    void add(int i, int x) {
        i += n;
        while(i) {
            d[i] = max(d[i], x);
            i /= 2;
        }
    }
};

int main() {
    int n; cin >> n;
    vector<P> a(n);
    rep(i, n) {
        cin >> a[i].first >> a[i].second;
        a[i].second *= -1;
    }
    sort(a.begin(), a.end());
    
    int ans = -INF;
    segtree tree(100004);
    rep(i, n) {
        int h = -a[i].second;
        int now = tree.getMax(0, h) + 1;
        ans = max(ans, now);
        tree.add(h, now);
    }
    cout << ans << endl;
    return 0;
}
