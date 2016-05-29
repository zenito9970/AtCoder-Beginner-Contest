#include <iostream>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n)  FOR(i,0,n)

int main() {
  int a, max = 0;
  cin >> a;
  REP(i, a / 2 + 1) {
	  if(i * (a - i) > max) {
		  max = i * (a - i);
	  }
  }
  
  cout << max << endl;
}
