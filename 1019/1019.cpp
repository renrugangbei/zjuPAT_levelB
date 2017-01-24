#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<iomanip>
using namespace std;
int trans(vector<int> v1) {
	int number = 0;
	for (auto v : v1) {
		number = number * 10 + v;
	}
	return number;
}
int main() {
	int number;
	cin >> number;
	vector<int> v1, v2; 
	int temp = number;
	for (int i = 0; i < 4; i++) {
		v1.push_back(temp % 10);
		v2.push_back(temp % 10);
		temp /= 10;
	}
	if (number / 1000 == number / 100 % 10 && number / 100 % 10== number / 10 % 10 && number / 10 % 10== number % 10) {
		cout << number << " - " << number << " = 0000";
	} else {
		do {//用do-while 防止输入为6174
			int number1, number2;
			sort(v1.begin(), v1.end(), greater<int>());
			sort(v2.begin(), v2.end(), less<int>());
			number1 = trans(v1);
			number2 = trans(v2);
			number = number1 - number2;
			cout << setfill('0') << setw(4) << number1 << " - "  << setfill('0') << setw(4) << number2 << " = " << setfill('0') << setw(4) << number << endl;
			temp = number;
			for (auto &v : v1) {
				v = temp % 10;
				temp /= 10;
			}
			temp = number;
			for (auto &v : v2) {
				v = temp % 10;
				temp /= 10;
			}
		} while (number != 6174);
	}  
}