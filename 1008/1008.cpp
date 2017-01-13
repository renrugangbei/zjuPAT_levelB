#include<iostream>
#include<list>
using namespace std;
int main() {
	int move, length;
	int flag = 1;//输出格式控制
	list<int> list;
	int number[100] = { 0 };
	cin >> length >> move;
	move = move%length;//当移动大于长度的情况处理，例如长度为6，移动7格，和长度为6移动1格一样。
	for (int i = 0; i < length; i++) {
		cin >> number[i];
	}
	for (int i = (length - move); i < length; i++) {
		list.push_back(number[i]);
	}
	for (int i = 0; i < (length - move); i++) {
		list.push_back(number[i]);
	}
	for (auto p : list) {
		if (flag == 1) {
			cout << p;
			flag = 0;
		} else {
			cout << " "<<p;
		}
	}
}