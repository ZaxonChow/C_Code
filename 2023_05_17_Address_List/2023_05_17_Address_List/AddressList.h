#pragma once

#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#define DEFAULT_SZ 3
#define INC_SZ 2
#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30


//声明类型
//人的信息
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//通信录
// 静态版本
//typedef struct Contact
//{
//	PeoInfo data[MAX];//存放人的信息
//	int count;//记录当前通讯录中实际人数
//}Contact;

//动态版本
typedef struct Contact
{
	PeoInfo* data;//存放人的信息
	int count;//记录当前通讯录中实际人数
	//当前通讯录容量
	//默认3
	//增加2
	int capacity;
}Contact;

int InitContact(Contact* pc);//初始化通讯录
void DestroyContact(Contact* pc);//销毁通讯录
void AddContact(Contact* pc);//增加成员信息
void ShowContact(const Contact* pc);//显示成员信息
void DelContact(Contact* pc);//删除成员信息
void SearchContact(const Contact* pc);//查找成员信息
void ModifyContact(Contact* pc);//修改成员信息
void SortContact(Contact* pc);//排序成员信息
void SaveContact(const Contact* pc);//保存成员信息
void LoadContact(Contact* pc);//加载文件中成员信息