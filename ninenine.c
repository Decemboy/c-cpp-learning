#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    int n;
    printf("请输入正整数，n<=9");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d*%d=%-4d", j, i, i * j);
        }
        printf("\n");
    }
    return 0;
}