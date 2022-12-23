#include <stdio.h>
​
int main()
{
   int n;
   scanf("%d", &n);
   // 첫번째 줄
   for (int i = 1; i <= n - 1; i++)
   {
       printf(" ");
   }
   printf("*\n");
   // 2 ~ n번째 줄
   for (int i = 2; i <= n; i++)
   {
       // 외부 공백
       for (int j = 1; j <= n - i; j++)
       {
           printf(" ");
       }
       printf("*");
       // 내부 공백
       for (int k = 1; k <= (i - 1) * 2 - 1; k++)
       {
           printf(" ");
       }
       printf("*\n");
   }
   return 0;
}
