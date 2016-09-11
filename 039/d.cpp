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

using Img = vector<vint>;
const int dx[] = {-1, 0, 1, -1, 0, 1, -1, 0, 1};
const int dy[] = {-1, -1, -1, 0, 0, 0, 1, 1, 1};
int H, W;

Img shrink(const Img& img, int color) {
  Img ans = img;
  FOR(y, 1, H+1) {
    FOR(x, 1, W+1) {
      if(img[x][y] == color) {
        rep(i, 9) {
          int tx = x + dx[i];
          int ty = y + dy[i];
          ans[tx][ty] = color;
        }
      }
    }
  }
  return ans;
}

void debugprint(Img img) {
  FOR(y, 1, H+1) {
    FOR(x, 1, W+1) {
      cout << img[x][y];
    }
    cout << endl;
  }
}

int main() {
    cin >> H >> W;
    Img input(W+2, vint(H+2));
    rep(i, H) {
      string S; cin >> S;
      rep(j, W) {
        input[j+1][i+1] = (S[j]=='.' ? 0 : 1);
      }
    }
    Img ans = shrink(input, 0);
    // debugprint(ans);
    Img rev = shrink(ans, 1);
    // debugprint(rev);
    bool t = true;
    FOR(y, 1, H+1) {
      FOR(x, 1, W+1) {
        if(input[x][y] != rev[x][y]) t = false;
      }
    }
    if(t) {
      cout << "possible" << endl;
      FOR(y, 1, H+1) {
        FOR(x, 1, W+1) {
          cout << (ans[x][y] == 1 ? "#" : ".");
        }
        cout << endl;
      }
    } else {
      cout << "impossible" << endl;
    }
    return 0;
}
