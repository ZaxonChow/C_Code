#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a[5][5];//int(*)[5]
//	int(*p)[4];//
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//*(*(p+4)+2)  -  低地址-高地址  -  -4
//	//11111111 11111111 11111111 11111100 - FFFFFFFC
//	//%p直接打印内存中的值（内存以补码形式保存），不涉及补码运算
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);//&aa - 整个数组，+1跳过整个数组
//	int* ptr2 = (int*)(*(aa + 1));//aa - 数组第一行，+1 - 数组第二行
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}

//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;//char* *pa - pa是指针，该指针是char*类型
//	pa++;//跳过一个char*
//	printf("%s\n", *pa);//通过地址打印
//	return 0;
//}

int  main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };//指向{"FIRST", "POINT", "NEW", "ENTER"}
	char*** cpp = cp;//
	printf("%s\n", **++cpp);//POINT cpp+1了
	printf("%s\n", *-- * ++cpp + 3);//ER - cpp再+1，cp-1，cp指向{"FIRST", "POINT", "ENTER", "ENTER"}
	printf("%s\n", *cpp[-2] + 3);//ST - * *(cpp-2)+3,cpp-2（值未修改）,指向FIRST，
	printf("%s\n", cpp[-1][-1] + 1);//EW - *(*(cpp-1)-1)+1,cpp-1（值未修改），cp[1]，c+2-1=c+1，指向NEW,
	return 0;
}