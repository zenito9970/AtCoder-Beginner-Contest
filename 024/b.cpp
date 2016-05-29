#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <cassert>
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
using namespace std;
const double PI = acos(-1.0);

int main() {
	int N, T ,ans = 0, memo = 0;
	int A[100000];
	cin >> N >> T;
	REP(i, N) {
		cin >> A[i];
	}
	REP(i, N - 1) {
		if(A[i + 1] - A[i] > T) {
			ans += A[i] - A[memo] + T;
			memo = i + 1;
		}
	}
	ans += A[N - 1] - A[memo] + T;

	cout << ans << endl;
}
