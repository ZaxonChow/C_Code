#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//����
//���ֳ������Ĵ���
//�Ը��롢�����ȷ�ʽ�Դ�����ж�λ
//ȷ����λ������ԭ��
//�����������ķ���
//�Գ�����������������²���

//�ṹ��һЩֵ�ļ��� - ��Ա����
//�ṹ��ÿ����Ա�����ǲ�ͬ���͵ı���
//struct tag
//{
//	member-list
//}variable-list;

//struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1, s2, s3;//ȫ�ֽṹ�����
//
//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;//����
//
//int main()
//{
//	struct Stu s1 = { "Saxon", 25, "17602912937", "��" };//�ֲ��ṹ�����
//	Stu s2 = {"Da", 26, "11012011911", "Ů"};
//	return 0;
//}

//struct S
//{
//	int a;
//	char b;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char *pc;
//};
//
//int main()
//{
//	char arr[] = "hello bit";
//	struct T t = { "hehe", { 100, 'w', "hello world", 3.14 }, arr };
//	printf("%s\n", t.ch);//hehe
//	printf("%s\n", t.s.arr);//hello world
//	printf("%lf\n", t.s.d);//3.14
//	printf("%s\n", t.pc);//hello bit
//	return 0;
//}

//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;//����
//
//void Print1(Stu tmp)
//{
//	printf("name:%s\n", tmp.name);
//	printf("age:%d\n", tmp.age);
//	printf("tele:%s\n", tmp.tele);
//	printf("sex:%s\n", tmp.sex);
//}
//
//void Print2(Stu* ps)
//{
//	printf("name:%s\n", ps->name);
//	printf("age:%d\n", ps->age);
//	printf("tele:%s\n", ps->tele);
//	printf("sex:%s\n", ps->sex);
//}
//
//int main()
//{
//	Stu s = { "����", 40, "155998855", "��" };
//	//�Ƚ��������
//	//print2����
//	//��ʡʱ��ռ�
//	Print1(s);
//	Print2(&s);
//	return 0;
//}


//ջ�� - �ֲ������������βΡ���������Ҳ���ٿռ�
//���� - ��̬�ڴ���䡢malloc��free��realloc��calloc
//��̬�� - ȫ�ֱ�������̬����
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	int a = 10;
	int b = 20;
	int ret = 0;
	ret = Add(a, b);
	return 0;
}