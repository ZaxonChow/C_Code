#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>

int main()
{
	int i = 0;
	char password[20] = {0};
	for (i = 0; i < 3; i++)
	{
		printf("���������룺>");
		scanf("%s", password);
		//if (password == "123456")//== �޷��Ƚ��ַ�������strcmp
		if (strcmp(password, "123456") == 0)
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
			printf("�������\n");
	}
	if (3 == i)
	{
		printf("�����������������˳�����\n");
	}
	return 0;
}
//int main()
//{
//	char arr1[] = "Welcome to bit!!!!!";
//	char arr2[] = "###################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	int right = strlen(arr1) - 1;
//	while(left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(500);
//		system("cls");//�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 11;
//	int left = 0;
//	int right = sz - 1;
//	while(left<=right)
//	{
//		int mid = (left + right) / 2;
//		if(arr[mid] > k )
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���\n");
//	return 0;
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	//��arr����������Ѱ��7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//		if (i == sz)
//			printf("�Ҳ���");
//	}
//	return 0;
//	////int i = 0;
//	//int n = 0;
//	//int ret = 1;
//	//int sum = 0;
//	//for (n = 1; n <= 3; n++)
//	//{
//	//	ret *= n;
//	//	sum += ret;
//	//}
//	//printf("sum = %d\n", sum);
//	//return 0;
//}
