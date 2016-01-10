#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n)  FOR(i,0,n)
const double PI = acos(-1.0);

double circle(int n) {
	return n * n * PI;
}

int main() {
	int n, r[1000];
	double area = 0;
	cin >> n;
	REP(i, n) {
		cin >> r[i];
	}
	sort(r, r + n);
	REP(i, n) {
		if(i % 2 == 0) {
			area += circle(r[n - i - 1]);
		} else {
			area -= circle(r[n - i - 1]);
		}
	}
	
	cout << fixed << setprecision(12) << area << endl;
}
