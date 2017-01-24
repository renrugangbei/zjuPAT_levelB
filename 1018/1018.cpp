#include<iostream>
using namespace std;
int main() {
	int winA = 0, loseA = 0, draw = 0;
	int cntcA = 0, cntcB = 0, cntbA = 0, cntbB = 0, cntjA = 0, cntjB = 0;
	int n;
	cin >> n;
	char a, b;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		if (a != b) {
			if (a == 'B'&&b == 'C') {
				cntbA++;
			}
			if (a == 'C'&&b == 'J') {
				cntcA++;
			}
			if (a=='J'&&b=='B') {
				cntjA++;
			}
			if (b == 'J'&&a == 'B') {
				cntjB++;
			}
			if (b == 'C'&&a == 'J') {
				cntcB++;
			}
			if (b == 'B'&&a == 'C') {
				cntbB++;
			}
		} else {
			draw++;
		}
	}
	winA = cntbA + cntcA + cntjA;
	loseA = n - winA - draw;
	cout << winA << " " << draw << " " << loseA << endl;
	cout << loseA << " " << draw << " " << winA << endl;
	if (cntbA >= cntcA&&cntbA >= cntjA) {
		cout << "B" << " ";
	} else if (cntcA >= cntbA&&cntcA >= cntjA) {
		cout << "C" << " ";
	} else if (cntjA >= cntbA&&cntjA >= cntcA) {
		cout << "J" << " ";
	}
	if ((cntbB >= cntcB)&&(cntbB >= cntjB)) {
		cout << "B";
	} else if ((cntcB>= cntbB)&&(cntcB >= cntjB)) {
		cout << "C" ;
	} else if ((cntjB >= cntbB)&&(cntjB >= cntcB)) {
		cout << "J" ;
	}
}
