#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

//calloc
//void* calloc(size_t num, size_t size);
//num Ԫ�ظ���
//size ÿ��Ԫ�ش�С
//���ݳ�ʼ��Ϊ0����������ʼ��ַ

//����Ҫ��Ҫ��ʼ����ѡ��malloc��calloc

//int main()
//{
//	//����ʮ�����οռ�
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//��ӡ
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//�ͷ�
//	free(p);
//	return 0;
//}

//realloc
//void* realloc(void* ptr, size_t size);
//ptr Ҫ�޸�������ʼ��ַ
//size �������С
//�����в��ҷ��ϴ�С�Ŀռ䣬�����ڴ�ռ�����
//�ͷ�ԭ���ڴ����ݣ����ص�ַ
//����ֱ�Ӱѵ�ֱַ�ӷ��ظ�ԭ����ָ��

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//ʹ��
//	//1 2 3 4 5 6 7 8 9 10
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	//����
//	int* ptr = (int*)realloc(p, 80);
//	if (ptr != NULL)
//	{
//		//���ݳɹ�
//		p = ptr;
//	}
//	for (i = 0; i < 10; i++)
//		printf("%d ", *(p + i));
//	free(p);
//	return 0;
//}

//int main()
//{
//	int* p = (int*)realloc(NULL, 40);//�ȼ���malloc
//	return 0;
//}


