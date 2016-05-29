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
	int A, B, C, K, S, T, ans = 0;
	cin >> A >> B >> C >> K >> S >> T;
	ans += A * S + B * T;
	if (S + T >= K) ans -= (S + T) * C;
	cout << ans << endl;
}
