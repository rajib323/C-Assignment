#include <stdio.h>
int fact(int f){
    if(f==1)
        return 1;
    else
        return f*fact(f-1);
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Factorial : %d",fact(n));
}