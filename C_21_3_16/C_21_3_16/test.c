#define _CRT_SECURE_NO_WARNINGS

//分支与循环（1）
//if语句--switch语句--while语句

#include <stdio.h>

//if语句
// 
// 
//int main()
//{
//	int age = 10;
//	if (age < 18)
//		printf("未成年\n");
//	//else if(18 <= age < 28)//这种写法是错误的 计算机会先计算18<=age的真假，变为0/1<28 
//	//if语句是判断括号内表达式的结果为0时跳过，为1时执行
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 50)
//		printf("壮年\n");
//	else if (age >= 50 && age < 90)
//		printf("老年\n");
//	else
//		printf("老不死\n");
//
//
//	return 0;
//}

//悬空else
//int main() 
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");//else会与最近的未匹配的if进行匹配
//	return 0;
//}

//判断一个数是否为奇数

//int main()
//{
//	int a;
//	printf("请输入数字：");
//	scanf("%d", &a);
//	int b = a % 2;
//	//printf("%d\n", b);
//	if (1 == b)
//		printf("这个数是奇数\n");
//	else
//		printf("这个数是偶数\n");
//
//
//	return 0;
//}

//输出1-100之间的奇数
// 
//int main()
//{
//	int a = 1;
//	while (100 >= a)
//	{
//		int b = a % 2;
//		if (1 == b)
//			printf("%d\n", a);
//		a++;
//	}
//
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (100 >= i)
//	{
//		printf("%d ", i);
//		i += 2;
//
//	}
//	return 0;
//}

//switch语句

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//switch语句根据（）内表达式的值决定从哪个case进入，遇到break退出switch
//	{
//	//case 1:
//	//	printf("星期一\n");
//	//	break;
//	//case 2:
//	//	printf("星期二\n");
//	//	break;
//	//case 3:
//	//	printf("星期三\n");
//	//	break;
//	//case 4:
//	//	printf("星期四\n");
//	//	break;
//	//case 5:
//	//	printf("星期五\n");
//	//	break;
//	//case 6:
//	//	printf("星期六\n");
//	//	break;
//	//case 7:
//	//	printf("星期日\n");
//	//	break;
//
//
//	case 1:
//	case 2:
//	case 3:
//	case 4://一直运行到break跳出switch
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default://默认
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}


//while循环

//打印1-10
//int main()
//{
//	int i = 1;
//		while (10 >= i)
//		{
//			if (5 == i)
//				//				break;//直接终止循环，永久终止
//				continue;//终止本次循环，本次循环中continue后面的代码不再执行，直接跳转到while语句的判断部分，进行下一次循环入口判断
//			printf("%d ", i);
//			i++;
//		}
//	return 0;
//}
// 
//int main()
//{
//	int i = 0;
//	while (9 >= i)
//	{
//		i++;
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//例子
//int main()
//{
//	//int ch = getchar();//getchar()从键盘接收一个字符，getchar函数的返回值是整型，即输入字符的ASCII码或EOF
//	//putchar(ch);//输出一个字符
//	//printf("%c\n", ch);
//	
//	
//	
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//EOF--end of file--> -1
//	{
//		putchar(ch);
//	}
//
//	return 0;
//}

