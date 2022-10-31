#include <stdio.h>
int main()
{
   int i, j;
   int n = 0;

   printf("Please enter the range of pyramid(1-8):\n");
   scanf("%d", &n);

   for (i = 0; i < n + 1; i++)
   {
      if (i != 0)
      {
         for (j = 0; j < n - i; j++)
         {
            printf(" ");
         }
      }
      for (j = 0; j < i; j++)
      {
         printf("#");
      }
      // printf("\t");
      for (j = 0; j < i; j++)
      {
         printf("#");
      }
      if (i != 0)
      {
         printf("\n");
      }
   }
}
