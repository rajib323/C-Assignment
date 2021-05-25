#include <stdio.h>
void roots(float a,float b,float c){
    float root1,root2;
    float disc=((b*b)-(4*a*c));
	printf("Roots are : ");
	if (disc>0){
		root1 = (-b + sqrt(disc)) / (2 * a);
        root2 = (-b - sqrt(disc)) / (2 * a);
        printf("\n%.2lf\t\t%.2lf", root1, root2);
	}
	else if (disc==0){
		root1 = -b / (2 * a);
        printf("\n%.2lf\t\t%.2lf", root1,root1);
	}
}
int main(){
    float a,b,c;
    printf("Enter a,b,c : ");
    scanf("%f %f %f",&a,&b,&c);

    roots(a,b,c);

}