#include <stdio.h>

int main(){
    int n=5;

    for (int i = n*2; i >= 0; i-=2)
    {
        for (int j = 0; j <= (n-i)+3; j+=2)
        {
        printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            if (i == n*2)
            {
                printf("*");
            }
            else
            {
                if (k==0 || k == i)
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