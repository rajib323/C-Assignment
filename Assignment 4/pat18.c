#include<stdio.h>
int main()
{
  int r,n,c;

  printf("Enter number of lines: ");
  scanf("%d",&n);

  for(r=1;r<=n;r++)
  {
    for(c=1;c<=n-r+1;c++)
    printf("%c",c+64);


    if(r==1)
    printf("\b");

    for(c=1;c<=2*r-3;c++)
    printf(" ");

    for(c=1;c<=n-r+1;c++)
    printf("%c",n-r-c+2+64);

    printf("\n");
  }

  return 0;
}