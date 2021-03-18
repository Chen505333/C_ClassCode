#define _CRT_SECURE_NO_WARNINGS

//初识C语言（2）
//常量--字符串--转义字符--注释--选择语句



#include <stdio.h>
#include<string.h>

//枚举常量
//性别：男、女、保密
//枚举关键字-enum
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};
//MALE FEMALE SECRET--枚举常量

int main()
{
	//enum Sex s = FEMALE;
	printf("%d\n", MALE);//0
	printf("%d\n", FEMALE);//1
	printf("%d\n", SECRET);//2

	//字符串类型 “abcde”"hello"用双引号标识，‘a’'b'单引号标识字符
	char arr1[] = "abc";//数组
	//"abc"--'a','b','c','\0'     '\0'是字符串的结束标志，是一个转义字符
	char arr2[] = { 'a','b','c' ,0 };//{'a','b','c','\0'}
	//调试，监视窗口的使用 'a'=97 ASCII码
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%d\n", strlen(arr1));//strlen-string length 计算字符串长度的函数
	// \0是结束标志，不算字符串长度，因此输出3。没有/0时一直计算长度到/0为止，所以为随机值
	//printf("%d\n", strlen(arr2));

	//printf("%d\n", strlen("\328"));

	//选择语句
	int input;
	printf("加入比特\n你要好好学习吗？(0/1)>:");
	scanf("%d", &input);
	if (input == 0)
		printf("回家种地\n");
	else
		printf("好offer\n");


	return 0;
}