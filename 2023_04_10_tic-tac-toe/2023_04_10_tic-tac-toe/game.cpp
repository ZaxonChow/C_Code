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
	int i = 0;//控制行
	int j = 0;//控制列
	for (i = 0; i < row; i++)
	{
		//打印数据“   |”
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);//打印某个格子
			if (j < col - 1)
				printf("|");
			else
				printf("\n");		
		}
		//打印分割行“___|”
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
	printf("玩家回合");
	while (1)
	{
		printf("请输入坐标：");
		scanf("%d,%d", &x, &y);
		//判断 x、y 坐标合法性
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
				printf("改位置已经落子，请重新输入!\n");
			}
		}
		else
		{
			printf("非法坐标，请重新输入!\n");
		}
	}
}

void ComputerTurn(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑回合\n");
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
	//玩家赢'*'
	//电脑赢'#'
	//平局'Q'
	//继续'C'
	int i = 0;
	//判断行
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') 
		{ 
			return board[i][0];
		}
	}
	//判断列
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	//判断对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[2][0] != ' ')
	{
		return board[2][0];
	}
	//判断平局
	if (1 == IsFull(board, row, col))
	{
		return 'Q';
	}
	return 'C';
}
