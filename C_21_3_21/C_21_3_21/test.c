#define _CRT_SECURE_NO_WARNINGS

//��֧��ѭ����2��
//do whileѭ��--��ϰ

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

//do whileѭ��

//����Ļ�ϴ�ӡ1-10
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)
//			//break;//1 2 3 4
//			continue;//1 2 3 4��ѭ��
//		printf("%d ", i);
//		i++;
//	} 	while (i <= 10);
//	return 0;
//}

//��ϰ

//����n�Ľ׳�
//int main()
//{
//	int n;
//	int ret = 1;
//	printf("����������n��");
//	scanf("%d", &n);
//	for (int i = 1; i < (n + 1); i++)
//	{
//		ret *= i;
//	}
//	printf("n�Ľ׳�Ϊ��%d\n", ret);
//	return 0;
//}

//����1!+2!+3!+...+10!
//int main()
//{
//	int sum = 0;
//	for (int i = 1; i < 11; i++)
//	{
//		int ret = 1;//��ʼ��ret
//		for (int k = 1; k <= i; k++)
//		{
//			ret *= k;
//		}
//		sum += ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}//Ч�ʵͣ��ظ�����1*2*3...
//int main()
//{
//	int sum = 0;
//	int ret = 1;
//	for (int i = 1; i < 11; i++)
//	{
//		ret = i * ret;
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}//n! = n * (n-1)!

//�����������в���ĳ����������n
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 11;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±���%d\n", i);
//			break;
//		}
//		if (i == sz - 1)
//			printf("�Ҳ���\n");
//	}
//	return 0;
//}//�����ķ�ʽ���ң�Ч�ʵ�
//���ֲ����㷨���۰�����㷨
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,8,9,10,11 };
//	int k = 7;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//		
//
//	return 0;
//}

//��д���룬��ʾ����ַ��������ƶ������м���
//int main()
//{
//	//char arr[] = "abc"
//	//{'a','b','c','\0'}
//	//  0   1   2    3
//	char arr1[] = "hello world";
//	char arr2[] = "###########";
//	int left = 0;//���±�
//	//int sz = sizeof(arr2) / sizeof(arr2[0]);
//	//int right = sz - 2;//���±꣬Ҫ��ȥ\0���±�
//	int right = strlen(arr2) - 1;//strlen����ʱ������\0
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//��Ϣһ�룬ͷ�ļ�windows.h����λ�Ǻ���
//		Sleep(1000);
//		system("cls");//ִ��ϵͳ�����һ������	ͷ�ļ�stdlib.h	cls--q�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�½���Ρ�
//��ֻ���������������룬���������ȷ����ʾ��½�ɹ���������ξ�����������˳�����
int main()
{
	char password[20] = {0};
	int i;
	for ( i = 1; i < 4; i++)
	{
		printf("���������룺");
		scanf("%s", password);//password�����飬�����˵�ַ������Ҫ&
//		if (password == "abcd")//==���������Ƚ������ַ����Ƿ���ȣ�Ӧʹ��һ���⺯��--strcmp
		if (strcmp(password, "abcd") == 0)
		{

			printf("��½�ɹ�\n");
			break;
		}
		else
			printf("�������\n");
	}
	if (i == 4)
	{
		printf("��������������˳�����\n");
	}

	return 0;
}