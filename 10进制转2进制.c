#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(void) //十进制转二进制原理：将十进制数除以2，余数作为二进制位（最低位先得到），商继续除以2，直到商为0。
{
    int x;
    scanf("%d", &x);
    int i = 0,j,a[100];
    do {
        a[i++]=x%2;
        x=x/2;
    } while (x >= 1);//在x不满足循环条件的时候，i自身要加一
    for (j = i - 1; j >= 0; j--)
        printf("%4d", a[j]);
    printf("\n");
    return 0;





















	return 0;
}







