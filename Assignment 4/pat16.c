#include <stdio.h>
int main(){
    int n;
    int z=0;
    scanf("%d",&n);
    for(int i=1;i<=(2*n);i=i+2){

        
        for(int j=n;j>=z;j--){
            printf(" ");
        }
        for(int j=i-z;j<=i;j++)
            printf("%c",j+64);

        for(int j=i-1;j>=i-z;j--)
            printf("%c",j+64);

        printf("\n");
        z++;
    }
}