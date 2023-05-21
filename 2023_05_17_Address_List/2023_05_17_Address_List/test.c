#define _CRT_SECURE_NO_WARNINGS 1

#include "AddressList.h"

//1.静态的版本
//2.动态的版本
//3.文件的版本

//通讯录
//人的信息：名字、年龄、性别、电话、地址
//1.存放100个人的信息
//2.增加联系人
//3.删除指定联系人
//4.查找联系人
//5.排序
//6.显示联系人
//默认够存放3个人信息
//每次增加2个空间位置

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
	int input = 0;//存放输入的选项
	Contact con;//通信录
	//初始化通讯录
	InitContact(&con);

	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case ADD://增加成员信息
			AddContact(&con);
			break;
		case DEL://删除成员信息
			DelContact(&con);
			break;
		case SEARCH://查找成员信息
			SearchContact(&con);
			break;
		case MODIFY://修改成员信息
			ModifyContact(&con);
			break;
		case SHOW://显示成员信息
			ShowContact(&con);
			break;
		case SORT://排列成员信息
			SortContact(&con);
			break;
		case EXIT://退出通讯录
			DestroyContact(&con);
			printf("退出通信录\n");
			break;
		default://选择错误
			printf("选择错误，请重新输入！\n");
			break;
		}
	} while (input);
	return 0;
}
