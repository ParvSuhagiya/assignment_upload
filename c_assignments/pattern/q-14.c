#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int a=1; 
        for (int j = 0; j < n; j++)
        {
            if (i+j+2 > n)
            {
                printf("%d", a++);     
            }
            else
            {
                printf(" ");     
            }
            
        }
        for (int j = 0; j < n-1; j++)
        {
            if ((i-1)>=j)
            {   
                printf("%d", a++);
            }
            else
            {
                printf(" ");
            }
            

        }
        
        printf("\n");
    }
    
    return 0;
}