#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
			return 0;//���
		str1++;
		str2++;
	}
	return *str1 - *str2;
}

//int main()
//{
//	//strcmp
//	//�Ƚ������ַ��������Ƿ����
//	//�Ƚ�ASCIIֵ��С
//	char arr1[20] = "zhangsan";
//	char arr2[] = "zhangsanfeng";
//	int ret = my_strcmp(arr1, arr2);
//	if ( ret == 0)
//	{
//		printf("==\n");
//	}
//	else if(ret < 0)
//	{
//		printf("<\n");
//	}
//	else
//	{
//		printf(">\n");
//	}
//	return 0;
//}

//strcpy
//strcat
//strcmp
//���Ȳ������Ƶĺ���

//int main()
//{
//	char arr[4] = { 0 };
//	strcpy(arr, "hello");
//	printf("%s\n", arr);
//}

//���������Ƶ��ַ�������
//strncpy
//strncat
//strncmp

//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "bit";
//	strncpy(arr1, arr2, 5);
//	printf("%s\n", arr1);
//
//	//strncat(arr1, arr2, 5);
//	//printf("%s\n", arr1);
//
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 3);
//	printf("%s\n", arr1);
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abc";
//	int ret = strncmp(arr1, arr2, 4);
//	printf("%d\n", ret);
//	if (ret == 0)
//		printf("==\n");
//	else if (ret < 0)
//		printf("<\n");
//	else
//		printf(">\n");
//	return 0;
//}

//int main()
//{
//	//strstr
//	//�����Ӵ�
//	char email[] = "zpw@bitejiuyeke.com";
//	char substr[] = "bitejiuyeke";
//	char* ret = strstr(email, substr);
//	if (ret == NULL)
//	{
//		printf("�ִ�������\n");
//	}
//	else
//	{
//		printf("%s\n",ret);
//	}
//	return 0;
//}

//KMP�㷨
//ʵ����һ���ַ����в������ַ���
//Ч�ʸߣ�ʵ���Ѷȴ�

char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	const char* s1 = str1;
	const char* s2 = str2;
	const char* p = str1;
	while (*p != '\0')
	{
		s1 = p;
		s2 = str2;
		while (*s1!='\0' && *s2!='\0' && * s1 == *s2)
		{
			//Դ����Ŀ�굽�ַ�����β��������
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			//Ŀ�굽���ַ�����β��˵������Ŀ�����
			return (char*)p;
		}
		p++;
	}
	return NULL;
}

//int main()
//{
//	//strstr
//	//�����Ӵ�
//	char email[] = "zpw@bitejiuyeke.com";
//	char substr[] = "bitejiuyeke";
//	char* ret = my_strstr(email, substr);
//	if (ret == NULL)
//	{
//		printf("�ִ�������\n");
//	}
//	else
//	{
//		printf("%s\n",ret);
//	}
//	return 0;
//}


int main()
{
	//strtok
	//�и��ַ���
	//�ҵ���ǣ�����Ϊ\0��ͬʱ�����ֶ���ʼλ��
	//��ı䱻���ݵ��ַ�
	//��һ��������ΪNULL���ҵ�str�е�һ����ǣ�strtok���������ַ����е�λ��
	//��һ������ΪNULL������ͬһ���ַ����б������λ�ÿ�ʼ��������һ�����
	//�ַ����в����ڸ���ı�ǣ�����NULLָ��
	//zhangpengwei@bitejiuyeke.com
	char email[] = "zhangpengwei@bitejiuyeke.com";
	const char* sep = "@.";
	char cp[30] = { 0 };
	strcpy(cp, email);

	char* ret = strtok(email, sep);
	printf("%s\n", ret);

	ret = strtok(NULL, sep);
	printf("%s\n", ret);

	ret = strtok(NULL, sep);
	printf("%s\n", ret);
	return 0;
}
