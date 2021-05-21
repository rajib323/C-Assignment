#include <stdio.h>
int main(){
	float f;
	printf("\nEnter temp : ");
	scanf("%f",&f);
	float temp=(5*(f-32))/9;
	printf("\nTemperature : %f",temp);
}
