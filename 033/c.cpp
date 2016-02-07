// created: 2016/02/06 21:12:03
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

bool zcount(string str) {
    for(char c : str) {
        if(c == '0') return false;
    }
    return true;
}

int main() {
    string s; cin >> s;
    int count = 0;
    string subs = "";
    rep(i, (int)s.size()) {
        if(s[i] == '+') {
            count += zcount(subs) ? 1 : 0;
            subs = "";
        } else {
            subs += s[i];
        }
    }
    count += zcount(subs) ? 1 : 0;
    cout << count << endl;
    return 0;
}
