#include<stdio.h>

void main()
{
    int j=1,n;
    printf("Enter a number : ");
    int res=0;
    scanf("%d",&n);

    while(n>0)
    {
        res=res+(n%2)*j;
        j*=10;
        n=n/2;
    }
    printf("%d",res);

}