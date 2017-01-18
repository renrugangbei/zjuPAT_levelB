#include<iostream>
using namespace std;
int main() {
	int min, max;
	int j = 0, count = 0, i = 2, flag = 0;
	bool isfrist = true;
	int prime[10000];
	cin >> min >> max;
	while (count<max) {
		for (j = 2; j*j <= i; j++) {
			if (i%j == 0) {
				break;
			}
		}
		if (j*j > i) {
			prime[count++] = i;
		}
		i++;
	}
	for (int k = min - 1; k < max; k++) {
		flag++;
		if (isfrist) {
			cout << prime[k];
			isfrist = false;
		} else {
			cout << " " << prime[k];
		}
		if (flag == 10) {
			cout << endl;
			flag = 0;
			isfrist = true;
		}
	}
}