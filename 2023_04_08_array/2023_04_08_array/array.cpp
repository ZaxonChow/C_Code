#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>

//int main()
//{
//	int arr[10] = { 1, 2, 3 };//����ȫ��ʼ����ʣ��Ԫ��Ĭ��Ϊ0
//	char arr2[5] = { 'a', 'b', 99};
//	char arr3[5] = "ab";
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));//��ռ�ռ��С���ַ�����'\0'��������������顢���͵Ĵ�С - ������
//	printf("%d\n", strlen(arr4));//'\0'֮ǰ�ַ�����,ֻ����ַ������� - �⺯��
//	char arr1[] = "abc";
//	char arr5[] = { 'a', 'b', 'c' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr5));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr5));
//	return 0;
//}

//int main()
//{
//	//һά����
//	//char arr[] = "abcdef";
//	//int i = 0;
//	//for (i = 0; i < strlen(arr); i++)
//	//{
//	//	printf("%c ", arr[i]);
//	//}
//	//
//	//return 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n",i, &arr[i]);
//	}
//	//�������ڴ����������
//}

//int main()
//{
//	int arr[3][4] = {1,2,3,4,5};
//	int arr2[3][4] = { { 1, 2, 3 }, { 4, 5 }};
//	int arr3[][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };//��ά���鲻��ʡ����
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr2[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr2[3][4] = { { 1, 2, 3 }, { 4, 5 } };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr2[%d][%d] = %p\n", i, j, &arr2[i][j]);
//		}
//	}
//	return 0;
//}

