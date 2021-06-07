#include <stdio.h>
void lucas(int f,int a, int b){
    if(f==1)
        printf(" %d",a);
    else{
        printf(" %d",a);
        lucas(f-1,b,(a+b));
    }
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Lucas : ");
    lucas(n,2,1);
}