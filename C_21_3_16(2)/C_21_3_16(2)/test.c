#define _CRT_SECURE_NO_WARNINGS

//��֧��ѭ����2��
//whileѭ��--forѭ��

#include <stdio.h>

//whileѭ��

//����

//�˽�scanf��getchar��ԭ��while��ѭ��
//int main()
//{
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("���������룺");
//	scanf("%s", password);//�������룬�������password������
//	//scanf��getchar�Ĺ���ԭ����ʼ�
//	//��������ʣ��һ��'\n'
//	//��ȡһ��'\n'
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ�ϣ�Y/N����");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�");
//	}
//	else
//	{
//		printf("����ȷ��");
//	}
//
//	return 0;
//}

//ֻ��������ַ�
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

//�ܽ�
//int main()
//{
//	int i = 0;//ѭ�������ĳ�ʼ��
//	while (10 > i)//�ж�
//	{
//		//...
//		i++;//����  i++����i+=1 ���μ�2����i+=2
//	}
//	return 0;
//}

//forѭ��

//ʹ��forѭ������Ļ�ϴ�ӡ1-10
//int main()
//{
//	int i;
//	//  ��ʼ��    �ж�   ����
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

//һЩforѭ���ı���

//ʡ��
//int main()
//{
//	for (;;)//forѭ���ĳ�ʼ�����жϡ�����������ʡ��
//		//�жϲ��������ʡ�ԣ����жϽ�����Ǻ�Ϊ��
//		//��Ҫ���ʡ��
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//ʡ�Գ�������ӣ���ӡ100��hehe
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
//ʡ�Ժ�
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)//ʡ�Ե���jû�����³�ʼ��Ϊ0
//		{
//			printf("hehe\n");
//		}
//	}
//
//	return 0;
//}

//������������
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)//++x��x++û����
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//����

//����ѭ��Ҫѭ�����ٴΣ�
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//�жϲ��ְ�0��ֵ��k,�жϲ��ֵĽ������k,Ҳ����0������ֱ������ѭ����0��
//		k++;
//
//	return 0;
//}