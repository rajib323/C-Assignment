#include <stdio.h>
int main() {
   char a;
   printf("Enter a character: ");
   scanf("%c", &a);
   
   if(a>='a' && a<='z')
   	printf("Lower Case");
   else if(a>='A'&&a<='Z')
   	printf("Upper Case");
   else if(a>='0'&&a<='9')
   	printf("Digit");
   else
   	printf("Special Character");
   	
   	
	return 0;
}
