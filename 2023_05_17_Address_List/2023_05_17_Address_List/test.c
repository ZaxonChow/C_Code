#define _CRT_SECURE_NO_WARNINGS 1

#include "AddressList.h"



//ͨѶ¼
//�˵���Ϣ�����֡����䡢�Ա𡢵绰����ַ
//1.���100���˵���Ϣ
//2.������ϵ��
//3.ɾ��ָ����ϵ��
//4.������ϵ��
//5.����
//6.��ʾ��ϵ��

void menu()
{
	printf("*********************************\n");
	printf("******  1.add     2.del     *****\n");
	printf("******  3.search  4.modify  *****\n");
	printf("******  5.show    6.sort    *****\n");
	printf("******  0.exit              *****\n");
	printf("*********************************\n");
}

int main()
{
	int input = 0;//��������ѡ��
	Contact con;//ͨ��¼
	//��ʼ��ͨѶ¼
	InitContact(&con);

	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1://���ӳ�Ա��Ϣ
			AddContact(&con);
			break;
		case 2://ɾ����Ա��Ϣ
			DelContact(&con);
			break;
		case 3://���ҳ�Ա��Ϣ

			break;
		case 4://�޸ĳ�Ա��Ϣ

			break;
		case 5://��ʾ��Ա��Ϣ
			ShowContact(&con);
			break;
		case 6://���г�Ա��Ϣ

			break;
		case 0://�˳�ͨѶ¼
			printf("�˳�ͨ��¼\n");
			break;
		default://ѡ�����
			printf("ѡ��������������룡\n");
			break;
		}
	} while (input);
	return 0;
}
