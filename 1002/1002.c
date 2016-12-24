#include<stdio.h>
void Output(char num) {
	switch (num) {
	case 0:printf("ling"); break;
	case 1:printf("yi"); break;
	case 2:printf("er"); break;
	case 3:printf("san"); break;
	case 4:printf("si"); break;
	case 5:printf("wu"); break;
	case 6:printf("liu"); break;
	case 7:printf("qi"); break;
	case 8:printf("ba"); break;
	case 9:printf("jiu"); break;
	}
}
int main() {
	char c;
	int num = 0;
	while (scanf("%c", &c) && c>47 && c<58) {
		num += (c - 48);
	}
	if (num > 100) {
		Output(num / 100);
		printf(" ");
		Output((num / 10) % 10);
		printf(" ");
		Output(num % 10);
	}
	else if (num > 10) {
		Output((num / 10) % 10);
		printf(" ");
		Output(num % 10);
	}
	else{
		Output(num % 10);
	}
	return 0;
}
