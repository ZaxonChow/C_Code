#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	//关机程序
	//shutdown -s -t 60
	//system() - 执行系统命令
	char input[50] = { 0 };
	//system("shutdown -s -t 30");
again:
	printf("请注意，您的电脑将在 30s 内关机，如果输入：猛超很帅，就取消关机\n请输入：");
	scanf("%s", input);
	if (strcmp(input, "猛超很帅") == 0)
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
//	//goto 少用
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
	//1.生成一个随机数
	int ret = 0;
	ret = rand() % 100 + 1;
	int num = 0;
	do
	{
		printf("猜数字：");
		scanf("%d", &num);
		if (num > ret)
		{
			printf("大了\n");
		}
		if (num < ret)
		{
			printf("小了\n");
		}
		if (num == ret)
		{
			printf("恭喜你答对了！\n");
		}
	} while (num != ret);
}

int main()
{
	//猜数字
	//1.电脑随机生成一个随机数
	//2.得了，小了，对了
	//3.重复玩
	int input = 0;
	//时间戳：当前计算机时间 - 计算机起始时间（1970.1.1 00:00:00）
	//拿时间戳设置随机数
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	}while (input);
	return 0;
}
*/
////乘法口诀表
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
//int max = arr[0];//最大值
//int i = 0;
//int sz = sizeof(arr) / sizeof(arr[0]); //几个元素
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

