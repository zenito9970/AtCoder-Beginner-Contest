// created: 2015/11/21 21:07:39
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

	int l, h, n, *a;
	a = new int[n];
	cin >> l >> h >> n;
	REP(i, n) {
		cin >> a[i];
	}
	REP(i, n) {
		if(h < a[i])
			cout << -1 << "\n";
		else {
			if(a[i] < l) {
				cout << l - a[i] << "\n";
			} else {
				cout << 0 << "\n";
			}
		}
	}

	return 0;
}
