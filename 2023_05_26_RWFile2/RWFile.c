#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<string.h>
#include<errno.h>
#include<stdio.h>

//scanf��Ա�׼����ĸ�ʽ���������
//printf��Ա�׼����ĸ�ʽ��������

//fscanf��������������ĸ�ʽ���������
//fprintf�������������ĸ�ʽ��������

//sscanf��һ���ַ����У�ת����һ����ʽ�������� 
//sprintf��һ����ʽ��������ת��Ϊ�ַ���

//���л�
//�����л�

struct S
{
	char arr[10];
	int age;
	float score;
};

int main()
{
	struct S s = { "zhangsan", 20, 55.5f };
	struct S tmp = { 0 };
	char buf[100] = { 0 };
	//��s�еĸ�ʽ�����ݣ�ת�����ַ������ŵ�buf��
	sprintf(buf, "%s %d %f", s.arr, s.age, s.score);
	//"zhangsan 20 55.500000"
	printf("�ַ�����ʽ��%s\n", buf);

	//���ַ���buf�л�ȡһ����ʽ�������ݵ�tmp��
	sscanf(buf, "%s %d %f", tmp.arr, &(tmp.age), &(tmp.score));
	printf("��ʽ����ʽ��%s %d %f\n", tmp.arr, tmp.age, tmp.score);
	return 0;
}

