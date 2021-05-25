#include<stdio.h>
int main()
{
  int n;
  int z=1;
  printf("Enter number of lines: ");
  scanf("%d",&n);
  for(int i=0; i<n; i++)
  {
    if(i==0)
      for(int j=0;j<n+2;j++)
        printf("*");
    else{
      for(int j=0;j<(n+2-z)/2;j++)
        printf("*");
      for(int j=0;j<z;j++)
        printf(" ");
      for(int j=0;j<(n+2-z)/2;j++)
        printf("*");
      z=z+2;
    }
    printf("\n");
  }
  return 0;
}