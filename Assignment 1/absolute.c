#include <stdio.h>
int main(){
	int a;
	printf("\nEnter number : ");
	scanf("%d",&a);
	
	int ab=a>0?a:-a;
	printf("\nAbsolute value : %d",ab);
}
