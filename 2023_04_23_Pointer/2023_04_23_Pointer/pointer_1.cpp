#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a = 10;
//	int* p = &a;//ָ�����
//	return 0;
//}

//int main()
//{
//	/*printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));*/
//	//ָ����ָ������
//	//ָ�����;�����ָ����н����ò���ʱ���ܷ��ʵĿռ�Ĵ�С
//	//int* p, *p����4���ֽ�
//	//char* p, *p����1���ֽ�
//	//double* p, *p����8���ֽ�
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;
//	printf("%p\n", pa);
//	printf("%d\n", *pa);
//	return 0;
//}

//int main()
//{
//	//ָ�����;�����ָ����һ���߶�Զ - ָ��Ĳ���
//	int a = 0x11223344;
//	int* pa = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);//�ĸ��ֽ�
//	char b = 'a';
//	char* pb = &b;
//	printf("%p\n", pb);
//	printf("%p\n", pb + 1);//һ���ֽ�
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	printf("%p\n", p);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr[0]);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//		printf("%d ", *(p + i));
//		printf("%p\t", (p + i));
//	}
//	printf("\n");
//	return 0;
//}

//Ұָ��
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	//ָ��ָ��λ�ò���֪
//	//δ��ʼ��
//	//int* p;
//	//ָ��Խ��
//	//int arr[10] = { 0 };
//	//int* p = arr;
//	//int i = 0;
//	//for (i = 0; i <= 11; i++)
//	//{
//	//	*(p++) = i;
//	//}
//	//ָ��ָ��Ŀռ��ͷ�
//	int* p = test();
//	*p = 20;//���ؾֲ���������ʱ�����ĵ�ַ
//	return 0;
//}