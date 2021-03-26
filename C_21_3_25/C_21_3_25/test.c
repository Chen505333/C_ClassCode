#define _CRT_SECURE_NO_WARNINGS

//函数（2）(3)
//函数递归

#include <stdio.h>

//练习1
//print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int i;
//	scanf("%d", &i);//1234
//	print(i);
//	return 0;
//}

//练习2
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//练习3
//int factorial(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * factorial(n - 1);
//}
//
//int main()
//{
//	int i = 10;
//	int j = factorial(i);
//	printf("%d\n", j);
//	return 0;
//}

//练习4
/*int Fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}*///这种计算方式要进行很多次重复运算，效率很低

//这里采用迭代（循环）的方式会高效很多
//int Fib(int n)
//{
//	int x = 1;
//	int y = 1;
//	int z;
//	if (n > 2)
//	{
//		for (int i = 3; i <= n; i++)
//		{
//			z = x + y;
//			x = y;
//			y = z;
//		}
//		return z;
//	}
//	else
//		return 1;
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	int ret = Fib(a);
//	printf("%d\n", ret);
//	return 0;
//}

//汉诺塔问题
//int i = 1;//记录步数 
//void move(int n, char a, char c)//显示移动路径 
//{
//	printf("第%d步:把第%d个盘子%c--->%c\n", i++, n, a, c);
//}
//
//void Hanoi(int n, char a, char b, char c)//汉诺塔递归算法 
//{
//	if (n == 1) move(n, a, c);//如果只有一个盘子则直接从A柱移到C柱 
//	else {
//		Hanoi(n - 1, a, c, b);//把A柱n-1个盘子移到B柱
//		move(n, a, c);//把最后一个盘子从A柱移到C柱 
//		Hanoi(n - 1, b, a, c);//把B柱n-1个盘子移到C柱 
//	}
//}
//int main()
//{
//	int num;
//	scanf("%d", &num);//输入盘子的个数 
//	Hanoi(num, 'A', 'B', 'C');
//	return 0;
//}

//青蛙跳台阶
int Frog_jump(int n)
{
	if (n < 3)
		return n;
	else
		return Frog_jump(n - 2) + Frog_jump(n - 1);
}
int main()
{
	int n = 0;
	int ret = 0;
	printf("请输入青蛙要跳的台阶数：");
	scanf_s("%d", &n);
	ret = Frog_jump(n);
	printf("%d\n", ret);
	return 0;
}
