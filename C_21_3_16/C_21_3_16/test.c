#define _CRT_SECURE_NO_WARNINGS

//��֧��ѭ����1��
//if���--switch���--while���

#include <stdio.h>

//if���
// 
// 
//int main()
//{
//	int age = 10;
//	if (age < 18)
//		printf("δ����\n");
//	//else if(18 <= age < 28)//����д���Ǵ���� ��������ȼ���18<=age����٣���Ϊ0/1<28 
//	//if������ж������ڱ��ʽ�Ľ��Ϊ0ʱ������Ϊ1ʱִ��
//	else if (age >= 18 && age < 28)
//		printf("����\n");
//	else if (age >= 28 && age < 50)
//		printf("׳��\n");
//	else if (age >= 50 && age < 90)
//		printf("����\n");
//	else
//		printf("�ϲ���\n");
//
//
//	return 0;
//}

//����else
//int main() 
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");//else���������δƥ���if����ƥ��
//	return 0;
//}

//�ж�һ�����Ƿ�Ϊ����

//int main()
//{
//	int a;
//	printf("���������֣�");
//	scanf("%d", &a);
//	int b = a % 2;
//	//printf("%d\n", b);
//	if (1 == b)
//		printf("�����������\n");
//	else
//		printf("�������ż��\n");
//
//
//	return 0;
//}

//���1-100֮�������
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

//switch���

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//switch�����ݣ����ڱ��ʽ��ֵ�������ĸ�case���룬����break�˳�switch
//	{
//	//case 1:
//	//	printf("����һ\n");
//	//	break;
//	//case 2:
//	//	printf("���ڶ�\n");
//	//	break;
//	//case 3:
//	//	printf("������\n");
//	//	break;
//	//case 4:
//	//	printf("������\n");
//	//	break;
//	//case 5:
//	//	printf("������\n");
//	//	break;
//	//case 6:
//	//	printf("������\n");
//	//	break;
//	//case 7:
//	//	printf("������\n");
//	//	break;
//
//
//	case 1:
//	case 2:
//	case 3:
//	case 4://һֱ���е�break����switch
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default://Ĭ��
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}


//whileѭ��

//��ӡ1-10
//int main()
//{
//	int i = 1;
//		while (10 >= i)
//		{
//			if (5 == i)
//				//				break;//ֱ����ֹѭ����������ֹ
//				continue;//��ֹ����ѭ��������ѭ����continue����Ĵ��벻��ִ�У�ֱ����ת��while�����жϲ��֣�������һ��ѭ������ж�
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

//����
//int main()
//{
//	//int ch = getchar();//getchar()�Ӽ��̽���һ���ַ���getchar�����ķ���ֵ�����ͣ��������ַ���ASCII���EOF
//	//putchar(ch);//���һ���ַ�
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

