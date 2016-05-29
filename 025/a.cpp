#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n)  FOR(i,0,n)
using namespace std;
const double PI = acos(-1.0);

int main() {
  string fav;
  int n;
  string str[25];
  cin >> fav >> n;
  REP(i, 25) {
    str[i] = "  ";
  }
  REP(i, 5) {
    REP(j, 5) {
      str[5 * i + j][0] = fav[i];
      str[5 * i + j][1] = fav[j];
    }
  }
  cout << str[n - 1] << endl;
}
