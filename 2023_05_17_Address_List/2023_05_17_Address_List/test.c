#define _CRT_SECURE_NO_WARNINGS 1

#include "AddressList.h"

//1.��̬�İ汾
//2.��̬�İ汾
//3.�ļ��İ汾

//ͨѶ¼
//�˵���Ϣ�����֡����䡢�Ա𡢵绰����ַ
//1.���100���˵���Ϣ
//2.������ϵ��
//3.ɾ��ָ����ϵ��
//4.������ϵ��
//5.����
//6.��ʾ��ϵ��
//Ĭ�Ϲ����3������Ϣ
//ÿ������2���ռ�λ��

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

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
		case ADD://���ӳ�Ա��Ϣ
			AddContact(&con);
			break;
		case DEL://ɾ����Ա��Ϣ
			DelContact(&con);
			break;
		case SEARCH://���ҳ�Ա��Ϣ
			SearchContact(&con);
			break;
		case MODIFY://�޸ĳ�Ա��Ϣ
			ModifyContact(&con);
			break;
		case SHOW://��ʾ��Ա��Ϣ
			ShowContact(&con);
			break;
		case SORT://���г�Ա��Ϣ
			SortContact(&con);
			break;
		case EXIT://�˳�ͨѶ¼
			DestroyContact(&con);
			printf("�˳�ͨ��¼\n");
			break;
		default://ѡ�����
			printf("ѡ��������������룡\n");
			break;
		}
	} while (input);
	return 0;
}
