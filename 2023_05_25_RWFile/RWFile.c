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


//fscanf
//struct S
//{
//	char arr[10];
//	int age;
//	float score;
//};
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//pf�ĳ�stdout���������Ļ
//	fprintf(pf,"%s %d %f", s.arr,s.age,s.score);
//	fscanf(pf, "%s %d %f", s.arr, &(s.age), &(s.score));
//	printf("%s %d %f\n", s.arr, s.age, s.score);
//
//	fclose(pf);
//
//	return 0;
//}

//��
//FILE*
// 
//printf
//scanf
//
//�κ�һ��c����ֻҪ���У�Ĭ�ϴ�3����
//FILE* stdin  - ��׼�����������̣�
//FILE* stdout - ��׼���������Ļ��
//FILE* stderr - ��׼����������Ļ��
//

//�������������
//fread
//fwrite
//ֻ����ļ�

struct S
{
	char arr[10];
	int age;
	float score;
};

int main()
{
	struct S s = { 0 };
	//�����Ʒ�ʽ���ļ�
	FILE* pf = fopen("text.txt", "rb");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	//��
	fread(&s, sizeof(struct S), 1, pf);
	//��һ����СΪsz������
	printf("%s %d %f\n", s.arr, s.age, s.score);
	fclose(pf);
	pf = NULL;
	return 0;
}

//int main()
//{
//	struct S s = { "zhangsan", 25, 50.5f };
//	//�����Ʒ�ʽд�ļ�
//	FILE* pf = fopen("text.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д
//	fwrite(&s, sizeof(struct S), 1, pf);
//	//дһ����СΪsz������
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}