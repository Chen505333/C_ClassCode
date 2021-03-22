#define _CRT_SECURE_NO_WARNINGS

//分支和循环（3）
//作业

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//写代码将三个数按从大到小输出
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);//两个%d之间加了任何符号，在输入的时候也要加相同符号
//	//算法实现a中放最大值 b次之 c中放最小值
//	if (a < b)//a>=b时，已经实现了第一步将a,b中较大的数放到a中的目标
//	{
//		int tmp = a;//临时变量tmp,临时存储变量值，直接a=b会导致a原本的值丢失
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//
//	return 0;
//}

//写一个代码打印1-100之间所有3的倍数的数字
//int main()
//{
//	for (int i = 3; i < 101; i += 3)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//给定两个数，求这两个数的最大公约数
//int main()
//{
//	int m, n, r;
//	scanf("%d%d", & m, &n);//m需要大于n
//	while (m % n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}

//打印1000到2000年之间的闰年
//int main()
//{
//	int i;
//	int count = 0;
//	for (i = 1000; i < 2001; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)//1.能被4整除且不能被100整除	2.能被400整除
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n有%d个闰年\n", count);
//	return 0;
//}

//打印100-200之间的素数
//int main()
//{
//	int i;
//	int count = 0;
//	//for (i = 100; i < 201; i++)
//	for(i = 101; i < 201; i += 2)//因为偶数不可能是素数，可以再次优化
//	{
//		//判断i是否为素数
//		//1.试除法
//		int k;
//		//for (k = 2; k < i; k++)
//		for(k=2;k<=sqrt(i);k++)
//			//sqrt()--开平方的数学库函数，头文件math.h
//			//若一个数不是素数，则一定能写成i=a*b的形式，而a,b中一定有一个数小于sqrt(i)，因此可缩小试除范围
//		{
//			if (i % k == 0)
//			{
//				break;
//			}
//		}
//		//if (k == i)
//		if(k>sqrt(i))//优化
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n共有%d个素数\n", count);
//	return 0;
//}

//编写代码数一下1到100的所有整数中出现多少个数字9
//int main()
//{
//	int i;
//	int count = 0;
//	for (i = 1; i < 101; i++)
//	{
//		if (i/10 == 9)
//			count++;
//		if (i%10 == 9)
//			count++;
//	}
//	printf("共有%d个9", count);
//	return 0;
//}

//计算1/1-1/2+1/3-1/4+1/5...+1/99-1/100的值，打印出结果
//int main()
//{
//	int i;
//	double sum = 0.0;//double赋值要写小数
//	int flag = 1;
//	for (i = 1; i < 101; i++)
//	{
//		sum += flag * 1.0 / i;//1/i计算结果为商0余1，不是我们想要的小数
//		//要让分子分母至少有一个小数，i是整型，所以把1写成1.0
//		flag = -flag;
//	}
//	printf("%lf\n",sum );//%lf打印浮点数
//
//	return 0;
//}

//求十个整数中最大值
//int main()
//{
//	int i;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("最大值是%d\n", max);
//	return 0;
//}

//在屏幕上输出9*9乘法口诀表
//int main()
//{
//	int m, n;
//	for (m = 1; m < 10; m++)
//	{
//		for (n = 1; n <= m; n++)
//		{
//			printf("%d * %d = %-2d ", m, n, m * n);//%2d表示打印两位，不足两位按两位对齐，%-2d表示打印两位左对齐
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//编写代码在一个整型有序数组中查找具体的某个数，找到了就打印数字所在下标，找不到则输出找不到
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int left = 0;
//	int right =  sizeof(arr) / sizeof(arr[0]) - 1;
//	while (left <= right)
//	{
//		int mid = (right + left) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		if (arr[mid] > k)
//			right = mid - 1;
//		if(arr[mid]==k)
//		{
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到");
//	return 0;
//}

//猜数字游戏
//1.电脑生成一个随机数
//2.猜数字
//3.可以重复玩
//void menu()
//{
//	printf("***************************\n");
//	printf("***   1.play   0.exit   ***\n");
//	printf("***************************\n");
//}
//
////RAND_MAX	0x7FFF	32767	"转到定义"的使用
//void game()
//{
//	//1.生成一个随机数
//	int ret = rand()%100+1;//生成1-100之间的随机数	rand()%100得到0-99
//					 //rand()生成随机数函数，无参，返回值为int，返回一个0-RAND_MAX之间的随机数	头文件stdlib.h
//					 //在调用rand之前，需要使用srand函数设置一个随机数生成器
//	//printf("%d\n", ret);
//
//	//2.猜数字
//	int guess;
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//
//	}
//
//
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));//srand设置一个随机起点,参数是一个变化的整数
//			 //使用时间戳来设置随机数的生成起始点	在整个工程内只需要生成一次，因此放到循环之外
//			 //时间戳	当前计算机的时间 - 计算机的起始时间（1970.1.1 0:0:0）= （xxxx）秒
//			 //使用time函数获取系统时间	头文件time.h
//			 //time_t time(time_t* timer) 返回time_t类型，转到定义发现是对long进行的重命名，所以返回值就是一个长整型
//			 //由于我们需要的时间戳是一个unsigned int，所以强制类型转换
//			 //NULL表示空指针
//
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("退出游戏\n");
//			break;
//		case 1:
//			game();//猜数字游戏
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//
//
//	} while (input);
//
//	return 0;
//}

//
int main()
{
	char input[20];
	//shutdown -s -t 60	在cmd设置60秒后关机的代码
	//system()	执行系统命令的函数
	system("shutdown -s -t 60");
	again:
	printf("请注意，你的电脑将在一分钟内关机，如果输入：我是猪，就取消关机\n请输入:>");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)//比较两个字符串
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}

	return 0;
}