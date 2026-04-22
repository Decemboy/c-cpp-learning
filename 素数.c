#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	/*int x;
	scanf("%d", &x);
	int i;
	int isprime = 1;   //1表示是素数 0表示不是素数
	if(x<=1){
	printf("请输入大于一的数");
	}
	for (i = 2; i < x; i++) {
		if (x % i == 0) {
			isprime = 0;
			break;
		}
	}if (isprime == 1) {
		printf("是素数\n");

	}
	else {
		printf("不是素数\n");
	}*/
//输出100以内的素数
	int x;
	for (x = 2; x < 100; x++) {
		int isprime = 1;
		for (int i = 2; i < x; i++) {
			if (x % i == 0) {
				isprime = 0;
				break;
			}
		}if (isprime == 1) {
			printf("%d\n", x);
		}
	}

	/*
	外层循环：给每个数字排队做体检（x=2,3,4...99）
    isprime=1;假设这个数字是健康的
    内层循环：给这个数字做检查（看有没有因数）
    没检查出问题 → isprime=1（健康）
	如果是健康的那就打印出来
    */



















	return 0;
}