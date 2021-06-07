#include <stdio.h>
int main(){
	int a;
	printf("Enter a Numbers : ");
	scanf("%d",&a);

	if(a%11==0)
		printf("\nYES");
	else
		printf("\nNO ");
	return 0;
}
