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