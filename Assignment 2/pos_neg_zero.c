#include <stdio.h>
int main(){
	int n;
	printf("Enter a Number : ");
	scanf("%d",&n);
	
	if(n>0)
		printf("\nPositive");
	else if(n<0)
		printf("\nNegative");
	else
		printf("\nZero");
}
