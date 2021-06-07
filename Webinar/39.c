#include <stdio.h>
int arm(int n){
    if(n==0)
        return 0;
    else{
        return (n%10)*(n%10)*(n%10)+arm(n/10);
    }
}
int main(){
    int a,b,i;
    printf("Enter a range : ");
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
        if(i==arm(i))
            printf("\nArmstrong no. : %d",i);
}