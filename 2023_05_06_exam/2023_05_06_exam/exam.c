#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d\n", a);
//
//	char ch = 'w';
//	char* pc = &ch;
//	//ָ�����ͣ�
//	//+1/-1�����������ֽڣ�������
//	//�����ò���ʱ��Ȩ��
//
//	//��������
//	//�󲿷������Ԫ�ص�ַ
//	//sizeof(������)
//	//&������ - ȡ����������ĵ�ַ
//
//	//����ָ��
//	int arr[10] = { 0 };
//	int(*parr)[10] = &arr;
//
//	//����ָ��
//	//printf("%p\n", &Add);
//	int(*pf)(int,int) = &Add;
//	printf("%d\n", (*pf)(2, 3));
//	printf("%d\n", pf(2, 3));
//
//	//����ָ������
//	int(*pfArr[4])(int, int) = { Add };
//	//pfArrÿ��Ԫ�ص�����Ϊint(*)(int,int)
//
//	//�ص�����
//	//ͨ������ָ����õĺ���
//
//	return 0;
//}

//ָ��+����
int main()
{
	int a[] = { 1,2,3,4 };
	printf("1 %d\n", sizeof(a));//sizeof(������)�������������С - 16

	printf("2 %d\n", sizeof(a+0));//��Ԫ�ص�ַ - 4

	printf("3 %d\n", sizeof(*a));//��Ԫ�� - 4

	printf("4 %d\n", sizeof(a + 1));//�ڶ���Ԫ�ص�ַ  - 4

	printf("5 %d\n", sizeof(a[1]));//1��Ԫ�� - 4

	printf("6 %d\n", sizeof(&a));//����ĵ�ַ - 4

	printf("7 %d\n", sizeof(*&a));//����������ĵ�ַ - ������������ - 16
	//&a  ---->  int(*)[4]

	printf("8 %d\n", sizeof(&a + 1));//����ĵ�ַ+1 - 4
	//����һ������4��ָ������Ԫ����ɣ�����

	printf("9 %d\n", sizeof(&a[0]));//��Ԫ�ص�ַ - 4

	printf("A %d\n", sizeof(&a[0] + 1));//�ڶ���Ԫ�صĵ�ַ - 4
	return 0;
}