#include<iostream>
using namespace std;
int main() {
	int a[10] = { 0 };
	int b[50] = { 0 };
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	int k = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < a[i]; j++) {
			b[k++] = i;
		}
	}
	for (int i = 0; i < k; i++) {
		int temp = b[0];
		if (b[i] != 0) {
			b[0] = b[i];
			b[i] = temp;
			break;
		}
	}
	for (int i = 0; i < k; i++) {
		cout << b[i];
	}
}