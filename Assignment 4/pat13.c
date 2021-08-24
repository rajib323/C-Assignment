#include <stdio.h>
int main(){
    int n,i,j;
    printf("Enter no. of rows(n) : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){

        
        for(j=n-1;j>=i;j--){
            printf(" ");
        }
        
        for(j=1;j<(i+i);j++)
            printf("*");


        printf("\n");
    }
}