#include"game.h"
void Initboard(char board[3][3], int row, int col)//初始化棋盘
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
void Displayboard(char board[ROW][COL], int row, int col) // 打印棋盘布局
{
    int i = 0;
    for (i = 0; i < row; i++)                // 遍历每一行
    {
                                           
        int j = 0;
        for (j = 0; j < col; j++)
        {
            printf(" %c ", board[i][j]);     
            if (j < col - 1)
                printf("|");                  // 列分隔符（不换行）
        }
        printf("\n");                            
        if (i < row - 1) // 最后一行不需要分隔行
        {
            int j = 0;
            for (j = 0; j < col; j++)
            {
                printf("---"); // 打印横线
                if (j < col - 1)
                    printf("|"); // 列分隔符
            }
            printf("\n"); // 换行
            
        }
    }
}