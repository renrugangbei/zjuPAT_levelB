#include<iostream>
using namespace std;
int main() {
	int num;
	cin >> num;
	for (int i = 0; i != num / 100; i++) {
		cout << "B";
	}
	for (int j = 0; j != num / 10 % 10; j++) {
		cout << "S";
	}
	for (int k = 1; k != (num % 10) + 1; k++) {
		cout << k;
	}
	return 0;
}