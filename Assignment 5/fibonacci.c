#include <stdio.h>
int main(){
	int n;
	printf("Enter a limit : ");
    scanf("%d",&n);
    printf("Fibonacci : 0");
    n--;
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