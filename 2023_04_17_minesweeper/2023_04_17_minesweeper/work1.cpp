#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<limits.h>

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
	//�ҳ�ֻ����һ�ε�Ԫ��
	int i = 0;
	int ret = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		ret = ret^arr[i];
	}
	printf("������%d\n", ret);
	////�������
	//int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//for (i = 0; i < sz; i++)
	//{
	//	int j = 0;
	//	int count = 0;
	//	for (j = 0; j < sz; j++)
	//	{
	//		if (arr[i] == arr[j])
	//		{
	//			count++;
	//		}
	//	}
	//	if (count == 1)
	//	{
	//		printf("ֻ����һ�ε���Ϊ��%d\n", arr[i]);
	//	}
	//}
	return 0;
}

//int main()
//{
//	//�����������α��������õ�������
//	int a = 3;
//	int b = 5;
//	printf("����ǰ��a=%d b=%d", a, b);
//	a = a^b;//^��λ���
//	b = a^b;
//	a = a^b;
//	////�˷����迼����������
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	printf("������a=%d b=%d", a, b);
//	return 0;
//}