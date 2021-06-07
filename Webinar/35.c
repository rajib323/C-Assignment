#include <stdio.h>
int main(){
	int a,b;
	char c;
	printf("Enter a Numbers : ");
	scanf("%d %d %c",&a,&b,&c);

	switch (c)
    {
        case '+':
            printf("\nA + B = %d",(a+b));
            break;
        case '-':
            printf("\nA - B = %d",(a-b));
            break;
        case '*':
            printf("\nA * B = %d",(a*b));
            break;
        case '%':
            printf("\nA %% B = %d",(a%b));
            break;
    }
	return 0;
}
