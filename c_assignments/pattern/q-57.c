#include <stdio.h>

int main(){
    int n=6;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            // if (i == 1 || i == n || j == 1 || j == n)
            // {
            //     printf("1");
            // }
            for (int p = 0; p < n/2; p++)
            {
                if (i == p+1 || i == n-p || j == p+1 || j == n-p)
                {
                    printf("%d", p);
                }
            }
            
            // else if (i == 3 && j == 3)
            // {
            //     printf("3");
            // }
            
            
            
            // printf("*");
        }
        printf("\n");
    }
    
    return 0;
}


// #include <stdio.h>

// int main() {
//     int n = 7;  // change n for different sizes
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             int top = i;
//             int left = j;
//             int bottom = n - 1 - i;
//             int right = n - 1 - j;
            
//             int min = top;
//             if (left < min) min = left;
//             if (bottom < min) min = bottom;
//             if (right < min) min = right;

//             printf("%d", min + 1);
//         }
//         printf("\n");
//     }
//     return 0;
// }