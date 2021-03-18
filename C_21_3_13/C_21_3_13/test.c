#define _CRT_SECURE_NO_WARNINGS//防止因使用strcpy,scanf等不安全的函数报警，还可以使用scanf_s防止报警
//可以在属性-》预处理器定义加一行_CRT_SECURE_NO_WARNINGS，使整个项目生效
//scanf是标准c语言提供的，scanf_s是vs提供的，拿到其他编译器无法使用，因此尽量不要使用scanf_s 跨平台性/可移植性

//初识C语言（1）
//写C代码--数据类型--变量

//包含一个叫stdio.h的文件
//std-标准 standard io-input output
#include <stdio.h>

int a = 100;//全局变量

//int表示整形，main前面的int表示main函数调用后返回一个整型值
//void main()是过时的写法，不要用
int main() //主函数-程序的入口-有且仅有一个
{
	printf("hello world\n");
	//在屏幕上输出hello world  函数print function为打印函数
	//库函数-c语言本身提供给我们的函数，使用库函数需#include声明

	//char-字符类型
	char ch = 'A';
	printf("%c\n", ch);//%c-打印字符格式的数据

	//int-整型
	int age = 20;
	printf("%d\n", age);//%d-打印整型十进制数据

	//%f-打印浮点数  %p-以地址形式打印  %x-打印16进制 %c-打印字符 %s-打印字符串

	printf("%d\n", sizeof(char));//  1
	printf("%d\n", sizeof(short));//  2
	printf("%d\n", sizeof(int));//  4
	printf("%d\n", sizeof(long));//  4
	printf("%d\n", sizeof(long long));//  8
	printf("%d\n", sizeof(float));//  4
	printf("%d\n", sizeof(double));//  8

	short age1 = 20;//向内存申请2个字节=16bit位，用来存放20
	float weight = 95.6f;//小数默认为double类型，因此加f定义为单精度 向内存申请四个字节，存放小数

	int a = 10;//局部变量 只在{}之内有效
	//全局变量和局部变量的名字建议不要相同，易出bug，当名字相同时局部变量优先
	printf("%d\n", a);

	//计算两个数的和
	int num1 = 0;
	int num2 = 0;
	int sum = 0;//c语言变量要定义在当前代码块的最前面
	//输入数据-使用输入函数scanf
	scanf("%d%d", &num1, &num2);//取地址符号&，把输入的两个数字分别放在num1num2的地址处
	sum = num1 + num2;
	printf("sum = %d\n", sum);

	//未声明的标识符
	//extern声明外部符号
	extern int g_val;
	printf("g_val = %d\n", g_val);
	return 0;//返回 0
}
