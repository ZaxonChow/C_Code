#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	//�ػ�����
	//shutdown -s -t 60
	//system() - ִ��ϵͳ����
	char input[50] = { 0 };
	//system("shutdown -s -t 30");
again:
	printf("��ע�⣬���ĵ��Խ��� 30s �ڹػ���������룺�ͳ���˧����ȡ���ػ�\n�����룺");
	scanf("%s", input);
	if (strcmp(input, "�ͳ���˧") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}

//int main()
//{
//	//goto ����
//	again:
//	printf("hello bit\n");
//	goto again;
//	return 0;
//}

/*
void menu()
{
	printf("*********************************\n");
	printf("****	1. play    0.exit    ****\n");
	printf("*********************************\n");
}

void game()
{
	//1.����һ�������
	int ret = 0;
	ret = rand() % 100 + 1;
	int num = 0;
	do
	{
		printf("�����֣�");
		scanf("%d", &num);
		if (num > ret)
		{
			printf("����\n");
		}
		if (num < ret)
		{
			printf("С��\n");
		}
		if (num == ret)
		{
			printf("��ϲ�����ˣ�\n");
		}
	} while (num != ret);
}

int main()
{
	//������
	//1.�����������һ�������
	//2.���ˣ�С�ˣ�����
	//3.�ظ���
	int input = 0;
	//ʱ�������ǰ�����ʱ�� - �������ʼʱ�䣨1970.1.1 00:00:00��
	//��ʱ������������
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	}while (input);
	return 0;
}
*/
////�˷��ھ���
//int i = 0, j = 0;
//for (i = 1; i <= 9; i++)
//{
//	for (j = 1; j <= i; j++)
//	{
//		printf("%d * %d = %-2d  ", i, j, i*j);
//	}
//	printf("\n");
//}
//return 0;
//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//int max = arr[0];//���ֵ
//int i = 0;
//int sz = sizeof(arr) / sizeof(arr[0]); //����Ԫ��
//for (i = 0; i < sz; i++)
//{
//	if (arr[i] > max)
//	{
//		max = arr[i];
//	}
//}
//printf("max = %d\n", max);
//return 0;
/*int i = 0;
float sum = 0;
int flag = 1;
for (i = 1; i <= 100; i++)
{
	sum += flag * 1.0 / i;
	flag = -flag;
}
printf("%lf\n", sum);
return 0;*/
/*int i = 0;
int count = 0;
for (i = 1; i <= 100; i++)
{
	if (i%10 == 9)
		count++;
	if (i / 10 == 9)
		count++;
}
printf("%d\n", count);
return 0;*/
/*int a = 0, b = 0;
for (a = 1, b = 1; a <= 100; a++)
{
	if (b >= 20) break;
	if (b % 3 == 1)
	{
		b = b + 3;
		continue;
	}
	b = b - 5;
}
printf("%d\n", a);
return 0;*/

