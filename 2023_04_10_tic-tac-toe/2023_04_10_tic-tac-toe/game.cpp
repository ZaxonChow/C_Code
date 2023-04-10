#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;//������
	int j = 0;//������
	for (i = 0; i < row; i++)
	{
		//��ӡ���ݡ�   |��
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);//��ӡĳ������
			if (j < col - 1)
				printf("|");
			else
				printf("\n");		
		}
		//��ӡ�ָ��С�___|��
		if (i < row - 1)
			{
				for (j = 0; j < col; j++)
				{
					printf("---");
					if (j < col - 1)
						printf("|");
					else
						printf("\n");
				}
			}
	}
}

void PlayerTurn(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("��һغ�");
	while (1)
	{
		printf("���������꣺");
		scanf("%d,%d", &x, &y);
		//�ж� x��y ����Ϸ���
		if (x >= 1 && x <= row && y>=1 && y<=col)
		{
			x--;
			y--;
			if (board[x][y] == ' ')
			{
				board[x][y] = '*';
				break;
			}
			else
			{
				printf("��λ���Ѿ����ӣ�����������!\n");
			}
		}
		else
		{
			printf("�Ƿ����꣬����������!\n");
		}
	}
}

void ComputerTurn(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("���Իغ�\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}			
	}
}

int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

char IsWin(char board[ROW][COL], int row, int col)
{
	//���Ӯ'*'
	//����Ӯ'#'
	//ƽ��'Q'
	//����'C'
	int i = 0;
	//�ж���
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') 
		{ 
			return board[i][0];
		}
	}
	//�ж���
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	//�ж϶Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[2][0] != ' ')
	{
		return board[2][0];
	}
	//�ж�ƽ��
	if (1 == IsFull(board, row, col))
	{
		return 'Q';
	}
	return 'C';
}
