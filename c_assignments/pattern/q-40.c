#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n*2; i+=2)
    {
        for (int j = n+1; j >= i; j-=2)
        {
        printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            if (i == (n*2)-2)
            {
                printf("*");
            }
            else{
                if (k == 0 || k == i)
                {
                    printf("*");
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