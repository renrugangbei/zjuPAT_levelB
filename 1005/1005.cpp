#include<iostream>
#include<algorithm>
using namespace std;
int cmp(int a, int b) { return a > b; }
int main() {
	int num;
	cin >> num;
	int number[101] = {0};
	for (int i = 0; i < num; i++) {
		cin >> number[i];
	}
	for (int i = 0; i < num; i++) {
		int temp = number[i];
		while (temp != 1&&temp) {
			if (temp % 2 == 0) {
				temp /= 2;
			}
			else {
				temp = (temp * 3 + 1) / 2;
			}
			for (int k = 0; k < num; k++) {
				if (temp == number[k]) {
					number[k] = 0;
				}
			}
		}
	}
	sort(number, number + num, cmp);
	int j = 0;
	for (; number[j] != 0 && number[j + 1] != 0; j++) {
		cout << number[j] << " ";
	}
	cout << number[j];	
	return 0;
}