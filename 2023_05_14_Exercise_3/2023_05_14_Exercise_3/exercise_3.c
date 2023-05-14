#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//左旋转一串字符
//void left_rotate(char arr[], int k)
//{
//	int i = 0;
//	int len = strlen(arr);
//	k %= len;
//	for (i = 0; i < k; i++)
//	{
//		//旋转第一个字符
//		char tmp = arr[0];
//		int j = 0;
//		//前移一位
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		//旋转的字符放置最后
//		arr[len - 1] = tmp;
//	}
//}

//void reverse(char* left, char* right)
//{
//	assert(left && right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//	
//}
//
//void left_rotate(arr, k)
//{
//	int len = strlen(arr);
//	k %= len;
//	reverse(arr, arr + k - 1);//左
//	reverse(arr + k, arr + len - 1);//右
//	reverse(arr, arr + len - 1);//整
//
//}
//
//int main()
//{
//	char arr[] = "abcdef";//cdefab
//	int k = 0;
//	scanf("%d", &k);//2
//	left_rotate(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}

//杨氏矩阵
	//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的
	//请编写程序在这样的矩阵中查找某个数字是否存在
	//要求：时间复杂度小于O(N);
	//数组里有N个元素，最坏的情况是N次
//1 2 3
//4 5 6
//7 8 9

//struct Point
//{
//	int x;
//	int y;
//};
//
//struct Point find_num(int arr[3][3], int r, int c, int k)
//{
//	int x = 0;
//	int y = c - 1;
//	struct Point p = { -1,-1 };
//	while(x<=r-1 && y>=0)
//	{
//		if (k < arr[x][y])
//		{
//			y--;
//		}
//		else if (k > arr[x][y])
//		{
//			x++;
//		}
//		else
//		{
//			p.x = x;
//			p.y = y;
//			return p;
//		}
//	}
//	return p;
//}

//struct Point find_num(int arr[3][3], int r, int c, int k)
//{
//	int x = 0;
//	int y = c - 1;
//	struct Point p = { -1,-1 };
//	while(x<=r-1 && y>=0)
//	{
//		if (k < arr[x][y])
//		{
//			y--;
//		}
//		else if (k > arr[x][y])
//		{
//			x++;
//		}
//		else
//		{
//			p.x = x;
//			p.y = y;
//			return p;
//		}
//	}
//	return p;
//}


//返回型参数
int find_num(int arr[3][3], int* px, int* py, int k)
{
	int x = 0;
	int y = *py - 1;
	while(x <= *px-1 && y >= 0)
	{
		if (k < arr[x][y])
		{
			y--;
		}
		else if (k > arr[x][y])
		{
			x++;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	*px = -1;
	*py = -1;
	return 0;
}

int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int k = 0;
	scanf("%d", &k);
	int a = 3;//行
	int b = 3;//列
	//struct Point ret = find_num(arr, 3, 3, k);
	int ret = find_num(arr, &a, &b, k);
	if (ret == 1)
		printf("%d %d\n", a, b);
	else
		printf("找不到\n");
	return 0;
}
