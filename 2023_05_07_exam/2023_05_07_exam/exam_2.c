#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()
//{
//	char a[] = { 'a','b','c','d','e','f' };
//	printf("1 %d\n", sizeof(a));//sizeof(������)�������������С - 6
//
//	printf("2 %d\n", sizeof(a + 0));//��Ԫ�ص�ַ - 4
//
//	printf("3 %d\n", sizeof(*a));//��Ԫ�� - 1
//
//	printf("4 %d\n", sizeof(a + 1));//�ڶ���Ԫ�ص�ַ  - 4
//
//	printf("5 %d\n", sizeof(a[1]));//1��Ԫ�� - 1
//
//	printf("6 %d\n", sizeof(&a));//����ĵ�ַ - 4
//
//	printf("7 %d\n", sizeof(*&a));//����������ĵ�ַ - ������������ - 6
//	//&a  ---->  int(*)[4]
//
//	printf("8 %d\n", sizeof(&a + 1));//����ĵ�ַ+1 - 4
//	//����һ������6��ָ���ַ�Ԫ����ɣ�����
//
//	printf("9 %d\n", sizeof(&a[0]));//��Ԫ�ص�ַ - 4
//
//	printf("A %d\n", sizeof(&a[0] + 1));//�ڶ���Ԫ�صĵ�ַ - 4
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));//���ֵ
//	printf("%d\n", strlen(arr + 0));//���ֵ
//
//	//printf("%d\n", strlen(*arr));//Ұָ�� - strlen('a')
//	//printf("%d\n", strlen(arr[1]));//Ұָ�� - strlen('b')
//	printf("%d\n", strlen(&arr));//���ֵ
//	printf("%d\n", strlen(&arr + 1));//���ֵ - ����arr���� - ���Ϸ���6���ֽ�
//	printf("%d\n", strlen(&arr[0] + 1));//���ֵ - ��'b'��ʼ���� - ���Ϸ���1���ֽ� 
//	return 0;
//}


//�����ַ-->�����ַ

//int main()
//{
//	char arr[] = "abcdef";//������'\0'
//	printf("%d\n", sizeof(arr));//�����С - 7
//	printf("%d\n", sizeof(arr + 0));//��Ԫ�ص�ַ - 4
//	printf("%d\n", sizeof(*arr));//��Ԫ�ش�С - 1
//	printf("%d\n", sizeof(arr[1]));//�ڶ���Ԫ�ش�С - 1
//	printf("%d\n", sizeof(&arr));//���������ַ - 4
//	printf("%d\n", sizeof(&arr + 1));//������ַ - 4
//	printf("%d\n", sizeof(&arr[0] + 1));//�ڶ���Ԫ�ص�ַ - 4
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";//������'\0'
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	//printf("%d\n", strlen(*arr));//Ұָ��
//	//printf("%d\n", strlen(arr[1]));//Ұָ��
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr + 1));//���ֵ
//	printf("%d\n", strlen(&arr[0] + 1));//5
//	return 0;
//}

int main()
{
	char* p = "abcdef";//�����ַ��� - p������ַ���ַ��ָ��a
	printf("%d\n", sizeof(p));//4
	printf("%d\n", sizeof(p + 1));//4
	printf("%d\n", sizeof(*p));//1
	printf("%d\n", sizeof(p[0]));//1  === *(p+0)
	printf("%d\n", sizeof(&p));//4 - ����ָ��
	printf("%d\n", sizeof(&p + 1));//4 - ����
	printf("%d\n", sizeof(&p[0] + 1));//4

	printf("%d\n", strlen(p));//6
	printf("%d\n", strlen(p + 1));//5
	//printf("%d\n", strlen(*p));//Ұָ��
	//printf("%d\n", strlen(p[0]));//Ұָ��
	printf("%d\n", strlen(&p));//���ֵ
	printf("%d\n", strlen(&p + 1));//���ֵ
	printf("%d\n", strlen(&p[0] + 1));//5
	return 0;
}