#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//���������ִ�г���
//debug - ���԰汾��ִ���ļ� - �ļ��а���������Ϣ�������Ż� - �ļ��ϴ�
//release - �����汾��ִ���ļ� - �����������Ż� - �ļ���С�������ٶȿ�



//���� - debug
//���Կ�ݼ�
//F5 - �������� - ��F9���ʹ�� - ����ִ���߼�����һ���ϵ�

//F9 - �л��ϵ�

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10-i);
//	}
//	return 0;
//}

//F10 - �����
//F11 - �����

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	printf("hehe\n");
//	int a = 20;
//	int b = 10;
//	int c = Add(a, b);
//	return 0;
//}

//����ʱ
//���Ӵ��� 
//�ڴ洰�� 
//����ര��
//�Ĵ�������


//int main()
//{
//	{
//		int tmp = 0;
//		printf("tmp = %d\n", tmp);
//	}
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}

//���ö�ջ

//void test2()
//{
//	printf("hehe\n");
//}
//
//void test1()
//{
//	test2();
//}
//
//void test()
//{
//	test1();
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//���������±����������ַ�ɵ͵��߱仯
//ջ����Ĭ��ʹ�ã�
//��ʹ�øߵ�ַ���Ŀռ�
//��ʹ�õ͵�ַ���Ŀռ�
//

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%p\n", arr);
//	printf("%p\n", &i);
//	//release�Ż����Ż������ռ䣬ʹ�ñ�����ѭ��ʧЧ
//	system("pause");
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}

//���д���ã����ڵ��ԣ��Ĵ���
//��������
//bug��
//Ч�ʸ�
//�ɶ��Ը�
//��ά���Ը�
//ע������
//�ĵ���ȫ

//����
//ʹ��assert - ����
//����ʹ��const - 
//�������ñ�����
//��ӱ�Ҫ��ע��
//�����̵�����

#include<string.h>

//void my_strcpy(char *dest, char *src)
//{
//	//while (*src != '\0')
//	//{
//	//	/**dest = *src;
//	//	dest++;
//	//	src++;*/
//	//	*dest++ = *src++;
//	//}
//	//*dest = *src;
//	if (dest != NULL && src != NULL)
//	{//�����ָ��
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//	
//}

#include<assert.h>
//scrԴ���ı䣬��const����
//char *my_strcpy(char *dest, const char *src)
//{
//	char *ret = dest;//����Ŀ�ĵ������׵�ַ
//	assert(dest != NULL);//����
//	assert(src != NULL);
//	//��srcָ���ַ���������destָ��Ŀռ䣬������\0��
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;//�����׵�ַ
//}
//
//int main()
//{
//	//strcmp
//	//�ַ�������
//	char arr1[] = "############";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//int main()
//{
//	int num = 10;
//	const int *p = &num;
//	//const����ָ�����
//	//*��� - const int *p - ���ε���*p������ͨ��p�ı�*p��ֵ
//	//*�ұ� - int * const p - ����ָ�����p����p���ܱ��ı�
//
//	printf("%d\n", num);
//	return 0;
//}

//int my_strlen(const char *str)
//{
//	int count = 0;
//	assert(str != NULL);//��ָ֤�����Ч��
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//��������
//������� - �﷨����
//���Ӵ��� - ��ʶ���������ڻ�ƴд����
//���д��� - �������ԣ��𲽶�λ����

//int Add(int x, int y)
//{
//	return x + y;
//}

int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}