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


//��������
//�˵���Ϣ
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//ͨ��¼
// ��̬�汾
//typedef struct Contact
//{
//	PeoInfo data[MAX];//����˵���Ϣ
//	int count;//��¼��ǰͨѶ¼��ʵ������
//}Contact;

//��̬�汾
typedef struct Contact
{
	PeoInfo* data;//����˵���Ϣ
	int count;//��¼��ǰͨѶ¼��ʵ������
	//��ǰͨѶ¼����
	//Ĭ��3
	//����2
	int capacity;
}Contact;

int InitContact(Contact* pc);//��ʼ��ͨѶ¼
void DestroyContact(Contact* pc);//����ͨѶ¼
void AddContact(Contact* pc);//���ӳ�Ա��Ϣ
void ShowContact(const Contact* pc);//��ʾ��Ա��Ϣ
void DelContact(Contact* pc);//ɾ����Ա��Ϣ
void SearchContact(const Contact* pc);//���ҳ�Ա��Ϣ
void ModifyContact(Contact* pc);//�޸ĳ�Ա��Ϣ
void SortContact(Contact* pc);//�����Ա��Ϣ
void SaveContact(const Contact* pc);//�����Ա��Ϣ
void LoadContact(Contact* pc);//�����ļ��г�Ա��Ϣ