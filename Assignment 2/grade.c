#include <stdio.h>
int main(){
	int n;
	printf("Enter a Number : ");
	scanf("%d",&n);
	
	//using if-else
	if(n<=100&&n>=90)
		printf("\nGrade : O");
	else if(n<=89&&n>=80)
		printf("\nGrade : E");
	else if(n<=79&&n>=70)
		printf("\nGrade : A");
	else if(n<=69&&n>=60)
		printf("\nGrade : B");
	else if(n<=59&&n>=40)
		printf("\nGrade : C");
	else if(n<=40&&n>=39)
		printf("\nGrade : D");
	else
		printf("\nGrade : F");
		

	return 0;
}
