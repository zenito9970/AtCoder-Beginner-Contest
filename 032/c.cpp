// created: 2016/01/09 21:58:23
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cassert>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n)  FOR(i,0,n)
#define DEBUG(x) cout<<#x<<": "<<x<<endl
using namespace std;

int main() {
	int n, k; cin >> n >> k;
    vector<int> s(n);
    for(auto&& buf : s) {
        cin >> buf;
        if(buf == 0) {
           cout << n << endl;
           return 0;
        }
    }
    int ans = 0;
    long long now = 1;
    int begin = 0, end = 0;
    while(end < n) {
       if(now * s[end] <= k) {
           now *= s[end];
           end++;
           ans = max(ans, end - begin);
           continue;
       }
       if(begin != end) {
           now /= s[begin];
           begin++;
           continue;
       }
       begin++;
       end++;
    }
    cout << ans << endl;
	return 0;
}
