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
/*#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
using namespace std;
struct student {
	int number;
	int de, cai;
};
bool compare(student a, student b) {
	if (a.de + a.cai != b.de + b.cai) {
		return a.de + a.cai > b.de + b.cai;
	} else if (a.de != b.de) {
		return a.de > b.de;
	} else {
		return a.number < b.number;
	}
}
int main() {
	vector<student> v1, v2, v3, v4;
	student s1;
	int n, l, h, cnt = 0;
	scanf("%d %d %d", &n, &l, &h);
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &s1.number, &s1.de, &s1.cai);
		if (s1.de >= l&&s1.cai >= l) {
			cnt++;
			if (s1.de >= h&&s1.cai >= h) {
				v1.push_back(s1);
			} else if (s1.de > h) {
				v2.push_back(s1);
			} else if (s1.de > s1.cai) {
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
}#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;
struct Student {
	char id[10];
	int moral;
	int talent;
};
bool Cmp(Student a, Student b) {
	if ((a.moral + a.talent) != (b.moral + b.talent))  //���ȱȽ��ܷ� 
		return a.moral + a.talent>b.moral + b.talent;
	else                                        //�ܷ���ͬ�Ƚϵ·� 
	{
		if (a.moral != b.moral) {
			return a.moral>b.moral;
		} else {
			/*strcmp�ǱȽ������ַ����Ĵ�С,�����ַ�����ͬʱ����0,
			��һ���ַ������ڵڶ����ַ���ʱ����һ����ֵ,���򷵻ظ�ֵ.
			�Ƚ������ַ������㷨��:����Ƚ��������ж�Ӧ���ַ����ַ���С����ASCII��ֵȷ����
			�������ұȽϣ����������ͬ�ַ���������һ�Բ�ͬ�ַ��Ĵ�С��ϵ��ȷ���������ַ����Ĵ�С��ϵ��
			���δ������ͬ�ַ���ĳ���ַ������Ƚ�������ô����ַ����ǽ�С�ģ����������ַ�����ȡ�
			return strcmp(a.id, b.id)<0;            //�·���ͬ�Ƚ�id 
		}
	}
}
/*int main() {
	int count = 0;
	vector<Student>v1, v2, v3, v4;
	Student students;
	int N, L, H;
	scanf("%d%d%d", &N, &L, &H);
	for (int i = 0; i<N; i++) {   //�������ݵ�ʱ��˳����� 
		scanf("%s%d%d", students.id, &students.moral, &students.talent);
		if (students.moral >= L&&students.talent >= L) {
			count++;
			//��һ�࿼�� 
			if (students.moral >= H&&students.talent >= H)
				v1.push_back(students);
			//�ڶ��� 
			else if (students.moral >= H&&students.talent<H)
				v2.push_back(students);
			//������ 
			else if (students.moral<H&&students.talent<H&&students.moral >= students.talent)
				v3.push_back(students);
			//����Ϊ������ 
			else v4.push_back(students);
		}

	}
	sort(v1.begin(), v1.end(), Cmp);//CmpΪ�Զ���ıȽϺ��� 
	sort(v2.begin(), v2.end(), Cmp);
	sort(v3.begin(), v3.end(), Cmp);
	sort(v4.begin(), v4.end(), Cmp);

	printf("%d\n", count);

	vector<Student>::iterator iter;//����������vector 

	for (iter = v1.begin(); iter != v1.end(); iter++)
		printf("%s %d %d\n", iter->id, iter->moral, iter->talent);

	for (iter = v2.begin(); iter != v2.end(); iter++)
		printf("%s %d %d\n", iter->id, iter->moral, iter->talent);

	for (iter = v3.begin(); iter != v3.end(); iter++)
		printf("%s %d %d\n", iter->id, iter->moral, iter->talent);

	for (iter = v4.begin(); iter != v4.end(); iter++)
		printf("%s %d %d\n", iter->id, iter->moral, iter->talent);
	return 0;
}*/