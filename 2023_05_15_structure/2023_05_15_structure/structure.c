#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//���Ӷ���
//�����Զ������ͱ���
//�ṹ��
//����
//ö��

//�ṹ��
//�ṹ - һЩֵ�ļ��� - ��Ա���� - ÿ����Ա�����ǲ�ͬ���͵ı���
//����
//struct tag
//{
//	member_list;
//}variable_list;

//struct Stu
//{
//	char name[20];
//	int age;
//};

//struct Stu
//{
//	char name[20];
//	int age;
//}s1 = { "Saxon", 25 }, s2;//struct Stu���͵ı��� - ȫ�ֱ���
//
//int main()
//{
//	//struct Stu s1 = { "Saxon", 25 };
//	printf("%s %d\n", s1.name, s1.age);
//	return 0;
//}

//�����ṹ������
//ֻ����һ��
//struct
//{
//	char name[20];
//	int age;
//}s1;

//���ݽṹ
//�������ڴ��еĴ洢�ṹ

//����
// ˳���
// ����

//����
// ������
//

//struct Node
//{
//	int data;
//	struct Node next;
//};
//
//int main()
//{
//	sizeof(struct Node);
//	return 0;
//}

//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}*linklist;
//
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//typedef struct Node* linklist;

struct score
{
	int n;
	char ch;
};

struct Stu
{
	char name[20];
	int age;
	struct score s;
};


int main()
{
	struct Stu s1 = { "Zaxon", 25, {100, 'q'} };
	printf("%s %d %d %c\n", s1.name, s1.age, s1.s.n, s1.s.ch);
	return 0;
}
