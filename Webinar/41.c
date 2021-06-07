#include <stdio.h>
int perfect(int n){
    int res=0;
    for(int i=1;i<n;i++)
        if(n%i==0)
            res=res+i;
    return res;
}
int main(){
    int a,b,i;
    printf("Enter a number : ");
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
        if(i==perfect(i))
            printf("\nPerfect no. : %d",i);
}