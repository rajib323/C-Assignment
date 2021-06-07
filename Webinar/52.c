#include<stdio.h>
void bin(int n)
{
    /* step 1 */
    if (n > 1)
        bin(n / 2);
 
    /* step 2 */
    printf("%d", n % 2);
}
 
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    bin(n);
}