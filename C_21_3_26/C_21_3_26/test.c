#define _CRT_SECURE_NO_WARNINGS

//���飨1��
//һά�����ʹ��--��ά�����ʹ��

#include <stdio.h>
#include <string.h>

//һά�����ʹ��
//int main()
//{
//	//�ַ�������
//	//char arr[] = "abcdef";
//	//int i = 0;
//	//for (i = 0; i < (int)strlen(arr); i++)//strlenĬ�Ϸ���һ���޷�������
//	//{
//	//	printf("%c ", arr[i]);
//	//}
//
//	//��������
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//һά�������ڴ��еĴ洢
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//
//	return 0;
//}

//��ά�����ʹ��
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//��ά�������ڴ��еĴ洢
int main()
{
	int arr[3][4] = { {1,2,3},{4,5} };
	int i;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%p ", &arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}