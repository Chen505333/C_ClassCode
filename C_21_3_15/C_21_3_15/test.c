#define _CRT_SECURE_NO_WARNINGS

//初识C语言（3）(4)
//常用关键字--指针--结构体

#include <stdio.h>
#include<string.h>


//常用关键字
//int main()
//{
//	auto int a = 10;//局部变量都是自动变量，所以一般省略auto
//	register int b = 15;//建议把b定义成寄存器变量
//	signed int c = -6;//int定义的是有符号数，一般省略signed  unsigned无符号的
//	//struct 结构体关键字  union 联合体/共用体
//	
//	//typedef类型重定义
//	typedef unsigned int u_int;
//	u_int num = 20;
//	
//	return 0;
//}

//static
//1.static修饰局部变量
//void test()
//{
//	//int a = 1;//a是局部变量，进入函数时创建，函数跑完就销毁 结果为2 2 2 2 2
//	static int a = 1;//a是一个静态的局部变量 static修饰局部变量是，局部变量生命周期变长，不再销毁
//	a++;
//	printf("a = %d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//2.static修饰全局变量
//int main()
//{
//	extern int g_val;
//	printf("g_val = %d\n", g_val);//static修饰全局变量时，改变了变量的作用域，让静态的全局变量只能在自己所在的源文件内使用
//	return 0;
//}
//3.static修饰函数
//声明外部函数
//extern int Add(int, int);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sun = %d\n", sum);
//	return 0;
//}//static修饰函数改变了函数的链接属性
////普通的函数具有外部链接属性，extern声明即可使用
////static修饰后外部链接属性--》内部链接属性，不能在其他源文件使用

//#define
//1.#define定义标识符常量
//#define MAX 100//MAX就是100
//2.#define定义宏（带参数）
//#define MAX(x,y) (x>y?x:y)//用(x>y?x:y)替换MAX（x,y）
//int main()
//{
//	//int a = MAX;
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	//int max = (a>b?a:b)
//	printf("max = %d\n", max);
//	return 0;
//}

//指针
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);//&a取a的地址 %p打印地址 取地址操作符 &
//	int* p = &a;//用来存放地址的变量--指针变量 int*是p的类型
//	printf("%p\n", p);
//	*p = 20;//*--解引用操作符
//	printf("a = %d\n", a);
//
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c\n", ch);
//	printf("%d\n", sizeof pc);
//
//	return 0;
//}

//结构体
//人 姓名、性别、年龄、身高...
//书 书名、出版社、定价、书号...
//复杂对象-->结构体-->我们自己创造的一种类型
struct Book
{
	char name[20];//C语言程序设计
	short price;//55
};

int main()
{
	//利用结构体类型，创建一个该类型结构体变量
	struct Book b1 = { "C语言程序设计", 55 };
	printf("书名：%s\n", b1.name);
	printf("价格：%d元\n", b1.price);//操作符 .  结构体变量.成员
	struct Book* pb = &b1;
	//利用pb打印书名和价格
	printf("书名：%s\n", (*pb).name);
	printf("价格：%d元\n", (*pb).price);
	printf("书名：%s\n", pb->name);//操作符 ->   结构体指针->成员
	printf("价格：%d元\n", pb->price);

	//修改结构体内容
	b1.price = 15;
	strcpy(b1.name, "C++程序设计");//库函数strcpy--string copy 字符串拷贝 复制一个新的字符串覆盖旧的 string.h
	printf("%s\n", b1.name);
	return 0;
}