#include <stdio.h>

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i != 0 && i != n - 1)
            {
                if (j == 1 || j == n)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}