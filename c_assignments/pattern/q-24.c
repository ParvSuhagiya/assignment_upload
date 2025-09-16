#include <stdio.h>

int main(){
    int n=5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j!=i)
            {
                printf("%d", j);
            } 
            else if (j==i)
            {
                for (int k = j; k > 0; k--)
                {
                    printf("%d", k);
                }
                
            }
            
        }
        printf("\n");
    }
    
    return 0;
}