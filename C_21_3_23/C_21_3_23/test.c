#define _CRT_SECURE_NO_WARNINGS

//函数（1）
//库函数--自定义函数--练习-嵌套调用和链式访问

#include <stdio.h>
#include <string.h>
#include <math.h>

//库函数
//strcpy
//int main()
//{
//	int str[] = "bit";
//	int str1[20] = "#############";
//	//拷贝后        bit\0#########
//	//拷贝时包含\0
//	strcpy(str1, str);
//	printf("%s\n", str1);//打印时遇到\0就结束
//	return 0;
//}

//memset
//memory--内存  set--设置
//int main()
//{
//	char str[] = "hello world";
//	memset(str, '*', 5);
//	printf("%s\n", str);
//
//	return 0;
//}

//自定义函数
// 交换两个整型变量的值
//void Swap(int x, int y)//void表示函数没有返回值
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
//a和b为什么并没有完成交换？

//void swap(int* pa, int* pb)//pa存放a的地址，pb存放b的地址
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

//练习

//写一个函数判断一个数是不是素数
//int is_prime(int x)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0)
//		{
//			return 0;//return执行就跳出函数了，不需要再写break
//			//break;
//		}
//		
//	}
//	//if (i > sqrt(x))//由于循环内不是break，而是return，说明只有一种情况下代码才会执行到这里，因此不需要判断了
//		return 1;
//}
//int main()
//{
//	int a;
//	printf("请输入数字:>");
//	scanf("%d", &a);
//	if (is_prime(a))
//		printf("是素数\n");
//	else
//		printf("不是素数\n");
//	return 0;
//}

//写一个函数判断一年是不是闰年
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
//		//判断year是否是闰年
//		if (is_leap_year(year))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//写一个函数，实现一个整型有序数组的二分查找
//int binary_search(int arr[], int k)//本质上，这里的arr是一个指针，32位环境指针4字节，arr[0]是int也是4字节，所以right初始化成了0
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
//	//二分查找
//	//在一个有序数组中查找某个具体的数
//	//如果找到了返回这个数的下标，找不到返回-1
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);//传递过去的是arr，也就是数组arr首元素的地址
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是%d\n", ret);
//	}
//	return 0;
//}

//写一个函数，每调用一次这个函数，就会将num的值增加1
//void Add(int* num)
//{
//	//*num++;//++的优先级比*高，因此++作用在了num上，而不是*num上
//	*num = *num+1;
//}
//
//int main()
//{
//	int num = 0;
//	//调用函数，使得num每次增加1
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

//嵌套调用
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

//链式访问
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
//	printf("%d", printf("%d", printf("%d",43)));//peintf的返回值是打印字符的个数
//	return 0;
//}

////函数声明
//int Add(int,int);
#include "Add.h"//自己写的头文件用“ ”，库里的用< >
int main()
{
	int a = 10;
	int b = 20;
	//函数调用
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}

////函数的定义
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}