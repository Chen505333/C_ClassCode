#define _CRT_SECURE_NO_WARNINGS

//���飨2��

#include <stdio.h>


//ð������
//void bubble_sort(int* arr,int sz)
//{
//	//ȷ��ð�����������
//	int i;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ÿһ��ð������
//		int flag = 1;//������һ��Ҫ����������Ѿ�����
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//���������������ʵ����ȫ����
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//��arr���������ų�����
//	//arr�����飬������arr���д��Σ�ʵ���ϴ��ݹ�ȥ��������arr��Ԫ�صĵ�ַ&arr[0]
//	bubble_sort(arr,sz);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//��������ʲô
int main()
{
	int arr[] = { 1,2,3,4,5,6 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%d\n", *arr);//1
	printf("%p\n", &arr);//����ĵ�ַ��&arr+1�����������������һ����ַ
	return 0;
}