#include <stdio.h>
int main(){
	int n;
	printf("Enter a Number : ");
	scanf("%d",&n);
	
	//using if-else
	if(n%2==0)
		printf("\nEven");
	else
		printf("\nOdd");
	return 0;
}
