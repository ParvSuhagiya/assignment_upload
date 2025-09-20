#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i != 1 && i != n)
            {
                if (j == 1 || j == n || (i == (n+1)/2 && j == (n+1)/2))
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