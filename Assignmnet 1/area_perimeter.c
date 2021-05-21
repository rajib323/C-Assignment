#include <stdio.h>
int main(){
	int l,b,r;
	printf("\nEnter breadth and length");
	scanf("%d %d",&l,&b);
	float area=l*b;
	float perimeter=2*(l+b);
	printf("\nArea : %f",area);
	printf("\nPerimeter : %f",perimeter);
	
	
	printf("\nEnter radius");
	scanf("%d",&r);
	perimeter=2*3.14*r;
	area=3.14*r*r;
	printf("\nArea : %f",area);
	printf("\nPerimeter : %f",perimeter);
	
}
