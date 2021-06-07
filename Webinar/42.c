#include <stdio.h>
void fibo(int f,int a, int b){
    if(f==1)
        printf(" %d",a);
    else{
        printf(" %d",a);
        fibo(f-1,b,(a+b));
    }
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Fibonacci : ");
    fibo(n,0,1);
}