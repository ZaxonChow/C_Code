#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

//��������
//1.��NULL�����ò���

//int main()
//{
//	int* p = (int*)malloc(40);
//
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	*p = 20;
//	free(p);
//	p = NULL;
//	return 0;
//}

//2.�Զ�̬���ٿռ��Խ�����
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//��ʽ
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		//Խ��
//		p[i] = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//3.�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//...
//	free(p);
//	p = NULL;
//	return 0;
//}

//4.ʹ��free�ͷŶ�̬���ٵ�һ����
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p = i;//p[i],*(p+i)
//		p++;
//	}
//	//�ͷ�
//	free(p);//����ָ��ʼ����ʼλ��
//	p = NULL;
//	return 0;
//}

//5.��ͬһ��ռ�Ķ���ͷ�
//int main()
//{
//	int* p = (int*)malloc(40);
//	//...
//	free(p);
//	p = NULL;
//	//...
//	free(p);
//
//	return 0;
//}

//6.��̬�����ڴ������ͷ�(�ڴ�й¶)
//void test()
//{
//	int* p = (int*)malloc(100);
//	//...
//	int flag = 0;
//	scanf("%d", &flag);
//	if (flag == 5)
//		return;
//	//
//	free(p);
//	p = NULL;
// }
//
//int main()
//{
//	test();
//	return 0;
//}

//int* test()
//{
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//	{
//		return p;
//	}
//	//...
//	return p;
//}
//
//int main()
//{
//	int* ret = test();
//	//�����ͷ�
//
//	return 0;
//}

//������
//1.test()���
//void GetMemory(char* p)
//void GetMemory(char** p)
//char* GetMemory()
//{
//	char* p = (char*)malloc(100);
//	return p;
//}
//
//void test()
//{
//	char* str = NULL;
//	//GetMemory(str);
//	//GetMemory(&str);
//	str = GetMemory();
//	//��̬���ٵ�100�ֽڵĵ�ַ
//	strcpy(str, "hello world");//str�ǿ�ָ��
//	printf(str);
//	//�ͷ�
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	printf("hello world\n");
//	char* p = "hello world\n";
//	printf(p);
//	printf("%s", "hello world\n");
//	return 0;
//}

//2.
int* f1(void)
{
	int x = 10;
	return (&x);//Ұָ�룬�ֲ���������
}

int* f3(void)
{
	int* ptr;//δ��ʼ����ptr�����ֵ
	*ptr = 10;
	return ptr;//Ұָ��
}