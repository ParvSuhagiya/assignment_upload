#include <stdio.h>

int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int top = i;
            int left = j;
            int bottom = n-i-1;
            int right = n-j-1;
            
            int min = top;
            if (left < min){
              min = left;
            } 
            if (bottom < min){
              min = bottom;
            } 
            if (right < min){
              min = right;
            } 

            printf("%d", min + 1);
        }
        printf("\n");
    }
    return 0;
}

// **************************1st
// #include <stdio.h>

// int main(){
//   int n=5;
//   for (int i = n; i >= 1; i--)
//   {
//     for (int j = n; j >= 1; j--)
//     {
//       if (i==1 || i == n)
//       {
//         printf("%d", j);
//       }
//       else{
//         if (i+j==6)
//         {
//           printf("%d", j);
//         }
//         else
//         {
//           printf(" ");
//         }
//       }
      
//     }
//     printf("\n");
//   }
  

//   return 0;
// }

// ****************2nd
// #include <stdio.h>

// int main(){
//   int n=5;
//   int count=1;
//   for (int i = 1; i <= n; i++)
//   {
//     for (int j = 1; j <= n; j++)
//     {
//       if ((count*count) <= 10)
//       {
//         printf("  %d  ", count*count);
//         count++;
//       }
//       else if ((count*count) <= 100 && (count*count) > 10)
//       {
//         printf(" %d  ", count*count);
//         count++;
//       }
//       else if ((count*count) <= 1000 && (count*count) > 100)
//       {
//         printf(" %d ", count*count);
//         count++;
//       }
//     }
//     printf("\n");
//   }
  

//   return 0;
// }

// *****************3rd
// #include <stdio.h>

// int main(){
//   int n=5;
//   for (int i = 65; i <= n+65; i++)
//   {
//     for (int j = 65; j <= n+65; j++)
//     {
//         printf(" %c%c ", i,j);
//     }
//     printf("\n");
//   }
  

//   return 0;
// }


// *********************************4th

// #include <stdio.h>

// int main(){
//   int n=5;

//   for (int i = 1; i <= n*3-2; i++)
//   {
//     for (int j = 1; j <= n*2-1; j++)
//     {
//       if ((i+j == n+1) || (i+j == n-1) || (i-j == n-1) || (j-i == n-1) || (i+j == 2*n) || (i+j == 4*n-(n/2)) || (i-j == n*2-2) || (j-i == n*2-2)){
//         printf("*");
//       }
//       else
//       {
//         printf(" ");
//       }
      
      
//     }
//     printf("\n");
//   }
  

//   return 0;
// }