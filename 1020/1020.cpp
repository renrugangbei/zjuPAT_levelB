#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
struct mooncake {
	double size;
	double total;
	double price;
};
bool cmp(mooncake c1,mooncake c2) {
	return c1.price > c2.price;
}
int main() {
	
	int n, m, i;
	cin >> n >> m;
	double money = 0;
	mooncake a[1000];
	for ( i = 0; i < n; i++) {
		cin >> a[i].size;
	}
	for ( i = 0; i < n; i++) {
		cin >> a[i].total;
		a[i].price = a[i].total / a[i].size;
	}
	sort(a, a + n, cmp);
	 i = 0;
	while ((m > 0) && (i < n)) {
		if (m > a[i].size) {
			m = m - a[i].size;
			money += a[i].total;
			i++;
		} else {
			money += (m*a[i].price);
			m = 0;
		}
	}
	cout << fixed << setprecision(2) << money;
}