#define _CRT_SECURE_NO_WARNINGS

//数组（2）

#include <stdio.h>


//冒泡排序
//void bubble_sort(int* arr,int sz)
//{
//	//确定冒泡排序的趟数
//	int i;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每一趟冒泡排序
//		int flag = 1;//假设这一趟要排序的数据已经有序
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本趟排序的数据其实不完全有序
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
//	//对arr进行排序，排成升序
//	//arr是数组，对数组arr进行传参，实际上传递过去的是数组arr首元素的地址&arr[0]
//	bubble_sort(arr,sz);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//数组名是什么
int main()
{
	int arr[] = { 1,2,3,4,5,6 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%d\n", *arr);//1
	printf("%p\n", &arr);//数组的地址，&arr+1即跳过整个数组的下一个地址
	return 0;
}