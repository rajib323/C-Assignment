#include <stdio.h>
int main(){
    int n;
    int c=65;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            printf("%c ",(char)c);
            c++;
        }
        c--;
        printf("\n");
    }
}