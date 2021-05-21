#include <stdio.h>
int main() {
   char a;
   printf("Enter a character: ");
   scanf("%c", &a);
   
   if (a=='a'||a=='I'||a=='E'||a=='O'||a=='U'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
   		printf("\nVowels");
   	else
   		printf("\nConsonants");
   	
   	
	return 0;
}
