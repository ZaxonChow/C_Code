#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include <assert.h>

//int main()
//{
//	//strlen
//	//���ַ������� - ������\0
//	//char arr[] = "abcdef";//abcdef\0
//	//char arr1[] = { 'b','i','t' };//t��֪��������\0
//	////int len1 = strlen(arr1);//û������
//	//int len2 = strlen(arr);
//	//printf("%d\n", len2);
//
//	if (strlen("abc") - strlen("abcdef") > 0)//strlen�����޷�����
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}

//ģ��ʵ��

//����������
//ָ��-ָ��
//�ݹ�ķ���
//size_t my_strlen(const char* str)
//{
//	size_t count = 0;
//	assert(str);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	size_t n = my_strlen(arr);
//	printf("%u\n", n);
//	return 0;
//}

char * my_strcpy(char* dest, const char* src)
{
	assert(dest && src);
	/*assert(src);
	assert(dest);*/
	char* ret = dest;
	while (*dest++ = *src++)
		;
	//while (*src != '\0')
	//{
	//	*dest++ = *src++;
	//	/*dest++;
	//	src++;*/
	//}
	//*dest = *src;
	return ret;
}


char* my_strcat(char* dest, const char* src)
{
	assert(dest && src);
	char* ret = dest;
	//�ҵ�Ŀ��ռ��ĩβ\0
	while (*dest != '\0')
	{ 
		dest++;
	}
	//׷������
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	//char arr1[] = "abcdef";
	//char arr2[20] = { 0 };
 	////"zhangsan"
	////strcpy - ����\0��֮ǰ��������
	////Դ���ݰ���\0
	////Ŀ�Ŀռ��㹻�ҿ��޸�
	//strcpy(arr2, arr1);
	//my_strcpy(arr2, arr1);
	//printf("%s\n", arr2);


	//�ַ���׷��
	//strcat
	//Ŀ��ռ��㹻�󣬿��޸�
	char arr1[20] = "hello ";
	char arr2[] = "world";
	//strcat(arr1, "world");
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}