#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
#include<assert.h>

//�ļ�
//��д˳��

//int main()
//{
//	FILE* pf = fopen("text.text", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	////д�ַ�
//	////fputc
//	//char i = 0;
//	//for (i = 'a'; i <= 'z'; i++)
//	//{
//	//	fputc(i , pf);
//	//	fputc(' ', pf);
//	//}
//	
//	//���ַ�
//	/*int ch = fgetc(pf);
//	printf("%c\n", ch);*/
//	char ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c", ch);
//	}
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//д��һ������
//int main()
//{
//	//FILE* pf = fopen("text.text", "w");
//	//if (pf == NULL)
//	//{
//	//	printf("%s\n", strerror(errno));
//	//	return 1;
//	//}
//	////дһ������
//	////д�Ḳ��ԭ����
//	//fputs("hello bit", pf);
//	//printf("д��ɹ�\n");
//	////�ر��ļ�
//	//fclose(pf);
//	//pf = NULL;
//
//	//��һ������
//	FILE* pf = fopen("text.text", "r");
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("fopen");
//		return 1;
//	}
//	//��
//	char arr[20];
//	fgets(arr, 6, pf);//����'\0'
//	printf("%s\n", arr);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

int main()
{

	return 0;
}