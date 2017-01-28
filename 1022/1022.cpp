#include<iostream>
#include<stack>
using namespace std;
int main() {
	int a, b, d;
	cin >> a >> b >> d;
	stack<int> s;
	a = a + b;
	if (a != 0) {
		while (a!=0) {
			s.push(a%d);
			a /= d;
		}
		while (!s.empty()) {
			cout << s.top();
			s.pop();
		}
	} else {
		cout << 0;
	}
	return 0;
}