#define _CRT_SECURE_NO_WARNINGS

//分支和循环（2）
//while循环--for循环

#include <stdio.h>

//while循环

//例子

//了解scanf和getchar的原理，while空循环
//int main()
//{
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：");
//	scanf("%s", password);//输入密码，并存放在password数组中
//	//scanf和getchar的工作原理见笔记
//	//缓冲区还剩余一个'\n'
//	//读取一下'\n'
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认（Y/N）：");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功");
//	}
//	else
//	{
//		printf("放弃确认");
//	}
//
//	return 0;
//}

//只输出数字字符
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//总结
//int main()
//{
//	int i = 0;//循环变量的初始化
//	while (10 > i)//判断
//	{
//		//...
//		i++;//调整  i++就是i+=1 依次加2就是i+=2
//	}
//	return 0;
//}

//for循环

//使用for循环在屏幕上打印1-10
//int main()
//{
//	int i;
//	//  初始化    判断   调整
//	for (i = 1; 10 >= i; i++)
//	{
//		//if (5 == i)
//			//break;
//			//continue;
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//一些for循环的变种

//省略
//int main()
//{
//	for (;;)//for循环的初始化、判断、调整都可以省略
//		//判断部分如果被省略，那判断结果就是恒为正
//		//不要随便省略
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//省略出错的例子：打印100个hehe
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//
//	return 0;
//}
//省略后
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)//省略导致j没有重新初始化为0
//		{
//			printf("hehe\n");
//		}
//	}
//
//	return 0;
//}

//两个变量控制
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)//++x与x++没区别
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//例题

//请问循环要循环多少次？
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//判断部分把0赋值给k,判断部分的结果就是k,也就是0，所以直接跳出循环，0次
//		k++;
//
//	return 0;
//}