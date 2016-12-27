#include<iostream>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	int num[100];
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	for (int j = n-m;j<n; j++) {
		cout << num[j] << " ";
	}
	for (int k = 0; k < n - m-1; k++) {
		cout << num[k] << " ";
	}
	cout << num[n - m - 1];
}