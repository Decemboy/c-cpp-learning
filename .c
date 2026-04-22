#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main(void) {    //对输入x的量没有限制，大于10的数都会被if过滤掉，对代码没有影响
	
	int x;
	int count[10]; //数组的大小，定义一个数组 int count[10]={0};
	int i;
	
	for (i = 0; i < 10; i++) {  //初始化数组 利用循环直接把数组的每个数进行初始化，其实在定义的时候也可以初始化                     //只不过有一定的局限性，int number[10]={0,0,0,0,0,0,0,0,0,0};还是循环舒服	                       //也可以count[10]={0};这样10数全是0
		count[i] = 0;
	}
		/* Read integers until -1 or EOF; count digits 0..9 */
	while (scanf("%d", &x) == 1 && x != -1)
	{
		if (x >= 0 && x <= 9)
		{
				count[x]++;
		}
	}
	for (i = 0; i < 10; i++) 
	{
		printf("%d %d\n", i, count[i]);
	}

/*
scanf 函数的返回值：成功读取的变量个数。
当你输入一个合法整数（比如5、123），scanf成功读取 1 个 int，返回1 → 条件为真。
当你输入 - 1（合法整数），scanf也返回1，但会被后面的x != -1拦截。
当你输入非数字（比如abc）、按Ctrl + Z（Windows） / Ctrl + D（Linux / macOS，即 EOF，文件结束符），scanf读取失败，返回0或EOF → 条件为假，循环终止。
*/
























	return 0;
}