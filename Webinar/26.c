#include <stdio.h>
int sod(int n){
    if(n==0)
        return 0;
    else{
        return (n%10)+sod(n/10);
    }
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("\nSum of digits : %d",sod(n));
}