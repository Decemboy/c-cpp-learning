#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//C 语言标准不允许用const变量作为数组长度，这是 C++ 的特性，不是 C 的特性。
#define MAX_NUMBER 100 //采用宏定义
int main() {     //求某个范围内的数组
	int isprime[MAX_NUMBER];
	int i;
	int x;
	for (i = 0; i < MAX_NUMBER; i++) {
		isprime[i] = 1;              //刚开始把数组内的所有数标记为1；1表示是素数
	}
	isprime[0] =isprime[1] = 0; //虽然刚开始把0，1标记为1；后面循环从2开始，为了严谨一点，0，1标记为0，0，1肯定不是素数嘛
	for (x = 2; x < MAX_NUMBER; x++) {
	     for (i = 2; i * x < MAX_NUMBER; i++) {
			isprime[i * x] = 0;  //利用倍数把不符合的标记为0
		}
		 if (isprime[x] == 1) {
			 printf("%d\t", x);
		 }
		
	}
	printf("\n");








































	return 0;
}
