#include <stdio.h>
#include<stdlib.h>
#include<string.h>

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//���������Ѿ��ź���
//		//һ��ð������Ĺ���
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}

//
//qsort - ���������������͵�����
//
//void qsort(void* base,//Ҫ������������ʼλ�� - ������������ָ��
//		   size_t num,//�����������Ԫ�صĸ���
//		   size_t width,//�����������Ԫ�صĴ�С���ֽڣ�
//		   int(__cdecl* compare)(const void* elem1, const void* elem2)//����ָ�� - �ȽϺ��� - 
//		   );
//

//int main()
//{
//	int a = 10;
//	//char* pa = &a;
//	void* pv = &a;//void* �޾������͵�ָ�룬���Խ����������͵ĵ�ַ
//	//���ܽ����ã�Ҳ����+-����
//	//
//	return 0;
//}

//�Ƚ���������Ԫ��
//e1��e2ָ����������
int cmp_int(const void* e1, const void* e2)
{
	/*if (*(int*)e1 > *(int*)e2)
		return 1;
	else if (*(int*)e1 == *(int*)e2)
		return 0;
	else
		return -1;*/
	//return (*(int*)e1 - *(int*)e2);//����
	return (*(int*)e2 - *(int*)e1);//����
}

//
//void test1()
//{
//	//int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	//�������ų�����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//bubble_sort(arr, sz);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

struct Stu
{
	char name[20];
	int age;
};

int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

//void test2()
//{
//	//����ʹ��qsort����ṹ������
//	struct Stu s[] = { {"zhangsan",15},{"lisi",30},{"wangwu",25} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}

void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	//����
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//�����������ź����
		//һ��ð������Ĺ���
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//���Ƚϵ����������ĵ�ַ
			//ǿ��ת����char*��һ��һ���ֽڣ���width * j�����ĸ�Ԫ��
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//����
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);//һ��Ԫ�صĴ�С - �����ֽ�
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

void test3()
{
	//int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	//�������ų�����
	int sz = sizeof(arr) / sizeof(arr[0]);
	//bubble_sort(arr, sz);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void test4()
{
	//����ʹ��qsort����ṹ������
	struct Stu s[] = { {"zhangsan",15},{"lisi",30},{"wangwu",25} };
	int sz = sizeof(s) / sizeof(s[0]);
	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}

int main()
{
	//test3();
	test4();
	return 0;
}