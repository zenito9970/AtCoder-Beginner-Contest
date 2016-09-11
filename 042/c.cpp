#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define rep(i,n) FOR(i,0,n)
#define each(e,v) for(auto&& e:(v))
#define DEBUG(x) cout<<#x<<": "<<x<<endl
using namespace std;
using vint = vector<int>;
using vdouble = vector<double>;
using vstring = vector<string>;

bool canPay(int n, vint D, int K) {
    //
}

int main() {
    int N, K; cin >> N >> K;
    vint D(N);
    rep(i, K) cin >> D[i];
    int cost = N;
    while(!canPay(cost, D, K)) cost++;
    cout << cost << endl;
    return 0;
}
