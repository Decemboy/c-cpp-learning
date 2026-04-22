#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int copy = n;
	if (n < 0) {
		printf("-");
		n = -n;
		copy = n;
	}
	else if (n == 0) {
		printf("0");
	}
	if (n > 0) {
		int ret = 0;
		while (copy > 0) {
			ret = ret * 10 + copy % 10;
			copy /= 10;
		}
		int count = 0;
		while (ret > 0) {
			int digit = 0;

			digit = ret % 10;
			ret /= 10;
			count++;
			printf("%d\t", digit);
		}
		printf("%d", count);
	}
	return 0;
}