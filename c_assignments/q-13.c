#include <stdio.h>

int main(){
    int n=5;
    for (int i = 0; i < n*2; i+=2)
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