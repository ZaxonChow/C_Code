#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int is_left_rotate(char arr1[], char arr2[])
{
	int len = strlen(arr1);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		//���ж�һ���Ƿ���ͬ
		if (strcmp(arr1, arr2) == 0)
			return 1;
		char tmp = arr1[0];
		int j = 0;
		for (j = 0; j < len - 1; j++)
		{
			arr1[j] = arr1[j + 1];
		}
		arr1[len - 1] = tmp;
	}
	return 0;
}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_rotate(arr1, arr2);
//	if (ret == 1)
//		printf("ok\n");
//	else
//		printf("no\n");
//	return 0;
//}

int is_left_move(char arr1[], char arr2[])
{
	int len1 = strlen(arr2);
	int len2 = strlen(arr1);
	if (len1 != len2)
	{
		return 0;
	}
	//׷��һ�����鱾��ʹ����������п�����
	strncat(arr1, arr1, len1);
	char* ret = strstr(arr1, arr2);
	if (ret == NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("ok\n");
//	else
//		printf("no\n");
//	return 0;
//}

//int main()
//{
//	//����ת��
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	//����
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	//���
//	//������
//	for (i = 0; i < m; i++)
//	{
//		//������
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10][10] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	int flag = 1;//�������Ǿ���
//	//����
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	//�ж�
//	for (i = 0; i < n; i++)
//	{
//		/*if (arr[0][0] == 0)
//		{
//			printf("no\n");
//		}*/
//		for (j = 0; j < i; j++)
//		{
//			if (arr[i][j] != 0)
//			{
//				flag = 0;//���������Ǿ���
//				goto end;
//			}
//		}
//	}
//end:
//	if (flag == 0)
//		printf("no\n");
//	else
//		printf("yes\n");
//	return 0;
//}

int main()
{
	//�������е��ж�
	//�����Ǵ�С������ߴӴ�С����
	int n = 0;
	int arr[50] = { 0 };
	scanf("%d", &n);
	int flag1 = 0;//��ʾ����
	int flag2 = 0;//��ʾ����
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if (i > 0)
		{
			if (arr[i] > arr[i - 1])
			{
				flag1 = 1;
			}
			else if(arr[i] < arr[i - 1])
			{
				flag2 = 1;
			}
			else
			{
				;
			}
				
		}
	}
	if (flag1 + flag2 <= 1)
		printf("sorted\n");
	else
		printf("unsorted");
	return 0;
}
