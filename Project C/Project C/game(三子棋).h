#pragma once
#include <stdio.h>

#define ROW 3
#define COL 3

//��������
void Initboard(char board[ROW][COL],int row,int col);
void Displayboard(char board[ROW][COL], int row, int col);
void Palyermove(char board[ROW][COL], int row,int col);
void Computermove(char board[ROW][COL], int row, int col);


//�ж���Ӯ���������
//���ʤ     '*'
//����ʤ     '#'
//ƽ��       'Q'
//������Ϸ   'C'
char Iswin(char board[ROW][COL],int row,int col);
//�ж������Ƿ�ƽ�ֺ���
int IsFull(char board[ROW][COL], int row, int col);

