#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n, buf;
	string pass = "";
	cin >> n;
	for(int i = 0; i < n; i++) {
		pass.push_back('a');
	}
	cout << pass << endl;
	for(int i = 0; i < pow(3, n) - 1; i++) {
		buf = n - 1;
		if(pass[buf] == 'c'){
			while(pass[buf] == 'c' && buf > 0) {
				pass[buf] = 'a';
				buf--;
			}
			pass[buf]++;
			cout << pass << endl;
		} else {
			pass[buf]++;
			cout << pass << endl;
		}
	}
	return 0;
}
