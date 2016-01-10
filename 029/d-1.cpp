#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main(){
	int n, count = 0;
	stringstream s;
	string str;
	cin >> n;
	for(int i = 0; i < n; i++) {
		s << i + 1;
	}
	str = s.str();
	for(int i = 0; i < str.size(); i++){
		if(str[i] == '1') count++;
	}
	cout << count << endl;
	return 0;
}
