// created: 2016/01/09 21:00:04
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
	int a, b, n; cin >> a >> b >> n;
    for(int i = n; ; i++) {
       if(i % a == 0 && i % b == 0) {
          cout << i << endl;
          return 0;
       }
    }
	return 0;
}
