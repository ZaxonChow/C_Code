#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void Print(char*str)
//{
//
//}
//
//int main()
//{
//	int a;
//	int *pa;
//	void(*p)(char*) = Print;
//	return 0;
//}


//void(*)() - ����ָ������
//(* ( void(*)() ) 0 ) ();
//��0ǿ������ת���ɣ�void(*)() ����ָ������ - 0����һ�������ĵ�ַ
//����0��ַ���ĸú���


void (*signal(int, void(*)(int)))(int);
//void (*   )(int)
//signal��һ����������
//signal�����Ĳ�����2����
//��һ����int���ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������������void

//signal�����ķ�������Ҳ��һ������ָ�룺
//�ú���ָ��ָ��ĺ����Ĳ�����int������ֵ��void

//��
typedef void(* pfun_t)(int);

pfun_t signal(int, pfun_t);

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int(*pa)(int, int) = Add;
//	printf("%d\n", (pa)(2, 3));//
//	printf("%d\n", Add(2, 3));
//
//	printf("%d\n", (*pa)(2, 3));//����ָ�� ����ʱ*���岻��
//	
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	//ָ������
//	int *arr[5];
//	//��Ҫһ�����飬���������Դ��4�������ĵ�ַ - ����ָ�������
//	int (*pa)(int, int) = Add;
//	//����ָ������
//	int(*parr[4])(int, int) = { Add, Sub, Mul, Div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](4, 2));
//	}
//	return 0;
//}

char* my_strcpy(char* dest, const char* src)
{
	return dest;
}
//дһ������ָ��pf���ܹ�ָ��my_strcpy
//дһ������ָ������pfArr,�ܹ����4��my_strcpy�����ĵ�ַ

int main()
{
	char* (*pf)(char*, const char*) = my_strcpy;
	char* (*pfArr[4])(char*, const char*) = { my_strcpy };
	return 0;
}