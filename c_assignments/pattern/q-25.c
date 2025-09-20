#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j!=i)
            {
                printf("%c", 64+j);
            }
            
            if (j==i)
            {
                for (int k = j; k > 0; k--)
                {
                    printf("%c", 64+k);
                }
                
            }
            
        }
        printf("\n");
    }
    
    return 0;
}