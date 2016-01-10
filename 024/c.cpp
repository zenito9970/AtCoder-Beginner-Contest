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
	cin.tie(0);
	ios::sync_with_stdio(false);
	int N, D, K, *ans;
	int *L, *R, *S, *T;
	cin >> N >> D >> K;
	L = new int[D];
	R = new int[D];
	S = new int[K];
	T = new int[K];
	ans = new int[K];
	REP(i, D) {
		cin >> L[i] >> R[i];
	}
	REP(i, K) {
		cin >> S[i] >> T[i];
	}
	REP(i, K) {
		REP(j, D) {
			if(L[j] <= S[i] && S[i] <= R[j]) {
				if(S[i] < T[i]) {
					if(T[i] <= R[j]) S[i] = T[i];
					else S[i] = R[j];
				} else {
					if(L[j] <= T[i]) S[i] = T[i];
					else S[i] = L[j];
				}
			}
			if(S[i] == T[i]) {
				assert(j + 1 <= D);
				cout << j + 1 << "\n";
				break;
			}
		}
	}
	flush(cout);
	return 0;
}
