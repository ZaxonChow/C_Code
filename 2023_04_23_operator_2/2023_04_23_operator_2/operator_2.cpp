#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	/*int a = 10;
//	char b = 'a';
//	int arr[10] = { 0 };*/
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//sizeof �ڲ����ʽ������
//	printf("%d\n", s);
//	return 0;
//}

//int main()
//{
//	int a = 11;
//	//00000000 00000000 00000000 00000000 - ����
//	//11111111 11111111 11111111 11111111 - ����
//	//11111111 11111111 11111111 11111110 - ����
//	//10000000 00000000 00000000 00000001 - ԭ��
//	//~��λȡ��
//	printf("%d\n", ~a);
//	a = a | (1 << 2);
//	printf("%d\n", a);
//	a = a & ~(1 << 2);
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%d\n", a++);
//	printf("%d\n", a);
//	printf("%d\n", ++a);	
//	return 0;
//}

//int main()
//{
//	int a = (int)3.54;
//	printf("%d\n", a);
//	return 0;
//}

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//���������С4*10
//	printf("%d\n", sizeof(ch));//1*10
//	test1(arr);//���鴫��Ԫ�ص�ַ
//	test2(ch);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a && b;
//	printf("%d\n", c);
//	printf("%d\n", c = 0 || 1);
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;//&&��һ��Ϊ0�ͽ�����������ִ���ˣ�ֻ��a++
//	printf(" a=%d\n b=%d\n c=%d\n d=%d\n i=%d\n", a, b, c, d, i);
//	printf("\n");
//	i = a++ || ++b || d++;//||��һ��Ϊ1�ͽ��������治ִ���ˣ�ֻ��a++
//	printf(" a=%d\n b=%d\n c=%d\n d=%d\n i=%d\n", a, b, c, d, i);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	//if (a > 5)
//	//	b = 3;
//	//else
//	//	b = -3;
//	b = a > 5 ? 3 : -3;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	//���ű��ʽ
//	//���Ÿ������������ң����μ��㣬���Ϊ���һ�����ʽ
//	//[]�±����ò�������һ��������+һ������ֵ
//	int a[10] = { 0 };
//	a[4] = 10;
//	printf("%d\n", a[4]);
//	//���ú���ʱ()���Ǻ������ò�����
//	return 0;
//}


//ѧ��
//����һ���ṹ������ - struct Stu
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	int a = 10;
//	//ʹ��struct Stu������ʹ���һ��ѧ������s1������ʼ��
//	struct Stu s1 = {"Saxon", 25, "2023042314"};
//	struct Stu* ps = &s1;
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	//printf("%s\n", (*ps).name);
//	//printf("%s\n", s1.name);
//	//printf("%d\n", s1.age);
//	//printf("%s\n", s1.id);
//	return 0;
//}

//int main()
//{
//	//��ʽ����ת��
//	char a = 3;
//	//00000000 00000000 00000000 00000011
//	//00000011 - a
//	char b = 127;
//	//00000000 00000000 00000000 01111111
//	//01111111 - b
//	char c = a + b;
//	//00000000 00000000 00000000 10000010
//	//10000010 - c
//	//������λ��䣬�����������ٽ�������
//	//11111111 11111111 11111111 10000010 - ����
//	//11111111 11111111 11111111 10000001 - ����
//	//10000000 00000000 00000000 01111110 - ԭ��
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(!c));
//}

int main()
{
	//����ת��
	//���������ȼ�
	//int a = 10;
	//int b = 20;
	//int c = b + a * 3;
	//a*b + c*d + e*f
	//������ʽ
	//c + --c
	int c = 1;
	c = c + c--;
	printf("%d\n", c);
	c = 1;
	c = c + --c;
	printf("%d\n", c);
	return 0;
}