#include <stdio.h>
#define odd(a) \
    if(a%2!=0)\
        printf("%d\t",a);\

int main()
{
    int a,b,i;
    printf("\n Range : ");
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
        odd(i);
}