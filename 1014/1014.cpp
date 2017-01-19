#include<iostream>
#include<map>
#include<iomanip>
#include<string>
using namespace std;
int main() {
	char week, hour;
	map<char, string>Week;
	Week['A'] = "MON"; Week['B'] = "TUE"; Week['C'] = "WED"; Week['D'] = "THU";
	Week['E'] = "FRI"; Week['F'] = "SAT"; Week['G'] = "SUN";
	map<char, int>Hour;
	Hour['A'] = 10; Hour['B'] = 11; Hour['C'] = 12; Hour['D'] = 13; Hour['E'] = 14;
	Hour['F'] = 15; Hour['G'] = 16; Hour['H'] = 17; Hour['I'] = 18; Hour['J'] = 19;
	Hour['K'] = 20; Hour['L'] = 21; Hour['M'] = 22; Hour['N'] = 23;
	int min;
	string s1, s2, s3, s4;
	cin >> s1 >> s2 >> s3 >> s4;
	int length1 = (s1.size() > s2.size() ? s2.size() : s1.size());
	int i = 0;
	for (; i < length1; i++) {
		if (s1[i] >= 'A'&&s1[i] <= 'G'&&s1[i] == s2[i]) {
			week = s1[i];
			s1[i] = '!';
			break;
		}
	}
	for (; i < length1; i++) {
		if ((s1[i] == s2[i])&& ((s1[i] >= '0'&&s1[i] <= '9')||(s1[i] >= 'A'&s1[i] <= 'N'))) {
			hour = s1[i];
			break;
		}
	}
	int length2 = (s3.size() > s4.size() ? s4.size() : s3.size());
	for (int j = 0; j < length2; j++) {
		if ((s3[j] >= 'A'&&s3[j] <= 'z')&&s3[j] == s4[j]) {
			min = j;
			break;
		}
	}
	cout << Week[week] << " ";
	if (hour >= '0'&&hour <= '9') {
		cout << "0" << hour << ":";
	} else {
		cout << Hour[hour] << ":";
	}
	cout << setw(2) << setfill('0') << min;
	return 0;
}

