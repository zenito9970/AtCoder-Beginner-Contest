#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <cassert>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n)  FOR(i,0,n)
using namespace std;
const double PI = acos(-1.0);

int main() {
	int n, a, b, d, ans = 0;
	string s;

	cin >> n >> a >> b;
	REP(i, n) {
		s = "";
		cin >> s >> d;
		d = (d < a) ? a : ((b < d) ? b : d);
		if(s == "East") {
			ans += d;
		} else {
			ans -= d;
		}
	}

	if(ans == 0) cout << 0 << endl;
	else cout << ((ans > 0) ? "East " : "West ") << abs(ans) << endl;
}
