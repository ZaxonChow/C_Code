#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//ö�� - enum
//�ŵ�
//���Ӵ���ɶ���
//��#define����ı�ʶ���Ƚ�ö�������ͼ�飬�����Ͻ�
//��ֹ������Ⱦ����װ��
//���ڵ���
//һ�ο��Զ���������

enum Day
{
	//ö�ٳ���
	Monday = 1,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Sunday
};

enum Sex
{
	Male,
	Female,
	Secrete
};

int main()
{
	enum Day d = Friday;
	/*printf("%d\n", Monday);
	printf("%d\n", Tuesday);
	printf("%d\n", Wednesday);
	printf("%d\n", Male);
	printf("%d\n", sizeof(enum Day));*/
	return 0;
}
