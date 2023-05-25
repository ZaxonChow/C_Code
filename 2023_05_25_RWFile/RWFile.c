#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
#include<assert.h>

//文件
//读写顺序

//int main()
//{
//	FILE* pf = fopen("text.text", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	////写字符
//	////fputc
//	//char i = 0;
//	//for (i = 'a'; i <= 'z'; i++)
//	//{
//	//	fputc(i , pf);
//	//	fputc(' ', pf);
//	//}
//	
//	//读字符
//	/*int ch = fgetc(pf);
//	printf("%c\n", ch);*/
//	char ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c", ch);
//	}
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//写读一行数据
//int main()
//{
//	//FILE* pf = fopen("text.text", "w");
//	//if (pf == NULL)
//	//{
//	//	printf("%s\n", strerror(errno));
//	//	return 1;
//	//}
//	////写一行数据
//	////写会覆盖原数据
//	//fputs("hello bit", pf);
//	//printf("写入成功\n");
//	////关闭文件
//	//fclose(pf);
//	//pf = NULL;
//
//	//读一行数据
//	FILE* pf = fopen("text.text", "r");
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("fopen");
//		return 1;
//	}
//	//读
//	char arr[20];
//	fgets(arr, 6, pf);//包括'\0'
//	printf("%s\n", arr);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

int main()
{

	return 0;
}