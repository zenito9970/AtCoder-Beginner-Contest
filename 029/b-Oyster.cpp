#include <iostream>
using namespace std;
int main(){
	int r = 0;
	string str;
	for(int i = 0;i < 12;i++){
		cin >> str;
		for(int j = 0;j < str.size();j++){
			if(str[j] == 'r'){
				r++;
				break;
			}
		}
	}
	cout << r << endl;
	return 0;
}
