#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
	string s;
	cin >> s;
	int a[10] = { 0 };
	for (auto s1 : s) {
		a[s1 - '0']++;
	}
	for (int i = 0; i < 10; i++) {
		if (a[i] != 0) {
			cout << i << ":" << a[i] << endl;
		}
	}
}