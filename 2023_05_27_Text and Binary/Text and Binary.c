#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
#include<assert.h>
#include<windows.h>

//��������ʽ���ı���ʽռ���ڴ�
//�ı� - ÿ���ַ���ASCII��ʽ�洢
//

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("text.txt", "wb");
//	fwrite(&a, 4, 1, pf);//�Զ�������ʽд���ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//�ļ���ȡ�������ж�
// ��ȡʧ��
// �ļ�ĩβ
//feof��ʹ��
//������foef�����ķ���ֱֵ���ж��ļ��Ƿ����
//Ӧ���ڵ��ļ���ȡ������ʱ���ж��Ƕ�ȡʧ�ܽ��������������ļ�β����
//�ı��ļ���ȡ�Ƿ�������жϷ���ֵ�Ƿ�ΪEOF(fgetc)������NULL(fgetc)
//�������ļ��Ķ�ȡ�����жϣ��жϷ���ֵ�Ƿ�С��ʵ��Ҫ���ĸ���(fread)

//int main()
//{
//	int c;//ע�⣬int����char��Ҫ����EOF
//	FILE* pf = fopen("test.txt", "r");
//	if (!pf)
//	{
//		perror("File opening failed");
//		return EXIT_FAILURE;
//	}
//	//fgetc ����ȡʧ�ܵ�ʱ����������ļ�������ʱ�򣬶�����EOF
//	while ((c = getc(pf)) != EOF)
//	{
//		putchar(c);
//	}
//	//�ж���ʲôԭ�����
//	if (ferror(pf))//�ж��Ƿ���������
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

//�ļ�������

int main()
{
	FILE* pf = fopen("test.txt", "w");
	fputs("abcdef", pf);//�Ƚ�����������������
	printf("˯��10���� - �Ѿ�д�����ˣ���test.txt�ļ��������ļ�û������\n");
	Sleep(10000);
	printf("ˢ�»�����\n");
	//fflusf(pf);//ˢ�»�����ʱ���Ž����������������д���ļ������̣�
	//ע��fflush�ڸ߰汾VS�ϲ���ʹ��
	printf("��˯��10�� - ��ʱ���ٴδ�test.txt�ļ����ļ���������\n");
	Sleep(10000);
	fclose(pf);
	//ע��fclose�ڹر��ļ���ʱ��Ҳ��ˢ�»�����
	pf = NULL;
	return 0;
}