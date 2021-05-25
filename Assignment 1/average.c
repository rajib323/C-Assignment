#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter three numbers");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	float d=(a+b+c);
	d=d/3;
	
	printf("Average : %f",d);
	
}
