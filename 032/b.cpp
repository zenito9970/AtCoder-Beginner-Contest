// created: 2016/01/09 21:24:45
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <cmath>
#include <algorithm>
#include <cassert>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n)  FOR(i,0,n)
#define DEBUG(x) cout<<#x<<": "<<x<<endl
using namespace std;

int main() {
	string s;
    int k;
    cin >> s >> k;
    if(s.length() < k) {
        cout << 0 << endl;
        return 0;
    }
    set<string> subs;
    int count = 0;
    REP(i, s.length() - k + 1) {
       auto isIns = subs.insert(s.substr(i, k));
       if(isIns.second) count++;
    }
    cout << count << endl;
	return 0;
}
