#include <stdio.h>
int main(){
	int a,b;
	char c;
	printf("Enter a Numbers : ");
	scanf("%d %d %c",&a,&b,&c);

	if(c=='+')
		printf("\nA + B = %d",(a+b));
	else if(c=='-')
		printf("\nA - B = %d",(a-b));
	else if(c=='*')
		printf("\nA * B = %d",(a*b));
	else if(c=='/')
		printf("\nA / B = %f",((float)a/b));
	return 0;
}
