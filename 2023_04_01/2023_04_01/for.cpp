#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i = 0;
	int sum = 0;
	int mul = 1;
	int n = 1;
	printf("��������������");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		mul *= i;
		if (n == i)
		{
			printf("%d�Ľ׳�Ϊ��%d\n", n, mul);
		}
	}
	return 0;
}

//int main()
//{//do whileѭ��
//	int i = 1;
//	do
//	{
//		if (5 == i)
//		{
//			i++;
//			continue;
//		}			
//		printf("%d\t", i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}

//int main()
//{
//	//int i = 0;
//	//int k = 0;
//	//for (i = 0, k = 0; k = 0; i++, k++)//��=���͡�==��
//	//{
//	//	printf("hehe\t");
//	//	k++;
//	//}
//	/*int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\t");
//	}*/
//	//int i = 0;
//	//int j = 0;
//	//for ( ; i < 10; i++)
//	//{
//	//	for ( ; j < 10; j++)
//	//	{
//	//		printf("hehe\t");
//	//	}
//	//}
//	/*for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			printf("hehe\t");
//		}
//	}*/
//	/*for (;;)
//	{
//		printf("hehe\n");
//	}*/
//	return 0;
//}
//
////int main()
////{
////	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
////	int i = 0;
////	//for(i=0; i<=9; i++)
////	for (i = 0; i < 10; i++)
////	{//����ѭ�������޸�ѭ����������ֹforѭ��ʧȥ����
////	 //����ѭ��������ȡֵ���á�ǰ�պ����䡱��д��
////		printf("%d\t", arr[i]);
////	}
////	return 0;
////}