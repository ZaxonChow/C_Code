#include <stdio.h>
#include<stdlib.h>

void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//���������Ѿ��ź���
		//һ��ð������Ĺ���
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

//
//qsort - ���������������͵�����
//
//void qsort(void* base,//Ҫ������������ʼλ��
//		   size_t num,//�����������Ԫ�صĸ���
//		   size_t width,//�����������Ԫ�صĴ�С���ֽڣ�
//		   int(__cdecl* compare)(const void* elem1, const void* elem2)//����ָ�� - �ȽϺ��� - 
//		   );

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

int main()
{
	//int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	//�������ų�����
	int sz = sizeof(arr) / sizeof(arr[0]);
	//bubble_sort(arr, sz);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

