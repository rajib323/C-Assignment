#include <stdio.h>
int fact(int a, int b){
    if(a>b)
        return fact(a-b,b);
    else if(b>a)
        return fact(a,b-a);
    else
        return a;
}
int main(){
    int a,b;
    printf("Enter a number : ");
    scanf("%d %d",&a,&b);
    printf("HCF : %d",fact(a,b));
}