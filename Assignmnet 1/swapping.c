#include <stdio.h>
int main(){
	int a,b,r;
	
	//using third variable
	printf("\nEnter two numbers");
	scanf("%d %d",&a,&b);
	r=b;
	b=a;
	a=r;
	printf("\nAfter swapping : %d %d",a,b);
	
	//without using variable
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter swapping(2nd time) : %d %d",a,b);
	
}
