#include <stdio.h>
int main(){
	int x,y;
	printf("Enter a X^Y : ");
    scanf("%d %d",&x,&y);
    int res=1;
    while(y>0){
        res=res*x;
        y--;
    }
    printf("\nX^Y : %d",res);
}