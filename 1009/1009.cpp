#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main() {
	int flag = 1;
	string input;
	stack<string> stk;
	while (cin >> input) {
		stk.push(input);
	}
	while (!stk.empty()) {
		if (flag == 1) {
			cout << stk.top();
			stk.pop();
			flag = 0;
		} else {
			cout << " " << stk.top();
			stk.pop();
		}
	}
}