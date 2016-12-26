#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main() {
	int num;
	int prime[10000] = { 0 };
		int count = 0;
		cin >> num;
		int j;
		for (int i = 2; i <= num; i++) {
			for (j = 2; j*j <= i; j++) {
				if (i%j == 0) {
					break;
				}
			}
			if (j*j > i) {
				prime[count++] = i;
			}
			
		}
		int cun = 0;
		for (int k = 0; k < count; k++) {
			if (prime[k + 1] - prime[k] == 2) {
				cun++;
			}
		}
		if (num > 3)
			cout << cun ;
		else
			cout << "0";
		return 0;
}
