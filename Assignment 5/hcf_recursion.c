#include <stdio.h>
int hcf(int a, int b){
    if(a>b)
        return hcf(a-b,b);
    else if(b>a)
        return hcf(a,b-a);
    else
        return a;
}
int main(){
    int a,b;
    printf("Enter a number : ");
    scanf("%d %d",&a,&b);
    printf("HCF : %d",hcf(a,b));
}