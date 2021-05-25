#include <stdio.h>
void fact(int f,int a, int b){
    if(f==1)
        printf(" %d",a);
    else{
        printf(" %d",a);
        fact(f-1,b,(a+b));
    }
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Fibonacci : ");
    fact(n,0,1);
}