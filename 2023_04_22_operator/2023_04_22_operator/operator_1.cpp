#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	double a = 5 / 2.0;
//	int b = 5 % 2;
//	printf("a = %lf\n", a);
//	printf("b = %d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 16;
//	//00000000 00000000 00000000 00010000
//	a = a >> 1;
//	//00000000 00000000 00000000 00001000
//	//���Ʋ�������
//	//1.��������
//	//�ұ߶�������߲�ԭ����λ
//	//2.�߼�����
//	//�ұ߶�������߲�0
//	printf("a = %d\n", a);
//	int b = -4;
//	b = b >> 1;
//	printf("b = %d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	//10000000 00000000 00000000 00000001 - ԭ��
//	//11111111 11111111 11111111 11111110 - ����
//	//11111111 11111111 11111111 11111111 - ����
//	a = a >> 1;
//	//11111111 11111111 11111111 11111111 - ����
//	//11111111 11111111 11111111 11111110 - ����
//	//10000000 00000000 00000000 00000001 - ԭ��
//	printf("a = %d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = -5;
//	int b = a << 1;
//	//���Ʋ�����:��߶������ұ߲�0��
//	//��λ��Ҫ�ƶ�����λ��:a>>-1��ֻ����������
//	printf("b = %d\n", b);
//	return 0;
//}

//int main()
//{
//	//& - ��������λ��
//	int a = 3;
//	int b = 5;
//	int c = a&b;
//	printf("c = %d\n", c);
//	//|- ��λ��
//	int x = 3;
//	int y = 5;
//	int z = x | y;
//	printf("z = %d\n", z);
//	//^ - ��λ���
//	int u = 3;//0011
//	int v = 5;//0101
//	int w = u^v;//0110
//	printf("w = %d\n", w);
//	return 0;
//}

//int main()
//{
//	//����tmp��������
//	int a = 3;//0011
//	int b = 5;//0101
//	//�Ӽ��� - ����������⣬���ܻ����
//	//���ķ���
//	a = a^b;//0110 - 6
//	b = a^b;//0011 - 3
//	a = a^b;//0101 - 5
//	printf("a = %d\tb = %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	//ͳ��num�Ĳ������м���1
//	//32bit
//	//00000000 00000000 00000000 00000011
//	//num & 1 == 1 
//	int  i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num>>i)&1))
//			count++;
//	}
//	printf("%d\n", count);
//	/*while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//		}
//		num = num / 2;
//	}*/
//	//printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	//��ֵ������
//	//���ϸ�ֵ��
//	//��Ŀ������ - ֻ��һ��������
//	//! - ��
//	int a = 0;
//	if (!a)
//	{
//		printf("hh\n");
//	}
//	//��-�� - ��ֵ
//	//& - ȡ��ַ������
//	int b = 10;
//	//* - �����ò�����
//	int *p = &a;
//	*p = 20;
//	return 0;
//}

int main()
{
	//sizeof - 
	int a = 10;
	char c = 'r';
	char *p = &c;
	int arr[10] = { 0 };
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(c));
	printf("%d\n", sizeof(char));

	printf("%d\n", sizeof(p));
	printf("%d\n", sizeof(char *));

	printf("%d\n", sizeof(arr));
	return 0;
}