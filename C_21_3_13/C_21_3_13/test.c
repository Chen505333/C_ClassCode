#define _CRT_SECURE_NO_WARNINGS//��ֹ��ʹ��strcpy,scanf�Ȳ���ȫ�ĺ���������������ʹ��scanf_s��ֹ����
//����������-��Ԥ�����������һ��_CRT_SECURE_NO_WARNINGS��ʹ������Ŀ��Ч
//scanf�Ǳ�׼c�����ṩ�ģ�scanf_s��vs�ṩ�ģ��õ������������޷�ʹ�ã���˾�����Ҫʹ��scanf_s ��ƽ̨��/����ֲ��

//��ʶC���ԣ�1��
//дC����--��������--����

//����һ����stdio.h���ļ�
//std-��׼ standard io-input output
#include <stdio.h>

int a = 100;//ȫ�ֱ���

//int��ʾ���Σ�mainǰ���int��ʾmain�������ú󷵻�һ������ֵ
//void main()�ǹ�ʱ��д������Ҫ��
int main() //������-��������-���ҽ���һ��
{
	printf("hello world\n");
	//����Ļ�����hello world  ����print functionΪ��ӡ����
	//�⺯��-c���Ա����ṩ�����ǵĺ�����ʹ�ÿ⺯����#include����

	//char-�ַ�����
	char ch = 'A';
	printf("%c\n", ch);//%c-��ӡ�ַ���ʽ������

	//int-����
	int age = 20;
	printf("%d\n", age);//%d-��ӡ����ʮ��������

	//%f-��ӡ������  %p-�Ե�ַ��ʽ��ӡ  %x-��ӡ16���� %c-��ӡ�ַ� %s-��ӡ�ַ���

	printf("%d\n", sizeof(char));//  1
	printf("%d\n", sizeof(short));//  2
	printf("%d\n", sizeof(int));//  4
	printf("%d\n", sizeof(long));//  4
	printf("%d\n", sizeof(long long));//  8
	printf("%d\n", sizeof(float));//  4
	printf("%d\n", sizeof(double));//  8

	short age1 = 20;//���ڴ�����2���ֽ�=16bitλ���������20
	float weight = 95.6f;//С��Ĭ��Ϊdouble���ͣ���˼�f����Ϊ������ ���ڴ������ĸ��ֽڣ����С��

	int a = 10;//�ֲ����� ֻ��{}֮����Ч
	//ȫ�ֱ����;ֲ����������ֽ��鲻Ҫ��ͬ���׳�bug����������ͬʱ�ֲ���������
	printf("%d\n", a);

	//�����������ĺ�
	int num1 = 0;
	int num2 = 0;
	int sum = 0;//c���Ա���Ҫ�����ڵ�ǰ��������ǰ��
	//��������-ʹ�����뺯��scanf
	scanf("%d%d", &num1, &num2);//ȡ��ַ����&����������������ֱַ����num1num2�ĵ�ַ��
	sum = num1 + num2;
	printf("sum = %d\n", sum);

	//δ�����ı�ʶ��
	//extern�����ⲿ����
	extern int g_val;
	printf("g_val = %d\n", g_val);
	return 0;//���� 0
}
