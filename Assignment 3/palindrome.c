#include <stdio.h>
int main(){
	int n;
	printf("Enter a number : ");
    scanf("%d",&n);

    int res=n;
    int arm=0;
    while(res>0){
        arm=arm*10+res%10;
        res=res/10;
    }
    if(arm==n)
        printf("\nPlaindrome no. : %d",n);
    else
        printf("\nNot Palindrome no. : %d %d",n,arm);
}