#define _CRT_SECURE_NO_WARNINGS 1
#include "AddressList.h"

void InitContact(Contact* pc)
{
	//初始化通讯录
	assert(pc);
	pc->count = 0;
	memset(pc->data, 0, sizeof(pc->data));
}

void AddContact(Contact* pc)
{
	//增加成员信息
	assert(pc);
	if (pc->count == MAX)
	{
		printf("通讯录已满，无法添加！\n");
		return;
	}

	printf("请输入名字：");
	scanf("%s", pc->data[pc->count].name);
	printf("请输入年龄：");
	scanf("%d", &(pc->data[pc->count].age));
	printf("请输入性别：");
	scanf("%s", pc->data[pc->count].sex);
	printf("请输入电话：");
	scanf("%s", pc->data[pc->count].tele);
	printf("请输入地址：");
	scanf("%s", pc->data[pc->count].addr);

	pc->count++;
	printf("添加成功！\n");
}

void ShowContact(const Contact* pc)
{
	//显示成员信息
	assert(pc);
	int i = 0;
	printf("%20s\t%5s\t%5s\t%12s\t%30s\n", "名字", "年龄", "性别", "电话", "地址");
	for (i = 0; i < pc->count; i++)
	{
		printf("%20s\t%3d\t%5s\t%12s\t%30s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}

static int FindByName(Contact* pc, char name[])
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		//找到了
		if (0 == strcmp(pc->data[i].name, name))
		{
			return i;
		}
	}
	return -1;//没找到
}

void DelContact(Contact* pc)
{
	//删除成员信息
	assert(pc);
	char name[MAX_NAME] = { 0 };
	int i = 0;
	if (pc->count == 0)
	{
		printf("通讯录位空，没有信息可以删除\n");
		return;
	}
	printf("请输入要删除的成员姓名：");
	scanf("%s", name);
	//1.查找
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("要删除的人不存在\n");
		return;
	}
	//2.删除
	for (i = pos; i < pc->count-1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->count--;
	printf("删除成功\n");
}
