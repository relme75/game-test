#include"game.h"
void Initboard(char board[3][3], int row, int col)//��ʼ������
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < row; i++)
	{
		for ( j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void Displayboard(char board[ROW][COL], int row, int col) // ��ӡ���̲���
{
    int i = 0;
    for (i = 0; i < row; i++)                // ����ÿһ��
    {
                                           
        int j = 0;
        for (j = 0; j < col; j++)
        {
            printf(" %c ", board[i][j]);     
            if (j < col - 1)
                printf("|");                  // �зָ����������У�
        }
        printf("\n");                            
        if (i < row - 1) // ���һ�в���Ҫ�ָ���
        {
            int j = 0;
            for (j = 0; j < col; j++)
            {
                printf("---"); // ��ӡ����
                if (j < col - 1)
                    printf("|"); // �зָ���
            }
            printf("\n"); // ����
            
        }
    }
}