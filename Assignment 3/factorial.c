#include <stdio.h>
int main(){
	int n;
	printf("Enter a number : ");
    scanf("%d",&n);
    int res=1;
    int i=1;
    while(i<=n){
        res=res*i;
        i++;
    }

    printf("Factorial : %d",res);
}