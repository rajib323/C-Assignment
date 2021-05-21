#include<stdio.h>


void main()
{
    int j=1,n;
    printf("Enter a no. : ");
    scanf("%d",&n);

    while(n>1)
    {
        if(n%2==1)
        {
            j=2;
            break;
        }
        n=n/2;
    }
    j==2?printf("Not a power"):printf("Power of 2");

}