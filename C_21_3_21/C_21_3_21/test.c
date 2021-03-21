#define _CRT_SECURE_NO_WARNINGS

//分支和循环（2）
//do while循环--练习

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

//do while循环

//在屏幕上打印1-10
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)
//			//break;//1 2 3 4
//			continue;//1 2 3 4死循环
//		printf("%d ", i);
//		i++;
//	} 	while (i <= 10);
//	return 0;
//}

//练习

//计算n的阶乘
//int main()
//{
//	int n;
//	int ret = 1;
//	printf("请输入数字n：");
//	scanf("%d", &n);
//	for (int i = 1; i < (n + 1); i++)
//	{
//		ret *= i;
//	}
//	printf("n的阶乘为：%d\n", ret);
//	return 0;
//}

//计算1!+2!+3!+...+10!
//int main()
//{
//	int sum = 0;
//	for (int i = 1; i < 11; i++)
//	{
//		int ret = 1;//初始化ret
//		for (int k = 1; k <= i; k++)
//		{
//			ret *= k;
//		}
//		sum += ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}//效率低，重复运算1*2*3...
//int main()
//{
//	int sum = 0;
//	int ret = 1;
//	for (int i = 1; i < 11; i++)
//	{
//		ret = i * ret;
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}//n! = n * (n-1)!

//在有序数组中查找某个具体数字n
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 11;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是%d\n", i);
//			break;
//		}
//		if (i == sz - 1)
//			printf("找不到\n");
//	}
//	return 0;
//}//遍历的方式查找，效率低
//二分查找算法、折半查找算法
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,8,9,10,11 };
//	int k = 7;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//		
//
//	return 0;
//}

//编写代码，演示多个字符从两端移动，向中间汇聚
//int main()
//{
//	//char arr[] = "abc"
//	//{'a','b','c','\0'}
//	//  0   1   2    3
//	char arr1[] = "hello world";
//	char arr2[] = "###########";
//	int left = 0;//左下标
//	//int sz = sizeof(arr2) / sizeof(arr2[0]);
//	//int right = sz - 2;//右下标，要减去\0的下标
//	int right = strlen(arr2) - 1;//strlen计算时不包含\0
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//休息一秒，头文件windows.h，单位是毫秒
//		Sleep(1000);
//		system("cls");//执行系统命令的一个函数	头文件stdlib.h	cls--q清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//编写代码实现，模拟用户登录情景，并且只能登陆三次。
//（只允许输入三次密码，如果密码正确则提示登陆成功，如果三次均输入错误，则退出程序）
int main()
{
	char password[20] = {0};
	int i;
	for ( i = 1; i < 4; i++)
	{
		printf("请输入密码：");
		scanf("%s", password);//password是数组，包括了地址，不需要&
//		if (password == "abcd")//==不能用来比较两个字符串是否相等，应使用一个库函数--strcmp
		if (strcmp(password, "abcd") == 0)
		{

			printf("登陆成功\n");
			break;
		}
		else
			printf("密码错误\n");
	}
	if (i == 4)
	{
		printf("三次密码均错误，退出程序\n");
	}

	return 0;
}