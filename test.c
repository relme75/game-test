#include"game.h"
void meau() //�˵�ѡ��
{
	printf("*************************************\n");
	printf("********1.��ʼ������ 0.�����˳�******\n");
	printf("*************************************\n");
}
void game()
{
	char board[ROW][COL] = { 0 };
	//��ʼ������
	Initboard(board,ROW,COL);
	//��ӡ����
	Displayboard(board,ROW,COL);
}
int main()
{
	int input = 0;
	do
	{
		meau();
		printf("��ѡ��>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}