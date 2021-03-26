#define _CRT_SECURE_NO_WARNINGS

//数组（1）
//一维数组的使用--二维数组的使用

#include <stdio.h>
#include <string.h>

//一维数组的使用
//int main()
//{
//	//字符型数组
//	//char arr[] = "abcdef";
//	//int i = 0;
//	//for (i = 0; i < (int)strlen(arr); i++)//strlen默认返回一个无符号整型
//	//{
//	//	printf("%c ", arr[i]);
//	//}
//
//	//整型数组
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//一维数组在内存中的存储
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

//二维数组的使用
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

//二维数组在内存中的存储
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