#define _CRT_SECURE_NO_WARNINGS

//��ʶC���ԣ�3��(4)
//���ùؼ���--ָ��--�ṹ��

#include <stdio.h>
#include<string.h>


//���ùؼ���
//int main()
//{
//	auto int a = 10;//�ֲ����������Զ�����������һ��ʡ��auto
//	register int b = 15;//�����b����ɼĴ�������
//	signed int c = -6;//int��������з�������һ��ʡ��signed  unsigned�޷��ŵ�
//	//struct �ṹ��ؼ���  union ������/������
//	
//	//typedef�����ض���
//	typedef unsigned int u_int;
//	u_int num = 20;
//	
//	return 0;
//}

//static
//1.static���ξֲ�����
//void test()
//{
//	//int a = 1;//a�Ǿֲ����������뺯��ʱ������������������� ���Ϊ2 2 2 2 2
//	static int a = 1;//a��һ����̬�ľֲ����� static���ξֲ������ǣ��ֲ������������ڱ䳤����������
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
//2.static����ȫ�ֱ���
//int main()
//{
//	extern int g_val;
//	printf("g_val = %d\n", g_val);//static����ȫ�ֱ���ʱ���ı��˱������������þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ���ʹ��
//	return 0;
//}
//3.static���κ���
//�����ⲿ����
//extern int Add(int, int);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sun = %d\n", sum);
//	return 0;
//}//static���κ����ı��˺�������������
////��ͨ�ĺ��������ⲿ�������ԣ�extern��������ʹ��
////static���κ��ⲿ��������--���ڲ��������ԣ�����������Դ�ļ�ʹ��

//#define
//1.#define�����ʶ������
//#define MAX 100//MAX����100
//2.#define����꣨��������
//#define MAX(x,y) (x>y?x:y)//��(x>y?x:y)�滻MAX��x,y��
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

//ָ��
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);//&aȡa�ĵ�ַ %p��ӡ��ַ ȡ��ַ������ &
//	int* p = &a;//������ŵ�ַ�ı���--ָ����� int*��p������
//	printf("%p\n", p);
//	*p = 20;//*--�����ò�����
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

//�ṹ��
//�� �������Ա����䡢���...
//�� �����������硢���ۡ����...
//���Ӷ���-->�ṹ��-->�����Լ������һ������
struct Book
{
	char name[20];//C���Գ������
	short price;//55
};

int main()
{
	//���ýṹ�����ͣ�����һ�������ͽṹ�����
	struct Book b1 = { "C���Գ������", 55 };
	printf("������%s\n", b1.name);
	printf("�۸�%dԪ\n", b1.price);//������ .  �ṹ�����.��Ա
	struct Book* pb = &b1;
	//����pb��ӡ�����ͼ۸�
	printf("������%s\n", (*pb).name);
	printf("�۸�%dԪ\n", (*pb).price);
	printf("������%s\n", pb->name);//������ ->   �ṹ��ָ��->��Ա
	printf("�۸�%dԪ\n", pb->price);

	//�޸Ľṹ������
	b1.price = 15;
	strcpy(b1.name, "C++�������");//�⺯��strcpy--string copy �ַ������� ����һ���µ��ַ������Ǿɵ� string.h
	printf("%s\n", b1.name);
	return 0;
}