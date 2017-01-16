#include<iostream>
using namespace std;
int main() {
	long long numberA[10], numberB[10], numberC[10];
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> numberA[i] >> numberB[i] >> numberC[i];
	}
	for (int i = 0; i < t; i++) {
		if (numberA[i] + numberB[i]> numberC[i]) {
			std::cout << "Case #" << i + 1 << ": true" << std::endl;
		} else {
			std::cout << "Case #" << i + 1 << ": false" << std::endl;
		}
	}
	return 0;
}
