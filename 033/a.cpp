// created: 2016/02/06 20:57:13
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cassert>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define rep(i,n) FOR(i,0,n)
#define DEBUG(x) cout<<#x<<": "<<x<<endl
#define vint vector<int>
#define vdouble vector<double>
#define vstring vector<string>
using namespace std;

int main() {
    int n; cin >> n;
    if(n % 1111 == 0) {
        cout << "SAME" << endl;
    } else {
        cout << "DIFFERENT" << endl;
    }
    return 0;
}
