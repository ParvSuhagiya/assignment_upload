#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < (n*2)-2; i+=2)
    {
        for (int j = 7; j >= i; j-=2)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            if (k == i)
            {
                for (int num = k; num >= 0; num--)
                {
                    printf("%c", 65+num);
                }
            }
            else
            {    
                printf("%c", 65+k);
            }
        }
        
        printf("\n");
    }

    for (int i = (n*2)-2; i >= 0 ; i-=2)
    {
        for (int j = 7; j >= i; j-=2)
        {
            printf(" ");     
        }
        for (int k = 0; k <= i; k++)
        {
            printf("%c", 65+k);
        }
        
        printf("\n");
    }
    
    return 0;
}