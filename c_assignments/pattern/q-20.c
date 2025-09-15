#include <stdio.h>

int main(){
    int n=6;
    int k=1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c", 64+k++);
        }
        printf("\n");
    }
    
    return 0;
}