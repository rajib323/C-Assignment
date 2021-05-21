#include <stdio.h>
int main(){
	int n;
	printf("Enter a number : ");
    scanf("%d",&n);

    int res=n;
    int arm=0;
    while(res>0){
        int d=res%10;
        arm=arm+d*d*d;
        res=res/10;
    }
    if(arm==n)
        printf("\nArmstrong no. : %d",n);
    else
        printf("\nNot Armstrong no. : %d",n);
}