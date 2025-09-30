// #include <stdio.h>

// int main(){
//     int n;
//     scanf("%d", &n);

//     for (int i = 1; i < n; i++)
//     {
//         for (int j = n; j >= i; j--)
//         {
//             printf(" ");     
//         }
//         for (int k = 1; k <= i; k++)
//         {
//             if (k == i )
//             {
//                 for (int num = i; num >= 1; num--)
//                 {
//                     printf("%d", num);
//                 }
//             }
//             else
//             {
//                 printf("%d", k);     
//             }
//         }
        
//         printf("\n");
//     }



//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf(" ");     
//         }
//         for (int k = 1; k <= n-i+1; k++)
//         {
//             if (k == n-i+1)
//             {
//                 for (int num = k; num >= 1; num--)
//                 {
//                     printf("%d", num);
//                 }
//             }
//             else{
//                 printf("%d", k);     
//             }
//         }
        
//         printf("\n");
//     }
    
//     return 0;
// }



#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n*2-1; i++)
    {
        for (int j = 1; j <= n*2-1; j++)
        {
            if ((i+j >= n+1) || (i-j >= n-1) || (j-i <= n-1) || (i+j <= (3*n) - 1))
            {
                int count = 1;
                for (int k = 1; k <= 2*n; k++)
                {
                    if (j<=i)
                    {
                        printf("%d", count++);
                    }
                    else
                    {
                        printf("%d", count--);
                    }
                    
                    
                }
                
                // printf("*");
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

