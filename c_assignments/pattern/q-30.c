#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            printf(" ");     
        }
        for (int k = 1; k <= i; k++)
        {
            if (k == i )
            {
                for (int num = i; num >= 1; num--)
                {
                    printf("%c", 64+num);
                }
            }
            else
            {
                printf("%c", 64+k);     
            }
        }
        
        printf("\n");
    }



    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");     
        }
        for (int k = 1; k <= n-i+1; k++)
        {
            if (k == n-i+1)
            {
                for (int num = k; num >= 1; num--)
                {
                    printf("%c", 64+num);
                }
            }
            else{
                printf("%c", 64+k);     
            }
        }
        
        printf("\n");
    }
    
    return 0;
}