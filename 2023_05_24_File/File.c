#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<errno.h>
#include<string.h>

//�ļ�
//�����ļ�
//�����ļ�
// 
//�ļ���
//�ļ�·��+�ļ���+�ļ���׺

//����
//���ļ�
//��ȡ�ļ�
//�ر��ļ�
//�ļ�ָ��
//�ڴ��ļ���ͬʱ������һ��FILE* ָ�����ָ����ļ����൱�ڽ���ָ����ļ��Ĺ�ϵ

//fopen
//FILE* fopen(const char* filename, const char*

int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//���ļ�

	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}