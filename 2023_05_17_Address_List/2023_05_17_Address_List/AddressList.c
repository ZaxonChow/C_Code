#define _CRT_SECURE_NO_WARNINGS 1
#include "AddressList.h"

void InitContact(Contact* pc)
{
	//��ʼ��ͨѶ¼
	assert(pc);
	pc->count = 0;
	memset(pc->data, 0, sizeof(pc->data));
}

void AddContact(Contact* pc)
{
	//���ӳ�Ա��Ϣ
	assert(pc);
	if (pc->count == MAX)
	{
		printf("ͨѶ¼�������޷���ӣ�\n");
		return;
	}

	printf("���������֣�");
	scanf("%s", pc->data[pc->count].name);
	printf("���������䣺");
	scanf("%d", &(pc->data[pc->count].age));
	printf("�������Ա�");
	scanf("%s", pc->data[pc->count].sex);
	printf("������绰��");
	scanf("%s", pc->data[pc->count].tele);
	printf("�������ַ��");
	scanf("%s", pc->data[pc->count].addr);

	pc->count++;
	printf("��ӳɹ���\n");
}

void ShowContact(const Contact* pc)
{
	//��ʾ��Ա��Ϣ
	assert(pc);
	int i = 0;
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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

static int FindByName(Contact* pc, char name[])
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		//�ҵ���
		if (0 == strcmp(pc->data[i].name, name))
		{
			return i;
		}
	}
	return -1;//û�ҵ�
}

void DelContact(Contact* pc)
{
	//ɾ����Ա��Ϣ
	assert(pc);
	char name[MAX_NAME] = { 0 };
	int i = 0;
	if (pc->count == 0)
	{
		printf("ͨѶ¼λ�գ�û����Ϣ����ɾ��\n");
		return;
	}
	printf("������Ҫɾ���ĳ�Ա������");
	scanf("%s", name);
	//1.����
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
		return;
	}
	//2.ɾ��
	for (i = pos; i < pc->count-1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->count--;
	printf("ɾ���ɹ�\n");
}


void SearchContact(const Contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	int i = 0;
	printf("������Ҫ���ҵĳ�Ա������");
	scanf("%s", name);
	//1.����
	int pos = FindByName(pc, name);
	if(pos == -1)
		printf("Ҫ���ҵ��˲�����\n");
	//2.��ӡ
	else
	{
		printf("��ѯ������ϢΪ��\n");
		printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	//�޸ĳ�Ա��Ϣ
	assert(pc);
	char name[MAX_NAME] = { 0 };
	int i = 0;
	printf("������Ҫ�޸ĵĳ�Ա������");
	scanf("%s", name);
	//1.����
	int pos = FindByName(pc, name);
	if (pos == -1)
		printf("Ҫ�޸ĵ��˲�����\n");
	//2.����¼��
	else
	{
		printf("�Ѳ��ҵ�Ҫ�޸ĵĳ�Ա��Ϣ���뿪ʼ�޸�\n");
		printf("���������֣�");
		scanf("%s", pc->data[pos].name);
		printf("���������䣺");
		scanf("%d", &(pc->data[pos].age));
		printf("�������Ա�");
		scanf("%s", pc->data[pos].sex);
		printf("������绰��");
		scanf("%s", pc->data[pos].tele);
		printf("�������ַ��");
		scanf("%s", pc->data[pos].addr);

		printf("�޸ĳɹ�\n");
	}	
}

int cmp_peo_by_name(const void* e1, const void* e2)
{
	assert(e1);
	assert(e2);
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}

//�������֡�����������Ա��Ϣ
void SortContact(Contact* pc)
{
	//�������������Ա��Ϣ
	assert(pc);
	qsort(pc->data, pc->count, sizeof(PeoInfo), cmp_peo_by_name);//��������
	printf("����ɹ�\n");
}