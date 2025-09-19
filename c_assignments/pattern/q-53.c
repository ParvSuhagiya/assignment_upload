#include <stdio.h>

int main(){
    int n=4,a=1;
    for (int i = 0; i < n*2; i+=2)
    {
        for (int j = 7; j >= i; j-=2)
        {
            printf(" ");     
        }
        for (int k = 1; k <= i+1; k++)
        {
            printf("%d", a++);
        }
        
        printf("\n");
    }
    
    return 0;
}