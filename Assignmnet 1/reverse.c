#include <stdio.h>
int main(){
	int f;
	printf("\nEnter no. : ");
	scanf("%d",&f);
	int rev=((f%10)*10)+f/10;
	printf("\nTemperature : %d",rev);
}
