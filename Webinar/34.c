#include <stdio.h>
int pow(int a, int b){
    if(b==1)
        return a;
    else
        return a*pow(a,b-1);
}
int main(){
    int a,b;
    printf("Enter a & b : ");
    scanf("%d %d",&a,&b);
    printf("Result : %d",pow(a,b));
    ;
}