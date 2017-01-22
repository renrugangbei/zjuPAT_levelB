#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
	vector<int> v1, v2;
	string num;
	bool isfirst = true;
	int b = 0, k = 0, temp = 0, q = 0;
	cin >> num >> b;
	for (auto s : num) {
		v1.push_back(s - '0');
	}
	for (auto v : v1) {
		temp = k * 10 + v;
		if (isfirst) {
			if (temp >= b) {
				k = temp%b;
				q = (temp - k) / b;
				v2.push_back(q);
			} else {
				k = v;
			}
			isfirst = false;
		} else {
			if (temp >= b) {
				k = temp%b;
				q = (temp - k) / b;
				v2.push_back(q);
			} else {
				k = v;
				v2.push_back(0);
			}
		}
	}
	if (!v2.empty()) {
		for (auto c : v2) {
			cout << c;
		}
		cout << " " << k;
	} else {
		cout << "0" << " " <<num ;
	}	
}
