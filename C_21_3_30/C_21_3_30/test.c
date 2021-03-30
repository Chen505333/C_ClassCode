#define _CRT_SECURE_NO_WARNINGS

//操作符详解
//算术操作符--移位操作符--位操作符--赋值操作符--单目操作符

#include <stdio.h>

//算术操作符
//int main()
//{
//	int a = 5 / 2;
//	printf("%d\n", a);
//	a = 5 % 2;//两个操作数必须都是整型
//	printf("%d\n", a);
//	double b = 5.0 / 2;
//	printf("%lf\n", b);
//	return 0;
//}

//移位操作符
//int main()
//{
//	int a = 16;
//	//>>---右移操作符
//	//移动的是二进制位
//	//00000000000000000000000000010000
//	int b = a >> 1;
//	printf("%d\n", b);
//	int x = -1;
//	//整数二进制表示有三种：原码，反码，补码
//	//存储到内存中的是补码
//	//10000000000000000000000000000001	-	原码
//	//11111111111111111111111111111110	-	反码（符号位不变，其他位按位取反）
//	//11111111111111111111111111111111	-	补码（反码+1）
//	int y = x >> 1;
//	printf("%d\n", y);//-1
//	int i = 5;
//	int j = i << 1;
//	printf("%d\n", j);
//	return 0;
//}

//位操作符
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//&-按位（二进制位）与
//	int c = a & b;
//	//a=00000000000000000000000000000011
//	//b=00000000000000000000000000000101
//	//c=00000000000000000000000000000001
//	printf("%d\n", c);//1
//	//|-按位（二进制位）或
//	int d = a | b;
//	//d=00000000000000000000000000000111
//	printf("%d\n", d);//7
//	//^-按位（二进制位）异或
//	int e = a ^ b;
//	//e=00000000000000000000000000000110
//	printf("%d\n", e);//6
//	return 0;
//}

//面试题
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//1.加减法--可能会溢出
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//异或的方法
//	a = a ^ b;
//	b = a ^ b;//b=a^b^b=a^0=a	自己与自己的异或为0，0和任何数异或等于任何数
//	a = a ^ b;
//	printf("after : a = %d  b = %d", a, b);
//	return 0;
//}

//练习
//int main()
//{
//	int num;
//	int count = 0;
//	scanf("%d", &num);
//	//32bit
//	//00000000000000000000000000000000 
//	//num&1 == 1则说明num最低为是1 
//	//统计num的补码中有几个1
//	for (int i = 0; i < 32; i++)
//	{
//		if (1 == (num & 1))
//			count++;
//		num = num >> 1;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//单目操作符

//逻辑反操作
//int main()
//{
//	int a = 0;
//	if (!a)
//		printf("hehe\n");//!的一般用法，表示a为假的时候就打印hehe
//	return 0;
//}

//取地址操作符、解引用操作符
//int main()
//{
//	int a = 1;
//	int* p = &a;//取地址操作符
//	*p = 2;//解引用操作符
//	return 0;
//}

//
int main()
{
	int a = 10;
	char c = 'r';
	char* p = &c;
	int arr[10] = { 0 };
	//sizeof计算变量所占内存空间的大小，单位是字节
	printf("%d\n", sizeof(a));//4
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof a);//4	变量名可以省略（）

	printf("%d\n", sizeof(c));//1
	printf("%d\n", sizeof(char));//1

	printf("%d\n", sizeof(p));//4
	printf("%d\n", sizeof(char*));//4

	printf("%d\n", sizeof(arr));//40
	printf("%d\n", sizeof(int [10]));//40	int[10]是数组arr的类型
	return 0;
}