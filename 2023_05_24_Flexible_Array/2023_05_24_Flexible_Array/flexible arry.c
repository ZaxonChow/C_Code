#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//��������
//�ṹ���У����һ��Ԫ���Ǵ�Сδ֪������
//�ṹ�е����������Աǰ������������һ����Ա
//sizeof���ص����ֽ����С����������������ڴ�
//�������������Ա�Ľṹ��malloc()�����ڴ涯̬���䣬���ҷ�����ڴ�Ӧ���ڽṹ�Ĵ�С
//����Ӧ���������Ԥ�ڴ�С

//�����ڴ��ͷ�
//����������ٶ�

//struct S
//{
//	int n;
//	int arr[];//��������
//};
//
//int main()
//{
//	/*int sz = sizeof(struct S);
//	printf("%d\n", sz);*/
//	//struct S s;//4
//
//	//���������ʹ��
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 40);
//	if (ps == NULL)
//	{
//		return 1;
//	}
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 80);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//		ptr = NULL;
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}

struct S
{
	int n;
	int* arr;
};

int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));//ͳһ�ŵ�����
	if (ps == NULL)
	{
		return 1;
	}
	ps->n = 100;
	ps->arr = (int*)malloc(40);
	if (ps->arr == NULL)
	{
		return 1;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//����
	int* ptr = realloc(ps->arr, 80);
	if (ptr == NULL)
	{
		return 1;
	}
	ps->arr = ptr;
	ptr = NULL;
	//�ͷ�
	free(ps->arr);
	free(ps);
	ps = NULL;

	return 0;
}
