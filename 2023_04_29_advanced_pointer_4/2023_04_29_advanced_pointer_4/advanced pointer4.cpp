#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//������
//void menu()
//{
//	printf("************************\n");
//	printf("**  1. add    2. sub  **\n");
//	printf("**  3. mul    4. div  **\n");
//	printf("**  5. Xor    0. exit **\n");
//	printf("************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int Xor(int x, int y)
//{
//	return x^y;
//}

//ָ����ָ�������ָ��
//һ��ָ�� - ָ��ָ��һ������ - ����Ԫ�ض��Ǻ���ָ��
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int (*p)[10] = &arr;//ȡ������ĵ�ַ
//
//	int(*p)(int, int);//����ָ��
//	int(*pfArr[4])(int, int);//pfArr��һ������ - ����ָ�������
//	//ppfArr��һ��ָ��[����ָ������]��ָ��
//	int(*(*ppfArr)[4])(int, int) = &pfArr;
//	//
//	//ppfArr��һ������ָ�룬ָ��ָ����������ĸ�Ԫ��
//	//ָ��������ÿ��Ԫ�ص�����ʱһ������ָ�� int(*)(int, int)
//	//
//	return 0;
//}

//�ص����� - ͨ������ָ����õĺ���
//�Ѻ�����ָ�루��ַ����Ϊ�������ݸ���һ������
//�����ָ�뱻������������ָ��ĺ���ʱ������Ϊ�ص�����
//�ص����������ɸú�����ʵ�ַ�ֱ�ӵ���
//�������ض����¼�������������ʱ�������һ������
//���ڶԸ��¼�������������Ӧ
//void Calc(int(*pf)(int,int))
//{
//	int x = 0;
//	int y = 0;
//	printf("�������������֣�");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 5:
//			Calc(Xor);
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	
//	return 0;
//}



//void menu()
//{
//	printf("************************\n");
//	printf("**  1. add    2. sub  **\n");
//	printf("**  3. mul    4. div  **\n");
//	printf("**  5. Xor    0. exit **\n");
//	printf("************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int Xor(int x, int y)
//{
//	return x^y;
//}

//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	//����ָ������ - ת�Ʊ�
//	int(*pfArr[])(int, int) = { 0, Add, Sub, Mul, Div, Xor };
//	int sz = sizeof(pfArr) / sizeof(pfArr[1]);
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		if (input >= 1 && input <= sz - 1)
//		{
//			printf("�������������");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("�����������������\n");
//		}
//	} while (input);
//	return 0;
//}

//void print(char *str)
//{
//	printf("hehe:%s\n", str);
//}
//
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//
//int main()
//{
//	test(print);
//	return 0;
//}

void BubbleSort(int arr[], int sz)
{
	
}

//qsort - ��������������������

int main()
{
	//ð������
	//����������������
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz);
	return 0;
}