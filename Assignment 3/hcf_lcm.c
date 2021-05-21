#include <stdio.h>
int main()
{
    int n1, n2;
    
    printf("Enter two positive integers: ");
    scanf("%d %d",&n1,&n2);
    int lcm=n1*n2;
    while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    printf("\nGCD = %d",n1);

    lcm = lcm/n1 ;
    printf("\nLCM = %d",lcm);

    return 0;
}