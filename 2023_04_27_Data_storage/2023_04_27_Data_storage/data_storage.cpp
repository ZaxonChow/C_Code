#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�������� - �������͡��Զ������� - �����ڴ���ӽ�
//1.���� - unsigned\(signed)
//char - �ַ��������� - ��ASCIIֵ
//short [int] - ������
//int - ����
//long [int] - ������
//float - �����ȸ�����
//double - ˫���ȸ�����
//2.��������
//��������
//����������struct
//ö������enum
//��������union
//3.ָ������
//int *
//char *
//float *
//void *
//4.������
//void - �����������͡�����������ָ��



//int main()
//{
//	//���ʹ洢��ʽ
//	//�����з�������ʾ��ʽ - ԭ�롢���롢����
//	int a = 20;
//	//����ԭ�뷴�벹����ͬ
//	int b = -10;
//	//������Բ���洢
//	//������λ����ֵ��ͳһ
//	//�ӷ�����ͳһ����
//	//Ӳ����·��ͬ
//	return 0;
//}

//���С��
//��� - ����ֽ���洢ģʽ - ���ݵĵ�λ�������ڴ�ߵ�ַ�����ݵĸ�λ�������ڴ�ĵ͵�ַ��
//С�� - С���ֽ���洢ģʽ - ���ݵĵ�λ�������ڴ�͵�ַ�����ݵĸ�λ�������ڴ�ĸߵ�ַ

//int check_sys()
//{
//	int a = 1;
//	char *p = (char*)&a;
//	//����1 - С��
//	//����0 - ���
//	return *p;
//}

//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	//�ж��ֽ���
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	//11111111
//	//00000000 00000000 00000000 11111111
//	//%d��ӡ�������������޷���������0��
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	char a = -128;
//	char b = 128;
//	//10000000 00000000 00000000 10000000
//	//11111111 11111111 11111111 01111111
//	//11111111 11111111 11111111 10000000
//	//11111111 11111111 11111111 10000000
//	printf("%u\n", a);//%u ��ӡʮ�����޷�����
//	printf("%u\n", b);
//	return 0;
//}

//int main()
//{
//	int i = -20;
//	//10000000 00000000 00000000 00010100
//	//11111111 11111111 11111111 11101011
//	//11111111 11111111 11111111 11101100
//	unsigned int j = 10;
//	//00000000 00000000 00000000 00001010
//	//11111111 11111111 11111111 11101100
//
//	//11111111 11111111 11111111 11110110 - ����
//	//11111111 11111111 11111111 11110101 - ����
//	//10000000 00000000 00000000 00001010 - ԭ��
//	printf("%d\n", i + j);
//	return 0;
//}

//#include<Windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(100);
//	}
//
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;	
//	}
//	printf("%d\n", strlen(a));
//	return 0;
//}


//unsigned char i = 0;
//
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}

//int main()
//{
//	double d = 1E10;
//	printf("%lf\n", d);
//	return 0;
//}

//�������Ĵ洢
//(-1)^S * M * 2^E
//M��Ч���� - (M>=1 && M<2)
//9.0
//1001.0
//(-1)^0 * 1.001 * 2^3
//float
//S - 1bit - 0/1
//E - 8bit - �����м�����8λ+127��11λ+1023
//M - 23bit - ֻ����xxxxxxС������
//

//int main()
//{
//	int n = 9;
//	float *pFloat = (float *)&n;
//	printf("n��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);
//
//	*pFloat = 9.0;
//	printf("num��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);
//	return 0;
//}

//int main()
//{
//	float f = 5.5;
//	//5.5
//	//101.1
//	//1.011*2^2
//	//s = 0;
//	//m = 1.011
//	//e = 2
//	//0 10000001 01100000000000000000000
//	//0100 0000 1011 0000 0000 0000 0000 0000
//	//0x40b00000
//	return 0;
//}

int main()
{
	int n = 9;
	//00000000000000000000000000001001
	float *pFloat = (float *)&n;
	//0 00000000 00000000000000000001001
	printf("n��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ��%f\n", *pFloat);

	*pFloat = 9.0;
	//1001.0
	//1.001*2^3
	//(-1)^0 * 1.001 * 2^3
	//0 10000010 001 00000000000000000000
	//0100 0001 0001 0000 0000 0000 0000 0000
	//0x41100000
	printf("num��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ��%f\n", *pFloat);
	return 0;
}