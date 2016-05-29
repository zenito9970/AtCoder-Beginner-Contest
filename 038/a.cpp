#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define rep(i,n) FOR(i,0,n)
#define DEBUG(x) cout<<#x<<": "<<x<<endl
using namespace std;

int main() {
    string S; cin >> S;
    cout << (S[S.length() - 1] == 'T' ? "YES" : "NO") << endl;
    return 0;
}
