#define _CRT_SECURE_NO_WARNINGS

//������1��
//�⺯��--�Զ��庯��--��ϰ-Ƕ�׵��ú���ʽ����

#include <stdio.h>
#include <string.h>
#include <math.h>

//�⺯��
//strcpy
//int main()
//{
//	int str[] = "bit";
//	int str1[20] = "#############";
//	//������        bit\0#########
//	//����ʱ����\0
//	strcpy(str1, str);
//	printf("%s\n", str1);//��ӡʱ����\0�ͽ���
//	return 0;
//}

//memset
//memory--�ڴ�  set--����
//int main()
//{
//	char str[] = "hello world";
//	memset(str, '*', 5);
//	printf("%s\n", str);
//
//	return 0;
//}

//�Զ��庯��
// �����������ͱ�����ֵ
//void Swap(int x, int y)//void��ʾ����û�з���ֵ
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(a, b);
//	printf("a = %d b = %d\n", a, b);
//
//	return 0;
//}
//a��bΪʲô��û����ɽ�����

//void swap(int* pa, int* pb)//pa���a�ĵ�ַ��pb���b�ĵ�ַ
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(&a, &b);
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

//��ϰ

//дһ�������ж�һ�����ǲ�������
//int is_prime(int x)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0)
//		{
//			return 0;//returnִ�о����������ˣ�����Ҫ��дbreak
//			//break;
//		}
//		
//	}
//	//if (i > sqrt(x))//����ѭ���ڲ���break������return��˵��ֻ��һ������´���Ż�ִ�е������˲���Ҫ�ж���
//		return 1;
//}
//int main()
//{
//	int a;
//	printf("����������:>");
//	scanf("%d", &a);
//	if (is_prime(a))
//		printf("������\n");
//	else
//		printf("��������\n");
//	return 0;
//}

//дһ�������ж�һ���ǲ�������
//int is_leap_year(int x)
//{
//	if (((x % 4 == 0) && (x % 100 != 0)) || x % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year;
//	int count = 0;
//	for (year = 1000; year < 2001; year++)
//	{
//		//�ж�year�Ƿ�������
//		if (is_leap_year(year))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//дһ��������ʵ��һ��������������Ķ��ֲ���
//int binary_search(int arr[], int k)//�����ϣ������arr��һ��ָ�룬32λ����ָ��4�ֽڣ�arr[0]��intҲ��4�ֽڣ�����right��ʼ������0
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	//int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//
//int main()
//{
//	//���ֲ���
//	//��һ�����������в���ĳ���������
//	//����ҵ��˷�����������±꣬�Ҳ�������-1
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);//���ݹ�ȥ����arr��Ҳ��������arr��Ԫ�صĵ�ַ
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���%d\n", ret);
//	}
//	return 0;
//}

//дһ��������ÿ����һ������������ͻὫnum��ֵ����1
//void Add(int* num)
//{
//	//*num++;//++�����ȼ���*�ߣ����++��������num�ϣ�������*num��
//	*num = *num+1;
//}
//
//int main()
//{
//	int num = 0;
//	//���ú�����ʹ��numÿ������1
//	Add(&num);
//	printf("num = %d\n",num);
//	Add(&num);
//	printf("num = %d\n",num);
//	Add(&num);
//	printf("num = %d\n",num);
//	Add(&num);
//	printf("num = %d\n",num);
//	return 0;
//}

//Ƕ�׵���
//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}

//��ʽ����
//int main()
//{
//	//1.
//	int len = 0;
//	len = strlen("abc");
//	printf("%d\n", len);
//	//2.
//	printf("%d\n", strlen("abc"));
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d",43)));//peintf�ķ���ֵ�Ǵ�ӡ�ַ��ĸ���
//	return 0;
//}

////��������
//int Add(int,int);
#include "Add.h"//�Լ�д��ͷ�ļ��á� �����������< >
int main()
{
	int a = 10;
	int b = 20;
	//��������
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}

////�����Ķ���
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}