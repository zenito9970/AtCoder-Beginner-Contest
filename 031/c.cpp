// created: 2015/11/21 22:06:58
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

	int n, *a, ans = -2500, bans;
	cin >> n;
	a = new int[n];
	REP(i, n) {
		cin >> a[i];
	}
	REP(i, n - 2) {
		a[n - 1 - i - 2] += a[n - 1 - i];
	}
	REP(i, n) {// 高橋くん:i, 青木くん:j
		REP(j, n) {
			if(i == j) continue;
			if(i < j) {
				bans = a[i + (i % 2)] - a[j - (j % 2)];
			}
			if(j < i) {
				bans = a[j + (j % 2)] - a[i - (i % 2)];
			}
			if(ans < bans) ans = bans;
		}
	}
	cout << ans << endl;

	return 0;
}
