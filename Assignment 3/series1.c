#include <stdio.h>
int main(){
	int n;
	printf("Enter a limit : ");
    scanf("%d",&n);
    float res=0.0;
    int i=1;
    while(n>0){
        res=res+((float)1/i);
        i++;
        n--;
    }
    printf("Sum of series : %f",res);
}