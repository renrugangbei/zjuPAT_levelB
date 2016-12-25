#include<iostream>
#include<string>
using namespace std;
int main() {
	int num, maxScore = -1, minScore = 101, score;
	string name, studentID, maxName, maxStudentID, minName, minStudentID;
	cin >> num;
	for (int i = num; i > 0; i--) {
		cin >> name >> studentID >> score;
			if (score > maxScore) {
				maxName = name;
				maxScore = score;
				maxStudentID = studentID;
		}
		if (score < minScore) {
			minName = name;
			minScore = score;
			minStudentID = studentID;
		}
	}
	cout << maxName << " " << maxStudentID << endl;;
	cout << minName << " " << minStudentID << endl;;

}