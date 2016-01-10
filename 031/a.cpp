// created: 2015/11/21 20:38:58
#include <iostream>
#include <string>
#include <cmath>
#include <cassert>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n)  FOR(i,0,n)
using namespace std;
const double PI = acos(-1.0);

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int a, d, ans;
	cin >> a >> d;
	if(a <= d)
		ans = (a + 1) * d;
	else
		ans = a * (d + 1);
	cout << ans << "\n";

	return 0;
}
