#include <stdio.h>
int main(){
	int n;
	printf("Enter a number : ");
    scanf("%d",&n);

    int arm=0;
    while(n>0){
        int d=n%10;
        arm=arm+d;
        n=n/10;
    }
    
    printf("\nSum of Digits : %d",arm);
}