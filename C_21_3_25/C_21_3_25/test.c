#define _CRT_SECURE_NO_WARNINGS

//������2��(3)
//�����ݹ�

#include <stdio.h>

//��ϰ1
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

//��ϰ2
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

//��ϰ3
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

//��ϰ4
/*int Fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}*///���ּ��㷽ʽҪ���кܶ���ظ����㣬Ч�ʺܵ�

//������õ�����ѭ�����ķ�ʽ���Ч�ܶ�
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

//��ŵ������
//int i = 1;//��¼���� 
//void move(int n, char a, char c)//��ʾ�ƶ�·�� 
//{
//	printf("��%d��:�ѵ�%d������%c--->%c\n", i++, n, a, c);
//}
//
//void Hanoi(int n, char a, char b, char c)//��ŵ���ݹ��㷨 
//{
//	if (n == 1) move(n, a, c);//���ֻ��һ��������ֱ�Ӵ�A���Ƶ�C�� 
//	else {
//		Hanoi(n - 1, a, c, b);//��A��n-1�������Ƶ�B��
//		move(n, a, c);//�����һ�����Ӵ�A���Ƶ�C�� 
//		Hanoi(n - 1, b, a, c);//��B��n-1�������Ƶ�C�� 
//	}
//}
//int main()
//{
//	int num;
//	scanf("%d", &num);//�������ӵĸ��� 
//	Hanoi(num, 'A', 'B', 'C');
//	return 0;
//}

//������̨��
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
	printf("����������Ҫ����̨������");
	scanf_s("%d", &n);
	ret = Frog_jump(n);
	printf("%d\n", ret);
	return 0;
}
