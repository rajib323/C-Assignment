#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c;
	double root1,root2;
	printf("\nEnter three numbers : ");
	scanf("%f %f %f",&a,&b,&c);
	float disc=((b*b)-(4*a*c));
	
	if (disc>0){
		root1 = (-b + sqrt(disc)) / (2 * a);
        root2 = (-b - sqrt(disc)) / (2 * a);
        printf("\n%.2lf\t\t%.2lf", root1, root2);
	}
	else if (disc==0){
		root1 = -b / (2 * a);
        printf("\n%.2lf;", root1);
	}
	else{
		root1=sqrt(-disc)/(2*a);
		root2=-b/(2*a);
		
		printf("\n%.2lf + %.2lfi\t\t%.2lf - %.2lfi", root2,root1,root2,root1);
	}
	return 0;
}
