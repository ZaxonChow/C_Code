#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stddef.h>

//�ṹ���ڴ����
//��һ����Ա����ṹ�����ƫ����Ϊ0�ĵ�ַ��
//������Ա����Ҫ���뵽ĳ�����������������������ĵ�ַ��
//������=������Ĭ�ϵ�һ����������ó�Ա��С�Ľ�Сֵ
//VS��Ĭ��Ϊ8
//�ṹ����ܴ�СΪ����������ÿ����Ա���ж���������������
//���Ƕ���˽ṹ�壬Ƕ�׵Ľṹ����뵽�Լ�������������������
//�ṹ��������С������������������Ƕ�ף���������

//�ڴ����ԭ��
//ƽ̨
//�������е�Ӳ��ƽ̨���ܷ��������ַ�ϵ���������
//ĳЩӲ��ƽֻ̨����ĳЩ��ַ��ȡĳЩ�ض����͵����ݣ������׳�Ӳ���쳣
//����
//���ݽṹ��������ջ������������Ȼ�߽��϶���
//ԭ�����ڣ�Ϊ�˷���δ������ڴ棬��������Ҫ�������ڴ����
//������ڴ���ʽ���Ҫһ�η���

//�ṹ����ڴ����
//���������ÿռ任ȡʱ��Ĺ���

//��ռ�ÿռ�С�ĳ�Ա������һ��

//struct S1
//{
//	char c1;//1
//	int i;//4
//	char c2;//1
//};

struct S2
{
	char c1;
	char c2;
	int i;
};

struct S3
{
	double d;
	char c;
	int i;
};

struct S4
{
	char c1;
	struct S3 s3;
	double d;
};

//int main()
//{
//	/*struct S1 s1;
//	struct S2 s2;
//	printf("%d\n", sizeof(struct S1));
//	printf("%d\n", sizeof(struct S2));*/
//
//	//printf("%d\n", offsetof(struct S1, c1));
//	//printf("%d\n", offsetof(struct S1, i));
//	//printf("%d\n", offsetof(struct S1, c2));
//
//	printf("%d\n", offsetof(struct S2, c1));
//	printf("%d\n", offsetof(struct S2, c2));
//	printf("%d\n", offsetof(struct S2, i));
//	return 0;
//}

//�޸�Ĭ�϶�����
#pragma pack(4)

struct S
{
	int i;
	double d;
};
#pragma pack()

#pragma pack(1)
struct S1
{
	char c1;//1
	int i;//4
	char c2;//1
};
#pragma pack()

#pragma once
//ͷ�ļ���ʹ�ã����ܣ���ֹͷ�ļ����������

int main()
{
	printf("%d\n", sizeof(struct S));
	printf("%d\n", sizeof(struct S1));
	return 0;
}
