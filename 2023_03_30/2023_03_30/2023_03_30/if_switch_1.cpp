#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	//ctrl + z
	//EOF end of file
	int ch = getchar();
	putchar(ch);
	printf("%c\n", ch);
	return 0;
	/*int i = 1;
	while (10 >= i)
	{
		if (5 == i)
		{
			i++;
			continue;
		}
		printf("%d\t", i);
		i++;
	}
	return 0;*/
	/*int n = 1;
	int m = 2;
	switch (n)
	{
	case 1: m++;
	case 2: n++;
	case 3: 
		switch (n)
		{
		case 1: n++;
		case 2: m++; n++; break;
		}
	case 4: m++; break;
	default: break;
	}
	printf("m = %d, n = %d\n", m, n);
	return 0;*/
}
//int main()
//{
//	
//	/*int day = 0;
//	printf("������1-7��");
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n"); break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n"); break;
//	default:
//		printf("��������ȷ������\n");*/
//		/*case 1: printf("����һ\n"); break;
//		case 2: printf("���ڶ�\n"); break;
//		case 3: printf("������\n"); break;
//		case 4: printf("������\n"); break;
//		case 5: printf("������\n"); break;
//		case 6: printf("������\n"); break;
//		case 7: printf("������\n"); break;
//		default: printf("�������\n"); break; */
//	}	
//	return 0;
//	/*int i = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		if (1 == i % 2)
//			printf("%d\n", i);
//	}*/
//	/*int num = 4;
//	if (4 == num)
//		printf("hehe\n");*/
//	/*int a = 0;
//	int b = 2;
//	if (1 == a)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");*/
//	/*int age = 45;
//	if (age < 18)
//		printf("δ����");
//	else if (age < 28)
//		printf("����\n");
//	else if (age < 50)
//		printf("׳��\n");
//	else if (age < 90)
//		printf("����\n");
//	else
//		printf("�ϲ���\n");*/
//	/*if (age < 18)
//		printf("δ����\n");
//	else
//		printf("����\n");*/
//	//return 0;
//}
//
////int main()
////{
////	int a, b;
////	a = 0;
////	b = 1;
////	printf("a + b = %d\n", a + b);
////	return 0;
////}