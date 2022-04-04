#include <iostream>
#include <string>
using namespace std;

int main() {
	int four, seven, value = 0;
	string number;
	cin >> number;
	for (int i = 0; i < number.size(); ++i) {
		if (number[i] == '4') {
		four++;
	}
	if (number[i] == '7') {
		seven++;
	}
	}
	value = seven + four;
	if (value == 4 || 7){
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}
