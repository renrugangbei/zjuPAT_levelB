#include<iostream>
#include<list>
using namespace std;
int main() {
	int move, length;
	int flag = 1;//�����ʽ����
	list<int> list;
	int number[100] = { 0 };
	cin >> length >> move;
	move = move%length;//���ƶ����ڳ��ȵ�����������糤��Ϊ6���ƶ�7�񣬺ͳ���Ϊ6�ƶ�1��һ����
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