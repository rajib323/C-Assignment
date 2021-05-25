#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    n++;
    for(int i=0;i<n;i++){

        
        for(int j=n-1;j>i;j--){
            printf(" ");
        }
        
        for (int j=i;j>-i+1;j--){
            j%2==0?printf("0"):printf("1");
        }

        


        printf("\n");
    }
}