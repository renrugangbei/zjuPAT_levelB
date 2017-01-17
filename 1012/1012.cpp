#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main() {
	int n, number, cnt1 = 0, cnt2 = 0,  cnt4 = 0, cnt5 = -2147483648, cntA = 0, cntB = 0, cntC = 0, cntE = 0;
	double cnt3 = 0, cntD = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> number;
		switch (number % 5) {
		default:
			break;
		case 0:
			if (number % 2 == 0) {
				cnt1 += number;
				cntA++;
			}
			break;
		case 1:
			cnt2 += pow(-1, cntB)*number;
			cntB++;
			break;
		case 2:
			cnt3++;
			cntC++;
			break;
		case 3:
			cnt4 += number;
			cntD++;
			break;
		case 4:
			if (number > cnt5)
				cnt5 = number;
			cntE++;
			break;
		}
	}
	if (cntA != 0) {
		cout << cnt1 << " ";
	} else {
		cout << "N" << " ";
	}
	if (cntB != 0) {
		cout << cnt2 << " ";
	} else {
		cout << "N" << " ";
	}
	if (cntC != 0) {
		cout << cntC << " ";
	} else {
		cout << "N" << " ";
	}
	if (cntD != 0) {
		cout << fixed << setprecision(1) << cnt4 / cntD << " ";
	} else {
		cout << "N" << " ";
	}
	if (cntE != 0) {
		cout << cnt5;
	} else {
		cout << "N";
	}
}
