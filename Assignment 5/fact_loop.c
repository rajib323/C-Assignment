#include <stdio.h>
void fact(n);
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    fact(n);
}
void fact(int n){
    int res=1;
    for(int i=1;i<=n;i++)
        res=res*i;
    printf("Factorial : %d",res);
}