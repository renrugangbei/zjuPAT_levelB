#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
using namespace std;
struct student {
	int number;
	int de, cai;
};
bool compare(student a, student b) {
	if ((a.de + a.cai) != (b.de + b.cai)) {
		return a.de + a.cai > b.de + b.cai;
	}
	else if (a.de != b.de) {
		return a.de > b.de;
	} 
	else {
		return a.number < b.number;
	}
}
int main() {
	vector<student> v1, v2, v3, v4;
	student s1;
	int n, l, h, cnt = 0;
	scanf("%d %d %d", &n, &l, &h);
	for(int i = 0; i < n; i++) {
		scanf("%d %d %d", &s1.number, &s1.de, &s1.cai);
		if (s1.de >= l&&s1.cai >= l) {
			cnt++;
			if (s1.de >= h&&s1.cai >= h) {
				v1.push_back(s1);
			} else if (s1.de >= h) {
				v2.push_back(s1);
			} else if (s1.de >= s1.cai) {
				v3.push_back(s1);
			} else {
				v4.push_back(s1);
			}
		}
		
	}
	sort(v1.begin(), v1.end(), compare);
	sort(v2.begin(), v2.end(), compare);
	sort(v3.begin(), v3.end(), compare);
	sort(v4.begin(), v4.end(), compare);
	cout << cnt << endl;
	for (auto i : v1) {
		printf("%d %d %d\n", i.number, i.de, i.cai);
	}
	for (auto i : v2) {
		printf("%d %d %d\n", i.number, i.de, i.cai);
	}
	for (auto i : v3) {
		printf("%d %d %d\n", i.number, i.de, i.cai);
	}
	for (auto i : v4) {
		printf("%d %d %d\n", i.number, i.de, i.cai);
	}
	return 0;
}
