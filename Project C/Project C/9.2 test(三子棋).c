#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include "game(������).h"

//void menu()
//{
//	printf("***********************\n");
//	printf("*****1.game 0.exit*****\n");
//	printf("***********************\n");
//}
//void game()
//{
//	int ret = 0;
//	char board[ROW][COL] = { 0 };
//	//��ʼ��������
//	Initboard(board,ROW,COL);
//	//��ӡ������Ŀ��
//	Displayboard(board,ROW,COL);
//	
//	//����
//	while (1)
//	{
//
//		//�������
//		Palyermove(board,ROW,COL);
//		Displayboard(board, ROW, COL);
//		//�ж�˭Ӯ˭����
//		//�����������ж�
//		ret = Iswin(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//
//		//��������
//		Computermove(board,ROW,COL);
//		Displayboard(board, ROW, COL);
//		//������������ж�
//		ret = Iswin(board,ROW,COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//	}
//	if (ret == '*')
//	{
//		printf("���Ӯ\n");
//	}
//	else if (ret == '#')
//	{
//		printf("����Ӯ\n");
//	}
//    else
//	{
//		printf("ƽ��\n");
//	}
//
//
//}
//void test()
//{
//	int input = 1;
//	srand((unsigned int) time(NULL));
//	while (input)
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ��");
//			break;
//		default:
//			printf("����������������룺\n");
//			break;
//		}
//	}
//	
//}

//�������
//int main()
//{
//	test();
//	return 0;
//}