#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	//�ռ��С�޷��ı�
//	int a = 10;
//	int arr[10];
//
//	return 0;
//}

//��̬�ڴ����
//malloc
// ����һ��size�ֽڵ��ڴ棬����һ��ָ����ʼλ�õ�ָ��
// ʧ�ܷ��ؿ�ָ��
//free
// �ͷ��ڴ�ռ�
//ralloc
//realloc


//C99��׼ - �䳤����
//int n = 0;
//scanf("%d", &n);
//int arr[n];
//VS��֧��

//int main()
//{
//	int arr[10] = { 0 };//40�ֽ�
//	
//	//��̬�ڴ濪��
//	//����
//	int* p = (int*)malloc(40);//40�ֽ�
//	if (p == NULL)
//	{
//		//����ʧ��
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//���ٳɹ���ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//û��free
//	//����ָ�ڴ治����
//	//�������˳�ʱ��ϵͳ�Զ������ڴ�ռ�
//	// 
//	//�ڴ�й©
//	//ʹ�����ڴ�ռ䲻�黹
//	return 0;//��������
//}

//int main()
//{
//	int arr[10] = { 0 };//40�ֽ�
//
//	//��̬�ڴ濪��
//	//����
//	int* p = (int*)malloc(40);//40�ֽ�
//	if (p == NULL)
//	{
//		//����ʧ��
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//���ٳɹ���ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	
//	free(p);//�ײ���Ұָ��
//	p = NULL;//Ԥ��Ұָ��
//
//	return 0;//��������
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//...
//	free(p);
//	p = NULL;
//	return 0;
//}

int main()
{
	//malloc
	int* p = NULL;
	free(p);
	return 0;
}
