#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//���� - ������
//����ͬһ��ռ�
//

//union Un
//{
//	int a;
//	char c;
//};

//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.a));
//	printf("%p\n", &(u.c));
//	u.a = 1;
//	u.c = 2;
//	printf("%d\n", u.a);
//	return 0;
//}

//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}

//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}

//int main()
//{
//	int a = 1;
//	//01 00 00 00 -- С��
//	//00 00 00 01 -- ���
//	int ret = check_sys();
//	if (ret == 1)
//		printf("С��\n");
//	else
//		printf("���\n");
//	return 0;
//}

//���ϴ�С�ļ���
//ע�����

//union Un
//{
//	short arr[7];//14
//	int i;//4
//};
//
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//	return 0;
//}
