#include <stdio.h>
#include<stdlib.h>

void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//假设数组已经排好序
		//一趟冒泡排序的过程
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
//qsort - 可以排序任意类型的数据
//
//void qsort(void* base,//要排序的数组的起始位置
//		   size_t num,//待排序的数据元素的个数
//		   size_t width,//待排序的数据元素的大小（字节）
//		   int(__cdecl* compare)(const void* elem1, const void* elem2)//函数指针 - 比较函数 - 
//		   );

//int main()
//{
//	int a = 10;
//	//char* pa = &a;
//	void* pv = &a;//void* 无具体类型的指针，可以接受任意类型的地址
//	//不能解引用，也不能+-整数
//	//
//	return 0;
//}

//比较两个整形元素
//e1、e2指向两个整数
int cmp_int(const void* e1, const void* e2)
{
	/*if (*(int*)e1 > *(int*)e2)
		return 1;
	else if (*(int*)e1 == *(int*)e2)
		return 0;
	else
		return -1;*/
	//return (*(int*)e1 - *(int*)e2);//升序
	return (*(int*)e2 - *(int*)e1);//降序
}

int main()
{
	//int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	//把数组排成升序
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

