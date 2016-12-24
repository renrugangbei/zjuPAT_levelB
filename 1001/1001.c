#include<stdio.h>
int func(int num) {
	int n = 0;
	while (num!=1)
	{
		if (num % 2 == 0) {
			num /= 2;
		}
		else
		{
			num = (3 * num + 1) / 2;
		}
		n++;
	}
	return n;
}
int main() {
	int InputNum,n;
	scanf("%d", &InputNum);
	if (InputNum == 1) {
		printf("0");
	}
	else
	{
		printf("%d\n", func(InputNum));
	}
	return 0;
}