/*
选择排序是一种简单直观的排序算法。
它的工作原理是每一次从待排序的数据元素中选出最小（或最大）的一个元素
存放在待排序序列的起始位置，直到全部待排序的数据元素排完结束。
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void select_sort(int p[], int n);
void print_arr(int arr[], int n);

int main() {
        int arr[] = { 9, 5, 2, 7, 3, 6, 1, 8, 4 };
        int n = sizeof(arr) / sizeof(arr[0]);

        printf("排序前：");
        print_arr(arr, n);

        select_sort(arr, n);

        printf("排序后：");
        print_arr(arr, n);

        return 0;
}
  
void select_sort(int p[], int n)
{
int i, j, minPos, temp;     
for (i = 0; i < n - 1; i++)
{
    minPos = i;              
    for (j = i + 1; j < n; j++)
    {
        if (p[j] < p[minPos])
            minPos = j;
    }
    if (minPos != i)
    {
        temp = p[minPos];
        p[minPos] = p[i];
        p[i] = temp;
    }
}
}
//假设第i位置上是最小值，把i的值赋给minPos
// 正常i<n，但是最后一个数位置是固定的，所以i<n-1;j所在循环是为了看i后面数组中的数字有没有比i小的
//如果比minPos小，把j的值赋给minPos，如果i不是最小值，那么利用交换数据来把最小值给i
void print_arr(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
//此代码作为一个输出数组的数




