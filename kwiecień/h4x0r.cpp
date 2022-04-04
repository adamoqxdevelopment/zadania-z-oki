#include <iostream>
#include <string>
using namespace std;

int main() {
	string napis;
	cin >> napis;
	for (int i = 0; i < napis.size(); ++i) {
		if (napis[i] == 'a') {
			napis[i] = '4';
		}
		if (napis[i] == 'e') {
			napis[i] = '3';
		}
		if (napis[i] == 'i') {
			napis[i] = '1';
		}
		if (napis[i] == 'o') {
			napis[i] = '0';
		}
		if (napis[i] == 's') {
			napis[i] = '5';
		}
		else ;
		
	}
	cout << napis;
	
}
