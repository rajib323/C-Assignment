#include <stdio.h>
int main(){
	int n;
	printf("Enter a limit : ");
    scanf("%d",&n);
    printf("0");
    int res=0;
    int i=1;
    while(n>0){
        printf(" %d",i);
        int copy=i;
        i=i+res;
        res=copy;
        n--;
    }
}