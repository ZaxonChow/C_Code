#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	int a = 10;
//	int *pa = &a;
//	int *p = NULL;//NULL������ʼ��ָ��
//	*pa = 20;
//	pa = NULL;
//	//ʹ��ָ��ǰ�����ָ����Ч��
//	if (pa != NULL)
//	{
//		*pa = 10;
//	}
//	return 0;
//}

//int main()
//{
//	//ָ��+-����
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int *p = arr;
//	for (i = 0; i < sz/2; i++)
//	{
//		printf("%d ", *p);
//		p+=2;
//	}
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n",&arr[9] - &arr[8]);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char *start = str;
//	char *end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	//strlen - ���ַ�������
//	//�ݹ�
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	//����ָ�������ָ����ָ������Ԫ�����һ��Ԫ�غ�����ڴ�λ�õ�ָ��Ƚ�
//	//��������ָ���һ��Ԫ��֮ǰ���Ǹ��ڴ�λ�õ�ָ����бȽ�
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	//1.&arr - &������ - ��������ʾ�������� - ȡ��������������ĵ�ַ
//	//2.sizeof(arr) - sizeof(������) - ��������ʾ�������� - ������������Ĵ�С
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%p   =======  %p\n", p+i, &arr[i]);
//	//}
//	return 0;
//}
//
//int main()
//{
//	//����ָ��
//	int a = 10;
//	int *pa = &a;
//	int **ppa = &pa;//����ָ��
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	return 0;
//}

int main()
{
	//ָ������ - ���� - ���ָ��
	//����ָ�� - ָ��
	int a = 10;
	int b = 20;
	int c = 30;
	//int *pa = &a;
	//int *pb = &b;
	//int *pc = &c;
	//�������� - �������
	//�ַ����� - ����ַ�
	int arr[10] = {0};
	int *arr2[3] = { &a, &b, &c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *arr2[i]);
	}
	return 0;
}