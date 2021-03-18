#define _CRT_SECURE_NO_WARNINGS

//初识C语言（3）
//作业--单目操作符
#include <stdio.h>

//用函数求两个数的最大值
//Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = Max(num1, num2);
//	printf("最大值是：%d\n", max);
//
//	return 0;
//}

//~ 按位取反
//int main()
//{
//	int a = 0;//4个字节，32bit位
//	int b = ~a;//b是有符号的整型
//	//~--按二进制位取反
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//原码、反码、补码
//	//负数在内存中存储时，存储的是二进制的补码
//	//11111111111111111111111111111111--补码 第一位是符号位
//	//11111111111111111111111111111110--反码 补码-1
//	//10000000000000000000000000000001--原码 符号位不变，其余取反
//	//原码->补码 符号位不变其余取反+1
//	printf("%d\n", b);
//	return 0;
//}

//++ --
//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++,先使用再自增（先给b赋值，a再自增）即a=11 b=10
//	//int b = ++a;//前置++，先自增再使用，即a=11 b=11
//	//int b = a--;//a=9 b=10
//	//int b = --a;//a=9 b=9
//	return 0;
//}

//(类型)强制类型转换
//int main()
//{
//	int a = (int)3.14;//double类型转换为int
//	return 0;
//}

//逻辑操作符 && ||
//int main()
//{
//	//真--非0
//	//假--0
//	int a = 0;
//	int b = 5;
//	int c = a && b;//&&--逻辑与即全真为真  a为假，b为真，a&&b 为真，c=0
//	int d = a || b;//||--逻辑或即有真则真  d=1
//	printf("c = %d  d = %d\n", c, d);
//
//	return 0;
//}

//条件操作符 exp1 ? exp2 :exp3
int main()
{
	int a = 10;
	int b = 20;
	int max = (a > b ? a : b);//exp1为真时,结果为exp2;exp1为假时，结果为exp3
	printf("max = %d\n", max);

	return 0;
}