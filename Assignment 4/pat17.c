#include <stdio.h>

int main() {
   int n,i,j,m=1;

   scanf("%d",&n);
   for(i = n; i >=1; i--) {
      for(j = 1; j < m; j++)
         printf(" "); 

      for(j = 1; j <=2*i-1; j++)
         printf("*");
      m++;
      printf("\n");
   }

   return 1;
}