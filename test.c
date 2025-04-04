#include"game.h"
void meau() //菜单选择
{
	printf("*************************************\n");
	printf("********1.开始三子棋 0.立即退出******\n");
	printf("*************************************\n");
}
void game()
{
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	Initboard(board,ROW,COL);
	//打印棋盘
	Displayboard(board,ROW,COL);
}
int main()
{
	int input = 0;
	do
	{
		meau();
		printf("请选择>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}