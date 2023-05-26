#define _CRT_SECURE_NO_WARNINGS 1
#include "AddressList.h"

//静态版本
//void InitContact(Contact* pc)
//{
//	//初始化通讯录
//	assert(pc);
//	pc->count = 0;
//	memset(pc->data, 0, sizeof(pc->data));
//}

void CheckCapacity(Contact* pc)
{
	//增容
	if (pc->capacity == pc->count)
	{
		//空间不够，增容
		PeoInfo* ptr = (PeoInfo*)realloc(pc->data, (pc->capacity + INC_SZ) * sizeof(PeoInfo));
		if (ptr == NULL)
		{
			printf("AddContact:%s\n", strerror(errno));
			return;
		}
		else
		{
			pc->data = ptr;
			pc->capacity += INC_SZ;
			printf("增容成功\n");
		}
	}
}

void LoadContact(Contact* pc)
{
	//加载文件信息
	FILE* pfRead = fopen("contact.txt", "rb");
	if (pfRead == NULL)
	{
		perror("LoadContact");
		return;
	}
	//读文件信息
	PeoInfo tmp = { 0 };
	
	while (1 == fread(&tmp, sizeof(PeoInfo), 1, pfRead))
	{
		CheckCapacity(pc);//检查是否增容

		pc->data[pc->count] = tmp;
		pc->count++;
	}

	//关闭文件
	fclose(pfRead);
	pfRead = NULL;
	printf("通讯录读取成功\n");
}

//动态版本
int InitContact(Contact* pc)
{
	//初始化通讯录
	assert(pc);
	pc->count = 0;
	pc->data = (PeoInfo*)calloc(3, sizeof(PeoInfo));
	if (pc->data == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	pc->capacity = DEFAULT_SZ;
	//加载文件的信息到通讯录中
	LoadContact(pc);
	return 0;
}

void SaveContact(const Contact* pc)
{
	//保存通讯录
	assert(pc);
	FILE* pfWrite = fopen("contact.txt", "wb");
	if (pfWrite == NULL)
	{
		perror("SaveContact");
		return;
	}
	//写文件-二进制的形式写
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		fwrite(pc->data + i, sizeof(PeoInfo), 1, pfWrite);
	}
	//关闭文件
	fclose(pfWrite);
	pfWrite = NULL;
	printf("通讯录信息已保存\n");
}

void DestroyContact(Contact* pc)
{
	//销毁通讯录
	assert(pc);
	free(pc->data);
	pc->data = NULL;
	pc = NULL;
}

//静态的版本
//void AddContact(Contact* pc)
//{
//	//增加成员信息
//	assert(pc);
//	if (pc->count == MAX)
//	{
//		printf("通讯录已满，无法添加！\n");
//		return;
//	}
//
//	printf("请输入名字：");
//	scanf("%s", pc->data[pc->count].name);
//	printf("请输入年龄：");
//	scanf("%d", &(pc->data[pc->count].age));
//	printf("请输入性别：");
//	scanf("%s", pc->data[pc->count].sex);
//	printf("请输入电话：");
//	scanf("%s", pc->data[pc->count].tele);
//	printf("请输入地址：");
//	scanf("%s", pc->data[pc->count].addr);
//
//	pc->count++;
//	printf("添加成功！\n");
//}

//动态的版本
void AddContact(Contact* pc)
{
	//增加成员信息
	assert(pc);
	CheckCapacity(pc);//检测需要增容吗

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
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "名字", "年龄", "性别", "电话", "地址");
	for (i = 0; i < pc->count; i++)
	{
		printf("%-20s\t%-3d\t%-5s\t%-12s\t%-30s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}

static int FindByName(const Contact* pc, char name[])
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


void SearchContact(const Contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	int i = 0;
	printf("请输入要查找的成员姓名：");
	scanf("%s", name);
	//1.查找
	int pos = FindByName(pc, name);
	if(pos == -1)
		printf("要查找的人不存在\n");
	//2.打印
	else
	{
		printf("查询到的信息为：\n");
		printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-3d\t%-5s\t%-12s\t%-30s\n",
			pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].tele,
			pc->data[pos].addr);
	}
}

void ModifyContact(Contact* pc)
{
	//修改成员信息
	assert(pc);
	char name[MAX_NAME] = { 0 };
	int i = 0;
	printf("请输入要修改的成员姓名：");
	scanf("%s", name);
	//1.查找
	int pos = FindByName(pc, name);
	if (pos == -1)
		printf("要修改的人不存在\n");
	//2.重新录入
	else
	{
		printf("已查找到要修改的成员信息，请开始修改\n");
		printf("请输入名字：");
		scanf("%s", pc->data[pos].name);
		printf("请输入年龄：");
		scanf("%d", &(pc->data[pos].age));
		printf("请输入性别：");
		scanf("%s", pc->data[pos].sex);
		printf("请输入电话：");
		scanf("%s", pc->data[pos].tele);
		printf("请输入地址：");
		scanf("%s", pc->data[pos].addr);

		printf("修改成功\n");
	}	
}

int cmp_peo_by_name(const void* e1, const void* e2)
{
	assert(e1);
	assert(e2);
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}

//按照名字、年龄等排序成员信息
void SortContact(Contact* pc)
{
	//按照名字排序成员信息
	assert(pc);
	qsort(pc->data, pc->count, sizeof(PeoInfo), cmp_peo_by_name);//快速排序
	printf("排序成功\n");
}

