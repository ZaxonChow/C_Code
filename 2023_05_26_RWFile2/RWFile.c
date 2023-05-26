#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<string.h>
#include<errno.h>
#include<stdio.h>

//scanf针对标准输入的格式化输入语句
//printf针对标准输出的格式化输出语句

//fscanf针对所有输入流的格式化输入语句
//fprintf针对所有输出流的格式化输出语句

//sscanf从一个字符串中，转换出一个格式化的数据 
//sprintf把一个格式化的数据转换为字符串

//序列化
//反序列化

//struct S
//{
//	char arr[10];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct S s = { "zhangsan", 20, 55.5f };
//	struct S tmp = { 0 };
//	char buf[100] = { 0 };
//	//把s中的格式化数据，转换成字符串，放到buf中
//	sprintf(buf, "%s %d %f", s.arr, s.age, s.score);
//	//"zhangsan 20 55.500000"
//	printf("字符串形式：%s\n", buf);
//
//	//从字符串buf中获取一个格式化的数据到tmp中
//	sscanf(buf, "%s %d %f", tmp.arr, &(tmp.age), &(tmp.score));
//	printf("格式化形式：%s %d %f\n", tmp.arr, tmp.age, tmp.score);
//	return 0;
//}


//随机读写
//fseek
//ftell算偏移量
//rewind回到起始位置
int main()
{
	FILE* pf = fopen("text.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//读文件
	//定位文件指针
	fseek(pf, 2, SEEK_SET);//从文件开始算偏移量
	int ch = fgetc(pf);
	printf("%c\n", ch);
	printf("%d\n", ftell(pf));//文件指针相对于开始偏移量

	//fseek(pf, 2, SEEK_CUR);//从当前算偏移量
	fseek(pf, -1, SEEK_END);//从末尾算偏移量
	ch = fgetc(pf);
	printf("%c\n", ch);
	printf("%d\n", ftell(pf));
	//回到初始位置
	rewind(pf);
	ch = fgetc(pf);
	printf("%c\n", ch);
	//关闭文件
	fclose(pf);
	pf = NULL;

	return 0;
}