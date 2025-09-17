#include <stdio.h>

int main(){

    int row,col;
    printf("row : ", row);
    scanf("%d", &row);
    printf("col : ", col);
    scanf("%d", &col);

        for (int i = 1; i <= row; i++)
        {
            for (int j = 1; j <= col; j++)
            {
                if (i == 1 || i == row)
                {
                    printf("%d", j);
                }
                else
                {
                    if (j == 1 || j == col)
                    {
                        printf("%d", j);
                    }
                    else{
                        printf(" ");
                    }
                }
            }
            printf("\n");
        }
        
    return 0;
    }