#define _CRT_SECURE_NO_WARNINGS

//初识C语言（2）
//循环语句--函数--数组

#include <stdio.h>

//循环语句
//int main() 
//{
//	int line = 0;
//
//	while (line < 20000)
//	{
//		printf("敲一行代码：%d\n", line);
//		line++;
//	}
//	if(line >= 20000)
//	printf("好offer\n");
//
//	return 0;
//}

//函数
//Add(int x,int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int sum;
//	int a = 100;
//	int b = 200;
//	sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//数组

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//定义一个存放十个整型数字的数组
	//printf("%d\n", arr[4]);//用下标的形式访问元素，arr[下标]
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return 0;
}