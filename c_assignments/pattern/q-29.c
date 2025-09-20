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
            printf("*");
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
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}