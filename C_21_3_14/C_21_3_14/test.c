#define _CRT_SECURE_NO_WARNINGS

//��ʶC���ԣ�2��
//����--�ַ���--ת���ַ�--ע��--ѡ�����



#include <stdio.h>
#include<string.h>

//ö�ٳ���
//�Ա��С�Ů������
//ö�ٹؼ���-enum
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};
//MALE FEMALE SECRET--ö�ٳ���

int main()
{
	//enum Sex s = FEMALE;
	printf("%d\n", MALE);//0
	printf("%d\n", FEMALE);//1
	printf("%d\n", SECRET);//2

	//�ַ������� ��abcde��"hello"��˫���ű�ʶ����a��'b'�����ű�ʶ�ַ�
	char arr1[] = "abc";//����
	//"abc"--'a','b','c','\0'     '\0'���ַ����Ľ�����־����һ��ת���ַ�
	char arr2[] = { 'a','b','c' ,0 };//{'a','b','c','\0'}
	//���ԣ����Ӵ��ڵ�ʹ�� 'a'=97 ASCII��
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%d\n", strlen(arr1));//strlen-string length �����ַ������ȵĺ���
	// \0�ǽ�����־�������ַ������ȣ�������3��û��/0ʱһֱ���㳤�ȵ�/0Ϊֹ������Ϊ���ֵ
	//printf("%d\n", strlen(arr2));

	//printf("%d\n", strlen("\328"));

	//ѡ�����
	int input;
	printf("�������\n��Ҫ�ú�ѧϰ��(0/1)>:");
	scanf("%d", &input);
	if (input == 0)
		printf("�ؼ��ֵ�\n");
	else
		printf("��offer\n");


	return 0;
}