#include<stdio.h>

void main()
{
    int j=1,n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    int res=0;
    while(n>0)
    {
        res=res+(n%10)*j;
        n=n/10;
        j=j*2;
    }
    printf("%d",res);

}