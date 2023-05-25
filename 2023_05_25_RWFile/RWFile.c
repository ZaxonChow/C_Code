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
//	//pf改成stdout，输出到屏幕
//	fprintf(pf,"%s %d %f", s.arr,s.age,s.score);
//	fscanf(pf, "%s %d %f", s.arr, &(s.age), &(s.score));
//	printf("%s %d %f\n", s.arr, s.age, s.score);
//
//	fclose(pf);
//
//	return 0;
//}

//流
//FILE*
// 
//printf
//scanf
//
//任何一个c程序，只要运行，默认打开3个流
//FILE* stdin  - 标准输入流（键盘）
//FILE* stdout - 标准输出流（屏幕）
//FILE* stderr - 标准错误流（屏幕）
//

//二进制输入输出
//fread
//fwrite
//只针对文件

struct S
{
	char arr[10];
	int age;
	float score;
};

int main()
{
	struct S s = { 0 };
	//二进制方式读文件
	FILE* pf = fopen("text.txt", "rb");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	//读
	fread(&s, sizeof(struct S), 1, pf);
	//读一个大小为sz的数据
	printf("%s %d %f\n", s.arr, s.age, s.score);
	fclose(pf);
	pf = NULL;
	return 0;
}

//int main()
//{
//	struct S s = { "zhangsan", 25, 50.5f };
//	//二进制方式写文件
//	FILE* pf = fopen("text.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写
//	fwrite(&s, sizeof(struct S), 1, pf);
//	//写一个大小为sz的数据
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}