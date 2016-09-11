#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define rep(i,n) FOR(i,0,n)
#define each(e,v) for(auto&& e:(v))
#define DEBUG(x) cout<<#x<<": "<<x<<endl
using namespace std;
using vint = vector<int>;
using vdouble = vector<double>;
using vchar = vector<char>;
using vstring = vector<string>;

int main() {
    string S; cin >> S;
    int wb[20];
    rep(i, 20) wb[i] = (S[i]=='W' ? 0 : 1);
    int l = -1, r, count = 0;
    rep(i, 20) {
      if((wb[i]|wb[i+1])==0) {
        if(l < 0) l = i;
        else {
          r = i;
          break;
        }
      } else if(l >= 0 && wb[i]==1) {
        count++;
      }
    }
    string ans;
    if(count == 2) {
      string ss[] = {"Si", "La", "So", "Fa"};
      ans = ss[l/2];
    } else {
      string ss[] = {"Mi", "Re", "Do"};
      ans = ss[l/2];
    }
    cout << ans << endl;
    return 0;
}
