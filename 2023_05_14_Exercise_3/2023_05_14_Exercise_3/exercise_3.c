#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//����תһ���ַ�
//void left_rotate(char arr[], int k)
//{
//	int i = 0;
//	int len = strlen(arr);
//	k %= len;
//	for (i = 0; i < k; i++)
//	{
//		//��ת��һ���ַ�
//		char tmp = arr[0];
//		int j = 0;
//		//ǰ��һλ
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		//��ת���ַ��������
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
//	reverse(arr, arr + k - 1);//��
//	reverse(arr + k, arr + len - 1);//��
//	reverse(arr, arr + len - 1);//��
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

//���Ͼ���
	//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ�����
	//���д�����������ľ����в���ĳ�������Ƿ����
	//Ҫ��ʱ�临�Ӷ�С��O(N);
	//��������N��Ԫ�أ���������N��
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


//�����Ͳ���
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
	int a = 3;//��
	int b = 3;//��
	//struct Point ret = find_num(arr, 3, 3, k);
	int ret = find_num(arr, &a, &b, k);
	if (ret == 1)
		printf("%d %d\n", a, b);
	else
		printf("�Ҳ���\n");
	return 0;
}
