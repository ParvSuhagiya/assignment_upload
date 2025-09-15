#include <stdio.h>

int main(){
    int n=4;
    for (int j = 1; j <= n; j++)
    {
        printf("\n");
        
        for (int i = 1; i <= n; i++)
        {
            printf("%d", i);
        }
    }
        
    return 0;
}