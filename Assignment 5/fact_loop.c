#include <stdio.h>
int main(){
    int n,res=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        res=res*i;
    printf("Factorial : %d",res);
}