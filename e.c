#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()    //斐波那契数列的定义 前两项为1，后面从第三项开始f(n)=f(n-1)+f(n-2)
{
    int f1 = 1, f2 = 1;
    printf("%d,%d", f1, f2);
    for (int i = 3; i <= 40; i++) {    //有限制数量不能太大40以内
        f2 = f1 + f2;
        f1 = f2 - f1;
        printf(",%d", f2);
    }

































	return 0;
}