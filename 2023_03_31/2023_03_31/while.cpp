#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (5 == i)
			continue;
			//break;
		printf("%d\t", i);
	}
	return 0;
}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0' || ch>'9')
//			continue; 
//		putchar(ch);
//	}
//	//int ret = 0;
//	//int ch = 5;
//	//char password[20] = {0};
//	//printf("���������룺");
//	//scanf("%s", password);//�������룬�������password������
//	////������ʣ��\n
//	//while((ch=getchar()) != '\n');
//	//printf("��ȷ��(Y/N)");
//	//ret = getchar();//Y/N
//	//if (ret == 'Y')
//	//	printf("ȷ�ϳɹ�\n");
//	//else
//	//	printf("����ȷ��\n");
//	/*int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}*/
//	return 0;
//}