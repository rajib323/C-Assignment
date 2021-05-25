#include <stdio.h>
int main(){
    int n;
    int c=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for (int j=i;j>0;j--){
            j%2==0?printf("0"):printf("1");
        }
        printf("\n");
    }
}