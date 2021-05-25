#include <stdio.h>
int main(){
	int hr,min,sec;
	printf("\nEnter duration : ");
	scanf("%d %d %d",&hr,&min,&sec);
	hr=hr*3600+min*60+sec;
	printf("\nSeconds : %d",hr);
}
