#define _CRT_SECURE_NO_WARNINGS

//��ʶC���ԣ�2��
//ѭ�����--����--����

#include <stdio.h>

//ѭ�����
//int main() 
//{
//	int line = 0;
//
//	while (line < 20000)
//	{
//		printf("��һ�д��룺%d\n", line);
//		line++;
//	}
//	if(line >= 20000)
//	printf("��offer\n");
//
//	return 0;
//}

//����
//Add(int x,int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int sum;
//	int a = 100;
//	int b = 200;
//	sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//����

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//����һ�����ʮ���������ֵ�����
	//printf("%d\n", arr[4]);//���±����ʽ����Ԫ�أ�arr[�±�]
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return 0;
}