#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
       printf("%c", 64+i);
    }
    
    return 0;
}