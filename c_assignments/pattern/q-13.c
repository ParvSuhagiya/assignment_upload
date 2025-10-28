// #include <stdio.h>

// int main(){

//     int n;
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = n; j > i ; j--)
//         {
//             printf(" ");
//         }
//         for (int k = 1; k <= (2*i) - 1; k++)
//         {
//             printf("*");
//         }
//         printf("\n");

//     }

//     return 0;
// }

// optimized method --->

// #include <stdio.h>

// int main(){
//     int n;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (i+j+2 > n)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }

//         }
//         for (int j = 0; j < n-1; j++)
//         {
//             if ((i-1)>=j)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }

//         }

//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if(i + j >= n+1 && j - i <= n - 1)
            // if(i + j >= n + 1 && j - i <= n - 1) <--- working
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