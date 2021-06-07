#include <stdio.h>
void bin(int n)
{
    if(n==1){
        printf("1");
    }
    else{
        bin(n/2);
        printf("%d",n%2);
    }
}
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    bin(n);
}