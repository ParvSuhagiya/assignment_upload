#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int count = 64;
    for (int i = 1; i <= n; i++)
    {
        count = 64;
        for (int j = 1; j <= (2*i)-1; j++)
        {
            if ( j <= i)
            {
                count++;
                printf("%c", count);
            }
            else
            {
                count--;
                printf("%c", count);
            }
        }
        printf("\n");
    }
    
    return 0;
}