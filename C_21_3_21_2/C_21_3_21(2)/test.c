#define _CRT_SECURE_NO_WARNINGS

//��֧��ѭ����3��
//��ҵ

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//д���뽫���������Ӵ�С���
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);//����%d֮������κη��ţ��������ʱ��ҲҪ����ͬ����
//	//�㷨ʵ��a�з����ֵ b��֮ c�з���Сֵ
//	if (a < b)//a>=bʱ���Ѿ�ʵ���˵�һ����a,b�нϴ�����ŵ�a�е�Ŀ��
//	{
//		int tmp = a;//��ʱ����tmp,��ʱ�洢����ֵ��ֱ��a=b�ᵼ��aԭ����ֵ��ʧ
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//
//	return 0;
//}

//дһ�������ӡ1-100֮������3�ı���������
//int main()
//{
//	for (int i = 3; i < 101; i += 3)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//���������������������������Լ��
//int main()
//{
//	int m, n, r;
//	scanf("%d%d", & m, &n);//m��Ҫ����n
//	while (m % n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}

//��ӡ1000��2000��֮�������
//int main()
//{
//	int i;
//	int count = 0;
//	for (i = 1000; i < 2001; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)//1.�ܱ�4�����Ҳ��ܱ�100����	2.�ܱ�400����
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n��%d������\n", count);
//	return 0;
//}

//��ӡ100-200֮�������
//int main()
//{
//	int i;
//	int count = 0;
//	//for (i = 100; i < 201; i++)
//	for(i = 101; i < 201; i += 2)//��Ϊż���������������������ٴ��Ż�
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//1.�Գ���
//		int k;
//		//for (k = 2; k < i; k++)
//		for(k=2;k<=sqrt(i);k++)
//			//sqrt()--��ƽ������ѧ�⺯����ͷ�ļ�math.h
//			//��һ����������������һ����д��i=a*b����ʽ����a,b��һ����һ����С��sqrt(i)����˿���С�Գ���Χ
//		{
//			if (i % k == 0)
//			{
//				break;
//			}
//		}
//		//if (k == i)
//		if(k>sqrt(i))//�Ż�
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n����%d������\n", count);
//	return 0;
//}

//��д������һ��1��100�����������г��ֶ��ٸ�����9
//int main()
//{
//	int i;
//	int count = 0;
//	for (i = 1; i < 101; i++)
//	{
//		if (i/10 == 9)
//			count++;
//		if (i%10 == 9)
//			count++;
//	}
//	printf("����%d��9", count);
//	return 0;
//}

//����1/1-1/2+1/3-1/4+1/5...+1/99-1/100��ֵ����ӡ�����
//int main()
//{
//	int i;
//	double sum = 0.0;//double��ֵҪдС��
//	int flag = 1;
//	for (i = 1; i < 101; i++)
//	{
//		sum += flag * 1.0 / i;//1/i������Ϊ��0��1������������Ҫ��С��
//		//Ҫ�÷��ӷ�ĸ������һ��С����i�����ͣ����԰�1д��1.0
//		flag = -flag;
//	}
//	printf("%lf\n",sum );//%lf��ӡ������
//
//	return 0;
//}

//��ʮ�����������ֵ
//int main()
//{
//	int i;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("���ֵ��%d\n", max);
//	return 0;
//}

//����Ļ�����9*9�˷��ھ���
//int main()
//{
//	int m, n;
//	for (m = 1; m < 10; m++)
//	{
//		for (n = 1; n <= m; n++)
//		{
//			printf("%d * %d = %-2d ", m, n, m * n);//%2d��ʾ��ӡ��λ��������λ����λ���룬%-2d��ʾ��ӡ��λ�����
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//��д������һ���������������в��Ҿ����ĳ�������ҵ��˾ʹ�ӡ���������±꣬�Ҳ���������Ҳ���
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int left = 0;
//	int right =  sizeof(arr) / sizeof(arr[0]) - 1;
//	while (left <= right)
//	{
//		int mid = (right + left) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		if (arr[mid] > k)
//			right = mid - 1;
//		if(arr[mid]==k)
//		{
//			printf("�ҵ��ˣ��±���%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���");
//	return 0;
//}

//��������Ϸ
//1.��������һ�������
//2.������
//3.�����ظ���
//void menu()
//{
//	printf("***************************\n");
//	printf("***   1.play   0.exit   ***\n");
//	printf("***************************\n");
//}
//
////RAND_MAX	0x7FFF	32767	"ת������"��ʹ��
//void game()
//{
//	//1.����һ�������
//	int ret = rand()%100+1;//����1-100֮��������	rand()%100�õ�0-99
//					 //rand()����������������޲Σ�����ֵΪint������һ��0-RAND_MAX֮��������	ͷ�ļ�stdlib.h
//					 //�ڵ���rand֮ǰ����Ҫʹ��srand��������һ�������������
//	//printf("%d\n", ret);
//
//	//2.������
//	int guess;
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//
//	}
//
//
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));//srand����һ��������,������һ���仯������
//			 //ʹ��ʱ����������������������ʼ��	������������ֻ��Ҫ����һ�Σ���˷ŵ�ѭ��֮��
//			 //ʱ���	��ǰ�������ʱ�� - ���������ʼʱ�䣨1970.1.1 0:0:0��= ��xxxx����
//			 //ʹ��time������ȡϵͳʱ��	ͷ�ļ�time.h
//			 //time_t time(time_t* timer) ����time_t���ͣ�ת�����巢���Ƕ�long���е������������Է���ֵ����һ��������
//			 //����������Ҫ��ʱ�����һ��unsigned int������ǿ������ת��
//			 //NULL��ʾ��ָ��
//
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		case 1:
//			game();//��������Ϸ
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//
//
//	} while (input);
//
//	return 0;
//}

//
int main()
{
	char input[20];
	//shutdown -s -t 60	��cmd����60���ػ��Ĵ���
	//system()	ִ��ϵͳ����ĺ���
	system("shutdown -s -t 60");
	again:
	printf("��ע�⣬��ĵ��Խ���һ�����ڹػ���������룺��������ȡ���ػ�\n������:>");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)//�Ƚ������ַ���
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}

	return 0;
}