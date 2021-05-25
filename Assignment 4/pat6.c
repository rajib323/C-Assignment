#include <stdio.h>
int main(){
    int n;
    int c=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        c=i;
        for (int j=1;j<=i;j++){
            printf("%c ",(char)c+64);
            c++;
        }
        printf("\n");
    }
}