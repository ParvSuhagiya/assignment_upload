// #include <stdio.h>

// int main(){
//     int n;
//     scanf("%d", &n);
//     for (int i = 0; i < (n*2)-2; i+=2)
//     {
//         for (int j = 7; j >= i; j-=2)
//         {
//             printf(" ");
//         }
//         for (int k = 0; k <= i; k++)
//         {
//             printf("*");
//         }
        
//         printf("\n");
//     }

//     for (int i = (n*2)-2; i >= 0 ; i-=2)
//     {
//         for (int j = 7; j >= i; j-=2)
//         {
//             printf(" ");     
//         }
//         for (int k = 0; k <= i; k++)
//         {
//             printf("*");
//         }
        
//         printf("\n");
//     }
    
//     return 0;
// }


#include <stdio.h>

int main(){

    int n=5;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i+j) >= n)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        for (int j = 0; j < n-1; j++)
        {
            if ((i-1) >= j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (j>=i)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        
        for (int j = 0; j <= n-3; j++)
        {
            if ((i+j)< n-3)
            {
                printf("*");
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