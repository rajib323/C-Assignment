#include <stdio.h>
int main(){
	int n;
	printf("Enter a Number : ");
	scanf("%d",&n);
	
	//using ternary operator
	n%2==0?printf("\nEven"):printf("\nOdd");
	
	return 0;
}
