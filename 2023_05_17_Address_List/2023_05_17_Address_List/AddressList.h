#pragma once

#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

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
typedef struct Contact
{
	PeoInfo data[MAX];//存放人的信息
	int count;//记录当前通讯录中实际人数
}Contact;

void InitContact(Contact* pc);//初始化通讯录
void AddContact(Contact* pc);//增加成员信息
void ShowContact(const Contact* pc);//显示成员信息
void DelContact(Contact* pc);//删除成员信息
void SearchContact(const Contact* pc);//查找成员信息
void ModifyContact(Contact* pc);//修改成员信息
void SortContact(Contact* pc);//排序成员信息
