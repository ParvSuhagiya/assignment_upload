#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int count=0;
        for (int j = 1; j <= n; j++)
        {
            count++;
          if (j >= i || i == n-count || (i == count && j == 1 ) || (i == count && j == 2) || (i == count && j == 3) || (i == count && j == 4) || (i == count && j == 5))
          {
            printf("ds");
          }
          else
          {
            printf("*");
          }
          
          
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