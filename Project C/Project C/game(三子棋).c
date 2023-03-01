#define _CRT_SECURE_NO_WARNINGS 1

#include "game(������).h"


void Initboard(char board[ROW][COL],int row,int col)
{
	//���������ݳ�ʼ��Ϊ�ո�   ��ά����ı���  Ȼ����ÿһ���������ݶ�Ϊ��
	int i = 0;	
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			//�ַ���  ����������
			board[i][j] = ' ';
		}
	}
}

void Displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < row; i++)
	{
		//1.��ӡһ������
		//printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);  д���˾������е�
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
			printf("\n");
			//2. ��ӡ�ָ���
			if (i < row - 1)  //��Ҫ��ӡ���·���--- --- ---��
			{
				//printf("---|---|---");
				for (j = 0; j < col; j++)
				{
					printf("---");
					if (j<col-1)
					{
						printf("|");
					}
				}
				printf("\n");
			}
	}
}


void Palyermove(char board[ROW][COL], int row, int col)
{
	printf("������壺>\n");
	while (1)
	{
		int x = 0;
		int y = 0;
		printf("����������:");
		scanf("%d%d", &x, &y);
		//�ж�����ĺϷ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x-1][y-1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�������ѱ�ռ�ã����������룡\n");
			}
		}
		else
		{
			printf("���겻�Ϸ������������룡\n");
		}
	}
}


//��������
void Computermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�������壺>\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y]==' ')
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
	for ( i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

//�ж���Ӯ����
char Iswin(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	//������һ����
	for (int i = 0; i < row; i++)
	{
		if (board[i][0]==board[i][1]&&board[i][1]==board[i][2] &&board[i][1]!=' ')
		{
			return board[i][1];
		}
	}
	//������һ����
	for (int j = 0; j < col; j++)
	{
		if (board[0][j]==board[1][j]&&board[1][j]==board[2][j] &&board[1][j]!=' ')
		{
			return board[1][j];
		}
	}
	//б����
	if (board[0][0]==board[1][1]&&board[1][1]==board[2][2] && board[1][1]!=' ')
	{
		return board[1][1];
	}
	if (board[0][2]==board[1][1]&&board[1][1]==board[2][0] &&board[1][1]!=' ')
	{
		return board[1][1];
	}
	
    
	//�ж��Ƿ�ƽ��  ��дһ������IsFull()
	if (IsFull(board,ROW,COL)==1)
	{
		return 'Q';
	}
	return 'C';
}