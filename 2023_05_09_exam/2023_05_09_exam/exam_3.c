#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a[5][5];//int(*)[5]
//	int(*p)[4];//
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//*(*(p+4)+2)  -  �͵�ַ-�ߵ�ַ  -  -4
//	//11111111 11111111 11111111 11111100 - FFFFFFFC
//	//%pֱ�Ӵ�ӡ�ڴ��е�ֵ���ڴ��Բ�����ʽ���棩�����漰��������
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);//&aa - �������飬+1������������
//	int* ptr2 = (int*)(*(aa + 1));//aa - �����һ�У�+1 - ����ڶ���
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}

//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;//char* *pa - pa��ָ�룬��ָ����char*����
//	pa++;//����һ��char*
//	printf("%s\n", *pa);//ͨ����ַ��ӡ
//	return 0;
//}

int  main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };//ָ��{"FIRST", "POINT", "NEW", "ENTER"}
	char*** cpp = cp;//
	printf("%s\n", **++cpp);//POINT cpp+1��
	printf("%s\n", *-- * ++cpp + 3);//ER - cpp��+1��cp-1��cpָ��{"FIRST", "POINT", "ENTER", "ENTER"}
	printf("%s\n", *cpp[-2] + 3);//ST - * *(cpp-2)+3,cpp-2��ֵδ�޸ģ�,ָ��FIRST��
	printf("%s\n", cpp[-1][-1] + 1);//EW - *(*(cpp-1)-1)+1,cpp-1��ֵδ�޸ģ���cp[1]��c+2-1=c+1��ָ��NEW,
	return 0;
}