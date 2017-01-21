#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main() {
	int  cntA = 0, cntB = 0, a = 0, b = 0, temp;
	string s1, s2;
	char d1, d2;
	cin >> s1 >> d1 >> s2 >> d2;
	for (auto c : s1) {
		if (c == d1) {
			cntA++;
		}
	}
	for (auto c : s2) {
		if (c == d2) {
			cntB++;
		}
	}
	if (cntA != 0) {
		 temp = d1 - '0';
		for (int i = 0; i < cntA; i++) {
			a = a * 10 + temp;
		}
	}
	if (cntB != 0) {
		temp = d2 - '0';
		for (int i = 0; i < cntB; i++) {
			b = b * 10 + temp;
		}
	}
	cout << a + b;
}