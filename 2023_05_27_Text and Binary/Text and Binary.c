#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
#include<assert.h>
#include<windows.h>

//二进制形式与文本形式占用内存
//文本 - 每个字符以ASCII形式存储
//

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("text.txt", "wb");
//	fwrite(&a, 4, 1, pf);//以二进制形式写入文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//文件读取结束的判断
// 读取失败
// 文件末尾
//feof勿使用
//不能用foef函数的返回值直接判断文件是否结束
//应用于当文件读取结束的时候，判断是读取失败结束，还是遇到文件尾结束
//文本文件读取是否结束，判断返回值是否为EOF(fgetc)，或者NULL(fgetc)
//二进制文件的读取结束判断，判断返回值是否小于实际要读的个数(fread)

//int main()
//{
//	int c;//注意，int，非char，要求处理EOF
//	FILE* pf = fopen("test.txt", "r");
//	if (!pf)
//	{
//		perror("File opening failed");
//		return EXIT_FAILURE;
//	}
//	//fgetc 当读取失败的时候或者遇到文件结束的时候，都返回EOF
//	while ((c = getc(pf)) != EOF)
//	{
//		putchar(c);
//	}
//	//判断是什么原因结束
//	if (ferror(pf))//判断是否遇到错误
//		puts("I/O error when reading");
//	else if(feof(pf))
//		puts("End of file reached successfully");
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//enum { SIZE = 5 };
//
//int main(void)
//{
//	double a[SIZE] = { 1.,2.,3.,4.,5. };
//	FILE* pf = fopen("test.bin", "wb");
//	fwrite(a, sizeof(*a), SIZE, pf);
//	fclose(pf);
//	pf = NULL;
//
//	double b[SIZE];
//	pf = fopen("test.bin", "rb");
//	size_t ret_code = fread(b, sizeof(*b), SIZE, pf);
//	if (ret_code == SIZE)
//	{
//		puts("Array read successfully, contents:");
//		for (int n = 0; n < SIZE; n++)
//			printf("%f ", b[n]);
//		putchar('\n');
//	}
//	else
//	{
//		if (feof(pf))
//			printf("Error reading test.bin: unexcepted end of file\n");
//		else if (ferror(pf))
//			perror("Error reading test.bin");
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//文件缓冲区

int main()
{
	FILE* pf = fopen("test.txt", "w");
	fputs("abcdef", pf);//先将代码放在输出缓冲区
	printf("睡眠10秒钟 - 已经写数据了，打开test.txt文件，发现文件没有内容\n");
	Sleep(10000);
	printf("刷新缓冲区\n");
	//fflusf(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
	//注：fflush在高版本VS上不能使用
	printf("再睡眠10秒 - 此时，再次打开test.txt文件，文件有内容了\n");
	Sleep(10000);
	fclose(pf);
	//注：fclose在关闭文件的时候，也会刷新缓冲区
	pf = NULL;
	return 0;
}